//
// Created by Seyeon Lim on 11/5/23.
//

#include "Blockchain.h"

//Blockchain constructor
Blockchain::Blockchain(uint32_t difficulty) {
    //genesis block; since we need a previous block to refer to
    chain.emplace_back(Block(0, "genesis block"));
    nDifficulty = difficulty;
}

//adding a block
void Blockchain::addBlock(Block newBlock) {
    //the previous block to add the new block to
    newBlock.prevHash = getLastBlock().getHash();
    //attempt mining the block
    newBlock.mineBlock(nDifficulty);
    //add to the chain
    chain.push_back(newBlock);
}

//getting the last block of chain
Block Blockchain::getLastBlock() const {
    return chain.back();
}
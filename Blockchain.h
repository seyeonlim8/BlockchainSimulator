//
// Created by Seyeon Lim on 11/5/23.
//

#ifndef BLOCKCHAIN_BLOCKCHAIN_H
#define BLOCKCHAIN_BLOCKCHAIN_H

#include <cstdint>
#include <vector>
#include "Block.h"

class Blockchain {
public:
    Blockchain(uint32_t difficulty);
    void addBlock(Block newBlock);

private:
    uint32_t nDifficulty;
    std::vector<Block> chain;
    Block getLastBlock() const;
};

#endif //BLOCKCHAIN_BLOCKCHAIN_H

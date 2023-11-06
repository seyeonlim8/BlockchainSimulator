//
// Created by Seyeon Lim on 11/5/23.
//

#ifndef BLOCKCHAIN_BLOCK_H
#define BLOCKCHAIN_BLOCK_H

#include <cstdint>
#include <iostream>

class Block {
public:
    std::string prevHash;

    //unsigned 32-bit integer; block's index
    //dataIn; block's data. Make const to ensure data is unchangeable
    Block(uint32_t indexIn, const std::string &dataIn);
    std::string getHash();
    void mineBlock(uint32_t nDifficulty);

private:
    uint32_t nIndex;
    int64_t nonce;
    std::string sData;
    std::string sHash;
    time_t tTime;
    //make const to ensure the method cannot change the variables in Block class
    std::string calculateHash() const;
};

#endif //BLOCKCHAIN_BLOCK_H

//
// Created by Seyeon Lim on 11/5/23.
//

#include <sstream>
#include "Block.h"
//Using SHA256 hashing technique
#include "sha256.h"

//Block constructor; const members must be initialized with an initializer list
Block::Block(uint32_t indexIn, const std::string &dataIn) : nIndex(indexIn), sData(dataIn) {
    nonce = -1;
    //set to current time
    tTime = time(nullptr);
}

//Hash getter
std::string Block::getHash() {
    return sHash;
}

//Proof of work
void Block::mineBlock(uint32_t difficulty) {
    //leave room for null terminator
    char cstr[difficulty+1];
    for(uint32_t i = 0; i < difficulty; i++) {
        //fill array with zeros first
        cstr[i] = '0';
    }
    cstr[difficulty] = '\0';
    std::string str(cstr);

    //loop until we have n leading zeros
    do {
        nonce++;
        sHash = calculateHash();
    } while (sHash.substr(0, difficulty) != str);
    std::cout << "Block mined: " << sHash << std::endl;
}

//using inline function for faster execution for short functions.
inline std::string Block::calculateHash() const {
    std::stringstream ss;
    ss << nIndex << tTime << sData << nonce << prevHash;
    //convert ss to string
    return sha256(ss.str());
}
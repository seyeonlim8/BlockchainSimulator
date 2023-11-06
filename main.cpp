//
// Created by Seyeon Lim on 11/5/23.
//

#include "Blockchain.h"

int main() {
    Blockchain myBlockchain = Blockchain(5);
    Block b1 = Block(1, "data1");
    Block b2 = Block(2, "data2");
    Block b3 = Block(3, "data3");

    std::cout << "Mining block 1..." << std::endl;
    myBlockchain.addBlock(b1);
    std::cout << "Mining block 2..." << std::endl;
    myBlockchain.addBlock(b2);
    std::cout << "Mining block 3..." << std::endl;
    myBlockchain.addBlock(b3);

    return 0;
}

# BlockchainSimulator
A simple blockchain simulator.

This project is a Blockchain Simulator that demonstrates the basic operations of a blockchain. It's a simple, educational tool that shows how a blockchain starts with a genesis block, how new blocks are added with a set difficulty, and how blocks are mined.

## Features
* Dynamic Blockchain Initialization: Start a blockchain with a specified difficulty level for the Proof of Work algorithm.
* Block Mining Simulation: Simulate the mining of blocks by adding them to the blockchain with a mock Proof of Work process.
* Console Logging: Visual feedback through the console to show the progress of block mining.

## Prerequisites
Before running this simulator, ensure you have the following installed:
* A C++ compiler (e.g., GCC, Clang, MSVC)

Upon running, the simulator will:
* Initialize a blockchain with a specified difficulty.
* Mine three blocks with sample data, showing the mining progress in the console.

## Author
**Seyeon Lim(https://github.com/seyeonlim8)** - *Initial Work*

## Acknowledgments
Special thanks to:

* Dave Nash - For foundational blockchain concepts and block creation logic.
* Oliver Gay - For the original SHA-256 implementation.
  * Updated version sourced from zedwood.com, which has been instrumental in the development of the SHA-256 function used in this project.

Inspired by the functionality and simplicity of early blockchain technology.

## License

The SHA-256 implementation is licensed under the Modified BSD License. See the original source at [zedwood.com](http://www.zedwood.com/article/cpp-sha256-function) and [Olivier Gay's work](http://www.ouah.org/ogay/sha2/) for more details.

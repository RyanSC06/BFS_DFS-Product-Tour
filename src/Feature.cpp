#include <iostream>
#include "Feature.hpp"
using namespace std;

// #include <limits>
// cin.ignore(numeric_limits<streamsize>::max(),'\n');

Feature::Feature(int state) {
    this->state = state;
}

void Feature::printDisplay() {
    if (this->state == 0) {  //MAIN
        cout << "Layar Utama" << endl;
        cout << "===========================================================" << endl;
        cout << "|                          Ryan Samuel Chandra (13521140) |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|           BFS-DFS ALGORITHM STRATEGIES PUZZLE           |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|         ' .              _                 ,-.          |" << endl;
        cout << "|        \\~~~/             \\'-_,#          _(*_*)_        |" << endl;
        cout << "|         \\_/            \\'--','`|        (_  o  _)       |" << endl;
        cout << "|          Y            \\`---`  /           / o \\         |" << endl;
        cout << "|         _|_            `----'`           (_/ \\_)        |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|       RENGOKU         YANMA GUST          GEATS         |" << endl;
        cout << "|         112               24                8           |" << endl;
        cout << "|                                                         |" << endl;
        cout << "===========================================================" << endl;
    } else if (this->state == 1) {  //ISI RENGOKU
        cout << "Layar RENGOKU" << endl;
        cout << "===========================================================" << endl;
        cout << "|                          Ryan Samuel Chandra (13521140) |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|           BFS-DFS ALGORITHM STRATEGIES PUZZLE           |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|                                       RESSHA            |" << endl;
        cout << "|       KUNAI                                             |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|                        SHODOPHONE                       |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|         CALIBUR                                         |" << endl;
        cout << "|                                          SHURIKEN       |" << endl;
        cout << "|                      ZECTER                             |" << endl;
        cout << "|                                                         |" << endl;
        cout << "===========================================================" << endl;
    } else if (this->state == 2) {  //ISI YANMA GUST
        cout << "Layar YANMA GUST" << endl;
        cout << "===========================================================" << endl;
        cout << "|                          Ryan Samuel Chandra (13521140) |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|           BFS-DFS ALGORITHM STRATEGIES PUZZLE           |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|       1. KLAIM                                          |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|       2. SUMBANGKAN                                     |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|                                                         |" << endl;
        cout << "===========================================================" << endl;
    } else if (this->state == 3) {  //ISI GEATS
        cout << "Layar GEATS" << endl;
        cout << "===========================================================" << endl;
        cout << "|                          Ryan Samuel Chandra (13521140) |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|           BFS-DFS ALGORITHM STRATEGIES PUZZLE           |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|       1. KONFIRMASI                                     |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|       2. BATALKAN                                       |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|                                                         |" << endl;
        cout << "===========================================================" << endl;
    } else if (this->state == 4) {  //ISI 112
        cout << "Layar 112" << endl;
        cout << "===========================================================" << endl;
        cout << "|                          Ryan Samuel Chandra (13521140) |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|           BFS-DFS ALGORITHM STRATEGIES PUZZLE           |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|              [NOMOR]                  [HARGA]           |" << endl;
        cout << "|       SHODOPHONE = (5x4)-15            30000            |" << endl;
        cout << "|       RESSHA = (10/4)+(1/2)            17500            |" << endl;
        cout << "|       CALIBUR = (7+3)-8                24000            |" << endl;
        cout << "|       SHURIKEN = (4^3)/16              10000            |" << endl;
        cout << "|       ZECTER = (11-12)*(-1)            45000            |" << endl;
        cout << "|       KUNAI = y | (2y+1)=13            12500            |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|                                                         |" << endl;
        cout << "===========================================================" << endl;
    } else if (this->state == 5) {  //ISI 24
        cout << "Layar GEATS" << endl;
        cout << "===========================================================" << endl;
        cout << "|                          Ryan Samuel Chandra (13521140) |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|           BFS-DFS ALGORITHM STRATEGIES PUZZLE           |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|       1. 30000                                          |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|       2. 50000                                          |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|                                                         |" << endl;
        cout << "===========================================================" << endl;
    } else if (this->state == 6) {
        cout << "Layar 8" << endl;
        cout << "===========================================================" << endl;
        cout << "|                          Ryan Samuel Chandra (13521140) |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|           BFS-DFS ALGORITHM STRATEGIES PUZZLE           |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|                   Kode Pembelian Anda:                  |" << endl;
        cout << "|                        12Y41VSC06                       |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|                                                         |" << endl;
        cout << "|                                                         |" << endl;
        cout << "===========================================================" << endl;
    }
}

int Feature::getState() {
    return (this->state);
}
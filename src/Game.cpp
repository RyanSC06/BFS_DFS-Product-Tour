#include <iostream>
#include "Game.hpp"
using namespace std;

Game::Game(Graph app_structure, Button list_button[]) {
    char nameA[] = "ZECTER";
    char nameB[] = "CALIBUR";
    char nameC[] = "RESSHA";
    char nameD[] = "SHURIKEN";
    char nameE[] = "SHODOPHONE";
    char nameF[] = "KUNAI";

    Things A = Things(1, 45000, nameA);
    Things B = Things(2, 24000, nameB);
    Things C = Things(3, 17500, nameC);
    Things D = Things(4, 10000, nameD);
    Things E = Things(5, 30000, nameE);
    Things F = Things(6, 12500, nameF);

    this->buyable[0] = A;
    this->buyable[1] = B;
    this->buyable[2] = C;
    this->buyable[3] = D;
    this->buyable[4] = E;
    this->buyable[5] = F;

    this->money = 0;
    this->idx_empty = 0;
    
    for (int i = 0; i < 17; i++) {
        this->list_button[i] = list_button[i];
    }

    this->app_structure = app_structure;
    this->curr_state = 0;
}
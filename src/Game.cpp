#include <iostream>
#include "Game.hpp"
using namespace std;

Game::Game(vector<Button*> list_button) {
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

    Graph g(17);
    g.addEdge(0, 1, true);
    g.addEdge(0, 4, true);
    g.addEdge(0, 7, true);
    g.addEdge(0, 10, true);
    g.addEdge(0, 12, true);
    g.addEdge(0, 15, true);

    g.addEdge(1, 2, true);
    g.addEdge(1, 3, true);

    g.addEdge(4, 5, true);
    g.addEdge(4, 6, true);

    g.addEdge(7, 8, true);
    g.addEdge(7, 9, true);

    g.addEdge(10, 11, true);

    g.addEdge(12, 13, true);
    g.addEdge(12, 14, true);

    g.addEdge(15, 16, true);

    this->app_structure = g;



    this->money = 0;
    this->idx_empty = 0;
    
    this->list_button = list_button;

    this->curr_state = -1;
}

Graph Game::getGraph() {
    return (this->app_structure);
}

vector<Button*> Game::getListButton() {
    return (this->list_button);
}

int Game::getCurrentState() {
    return (this->curr_state);
}

void Game::setCurrentState(int state) {
    this->curr_state = state;
}

void Game::doBFS() {
    this->app_structure.BFS(0);
}

void Game::doDFS() {
    this->app_structure.DFS(0);
}
#ifndef _GAME_HPP_
#define _GAME_HPP_

#include <cstring>
#include "Feature.hpp"
#include "Button.hpp"
#include "Things.hpp"
#include "Graph.hpp"

class Game {
  private:
    int money;
    int change;
    vector<Things> inventory;
    Things buyable[6];
    
    vector<Button*> list_button;
    vector<Things> cart;
    int priceCart = 0;
    Graph app_structure;
    int curr_state;

  public:
    Game(vector<Button*> list_button);
    
    Graph getGraph();
    vector<Button*> getListButton();
    int getMoney();
    vector<Things> getInventory();
    int getCurrentState();
    void setCurrentState(int state);
    
    int countTotalPrice();
    void cartToInventory();

    void doBFS();
    void doDFS();
    void inputCommand();
};

#endif
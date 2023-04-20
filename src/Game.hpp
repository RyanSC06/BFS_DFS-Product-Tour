#ifndef _GAME_HPP_
#define _GAME_HPP_

#include "Feature.hpp"
#include "Button.hpp"
#include "Things.hpp"
#include "Graph.hpp"

class Game {
  private:
    int money;
    int idx_empty;
    Things inventory[100];
    Things buyable[6];
    
    vector<Button*> list_button;
    Graph app_structure;
    int curr_state;

  public:
    Game(vector<Button*> list_button);
    Graph getGraph();
    vector<Button*> getListButton();
    int getCurrentState();
    void setCurrentState(int state);
    void doBFS();
    void doDFS();
    // void inputCommand();
};

#endif
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
    
    Button list_button[17];
    Graph app_structure;
    int curr_state;

  public:
    Game(Graph app_structure, Button list_button[]);
    // int inputCommand();
};

#endif
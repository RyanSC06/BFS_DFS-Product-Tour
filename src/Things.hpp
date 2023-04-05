#ifndef _THINGS_HPP_
#define _THINGS_HPP_

#include <stdio.h>
#include <cstring>
using namespace std;

class Things {
  private:
    int ID;
    int price;
    char name[10];
  public:
    Things();
    Things(int ID, int price, char name[]);
    int getID();
    int getPrice();
    char* getName();
    Things& operator= (const Things&);
};

#endif
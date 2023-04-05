#ifndef _FEATURE_HPP_
#define _FEATURE_HPP_

#include <stdio.h>
using namespace std;

class Feature {
  protected:
    int state;
  public:
    Feature(int);
    void virtual showTour() = 0;
    void printDisplay();
    int getState();
};

#endif
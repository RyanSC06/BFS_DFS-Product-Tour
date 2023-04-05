#ifndef _BUTTON_HPP_
#define _BUTTON_HPP_

#include <iostream>
#include "Feature.hpp"
using namespace std;

class Button : public Feature {
  private:
    
  public:
    Button();
    Button(int);
    void showTour();
    Button& operator= (const Button&);
};

class Button11 : public Button {  //RENGOKU
  private:
    
  public:
    Button11();
    void showTour();
};

class Button12 : public Button {  //YANMA GUST
  private:
    
  public:
    Button12();
    void showTour();
};

class Button13 : public Button {  //GEATS
  private:
    
  public:
    Button13();
    void showTour();
};

class Button14 : public Button {  //112
  private:
    
  public:
    Button14();
    void showTour();
};

class Button15 : public Button {  //24
  private:
    
  public:
    Button15();
    void showTour();
};

class Button16 : public Button {  //8
  private:
    
  public:
    Button16();
    void showTour();
};

#endif
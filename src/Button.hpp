#ifndef _BUTTON_HPP_
#define _BUTTON_HPP_

#include <iostream>
#include "Feature.hpp"
#include "Things.hpp"
using namespace std;

class Button : public Feature {
  private:
    
  public:
    Button(int);
    void virtual showTour() = 0;
    Button& operator= (const Button&);
};

class Button00 : public Button {  //MAIN
  private:
    
  public:
    Button00();
    void showTour();
};

class Button01 : public Button {  //REN
  private:
    
  public:
    Button01();
    void showTour();
};

class Button02 : public Button {  //YANM
  private:
    
  public:
    Button02();
    void showTour();
};

class Button03 : public Button {  //EAT
  private:
    
  public:
    Button03();
    void showTour();
};

class Button04 : public Button {  //112
  private:
    
  public:
    Button04();
    void showTour();
};

class Button05 : public Button {  //24
  private:
    
  public:
    Button05();
    void showTour();
};

class Button06 : public Button {  //8
  private:
    
  public:
    Button06();
    void showTour();
};

class Button11 : public Button {  //PILIH BARANG
  private:
    
  public:
    Button11();
    void showTour();
};

class Button12 : public Button {  //BACK DARI 1
  private:
    
  public:
    Button12();
    void showTour();
};

class Button21 : public Button {  //KLAIM ATAU SUMBANGKAN
  private:
    
  public:
    Button21();
    void showTour();
};

class Button22 : public Button {  //BACK DARI 2
  private:
    
  public:
    Button22();
    void showTour();
};

class Button31 : public Button {  //KONFIRMASI ATAU BATALKAN
  private:
    
  public:
    Button31();
    void showTour();
};

class Button32 : public Button {  //BACK DARI 3
  private:
    
  public:
    Button32();
    void showTour();
};

class Button41 : public Button {  //BACK DARI 4
  private:
    
  public:
    Button41();
    void showTour();
};

class Button51 : public Button {  //TOP UP
  private:
    
  public:
    Button51();
    void showTour();
};

class Button52 : public Button {  //BACK DARI 5
  private:
    
  public:
    Button52();
    void showTour();
};

class Button61 : public Button {  //BACK DARI 6
  private:
    
  public:
    Button61();
    void showTour();
};

#endif
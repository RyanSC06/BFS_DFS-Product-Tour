#include <iostream>
#include "Button.hpp"
using namespace std;

Button::Button() : Feature(0) {
    //do nothing
}

Button::Button(int state) : Feature(state) {
    //do nothing
}

void Button::showTour() {
    cout << endl << "Selamat datang, pelanggan yang kami hormati." << endl;
}

Button& Button::operator= (const Button& other) {
    this->state = other.state;
    return *this;
}

Button11::Button11() : Button(1) {
    
}

void Button11::showTour() {
    cout << endl << "Masukkan \'RENGOKU\' untuk mencari barang" << endl;
}

Button12::Button12() : Button(2) {
    
}

void Button12::showTour() {
    cout << endl << "Masukkan \'YANMA GUST\' untuk klaim kembalian" << endl;
}

Button13::Button13() : Button(3) {
    
}

void Button13::showTour() {
    cout << endl << "Masukkan \'GEATS\' untuk konfirmasi pembelian" << endl;
}

Button14::Button14() : Button(4) {
    
}

void Button14::showTour() {
    cout << endl << "Masukkan angka di bawah \'RENGOKU\' untuk melihat nomor barang" << endl;
}

Button15::Button15() : Button(5) {
    
}

void Button15::showTour() {
    cout << endl << "Masukkan angka di bawah \'YANMA GUST\' untuk isi ulang saldo" << endl;
}

Button16::Button16() : Button(6) {
    
}

void Button16::showTour() {
    cout << endl << "Masukkan angka di bawah \'GEATS\' untuk melihat kode pembelian" << endl;
}
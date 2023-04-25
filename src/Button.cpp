#include <iostream>
#include "Button.hpp"
using namespace std;

Button::Button(int state) : Feature(state) {
    //do nothing
}

Button& Button::operator= (const Button& other) {
    this->state = other.state;
    return *this;
}

Button00::Button00() : Button(0) {

}

void Button00::showTour() {
    cout << endl << "Selamat datang, pelanggan yang kami hormati." << endl;
    cout << "Berikut adalah langkah demi langkah menggunakan aplikasi ini:" << endl;
}

Button01::Button01() : Button(0) {
    
}

void Button01::showTour() {
    cout << endl << "Anda dapat memberi input \'REN\' untuk mencari barang" << endl;
}

Button02::Button02() : Button(0) {
    
}

void Button02::showTour() {
    cout << endl << "Anda dapat memberi input \'YANM\' untuk klaim kembalian" << endl;
}

Button03::Button03() : Button(0) {
    
}

void Button03::showTour() {
    cout << endl << "Anda dapat memberi input \'EAT\' untuk konfirmasi pembelian" << endl;
}

Button04::Button04() : Button(0) {
    
}

void Button04::showTour() {
    cout << endl << "Untuk melihat nomor barang, Anda dapat mengetik angka di bawah \'REN\'" << endl;
}

Button05::Button05() : Button(0) {
    
}

void Button05::showTour() {
    cout << endl << "Untuk isi ulang saldo, Anda dapat mengetik angka di bawah \'YANM\'" << endl;
}

Button06::Button06() : Button(0) {
    
}

void Button06::showTour() {
    cout << endl << "Untuk melihat kode pembelian, Anda dapat mengetik angka di bawah \'EAT\'" << endl;
}

Button11::Button11() : Button(1) {
    
}

void Button11::showTour() {
    cout << endl << "Anda dapat memberi input nomor barang untuk menambahkannya ke keranjang Anda" << endl;
}

Button12::Button12() : Button(1) {
    
}

void Button12::showTour() {
    cout << endl << "Anda dapat memberi input \'BACK\' untuk kembali ke halaman utama" << endl;
}

Button21::Button21() : Button(2) {
    
}

void Button21::showTour() {
    cout << endl << "Anda dapat memberi input \'1\' untuk mendapatkan kembalian" << endl;
    cout << endl << "Anda dapat memberi input \'2\' untuk menyumbangkan kembalian" << endl;
}

Button22::Button22() : Button(2) {
    
}

void Button22::showTour() {
    cout << endl << "Anda dapat memberi input \'BACK\' untuk kembali ke halaman utama" << endl;
}

Button31::Button31() : Button(3) {
    
}

void Button31::showTour() {
    cout << endl << "Anda dapat memberi input \'1\' untuk konfirmasi pembelian" << endl;
    cout << endl << "Anda dapat memberi input \'2\' untuk membatalkan pembelian" << endl;
}

Button32::Button32() : Button(3) {
    
}

void Button32::showTour() {
    cout << endl << "Anda dapat memberi input \'BACK\' untuk kembali ke halaman utama" << endl;
}

Button41::Button41() : Button(4) {
    
}

void Button41::showTour() {
    cout << endl << "Anda dapat memberi input \'BACK\' untuk kembali ke halaman utama" << endl;
}

Button51::Button51() : Button(5) {
    
}

void Button51::showTour() {
    cout << endl << "Anda dapat memberi input \'1\' untuk isi ulang saldo sebesar 30000" << endl;
    cout << endl << "Anda dapat memberi input \'2\' untuk isi ulang saldo sebesar 50000" << endl;
}

Button52::Button52() : Button(5) {
    
}

void Button52::showTour() {
    cout << endl << "Anda dapat memberi input \'BACK\' untuk kembali ke halaman utama" << endl;
}

Button61::Button61() : Button(6) {
    
}

void Button61::showTour() {
    cout << endl << "Anda dapat memberi input \'BACK\' untuk kembali ke halaman utama" << endl;
}
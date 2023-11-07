/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   multiplos.cpp
 * Author: guiva
 * 
 * Created on 8 de Agosto de 2023, 15:59
 */

#include "multiplos.hpp"
#include <iostream>

using namespace std;

multiplos::multiplos() {
}

multiplos::multiplos(const multiplos& orig) {
}

multiplos::~multiplos() {
}
void multiplos::lerDados(){
    int a,b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    this->verificaMultiplo(a,b);
    
    
}
void multiplos::verificaMultiplo(int a, int b){
    if(a%b == 0 || b%a == 0){
        cout << "São múltiplos";
    }else{
        cout << "Não são múltiplos";
    }
}


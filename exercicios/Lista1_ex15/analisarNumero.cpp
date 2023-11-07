/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   analisarNumero.cpp
 * Author: guiva
 * 
 * Created on 9 de Agosto de 2023, 00:27
 */

#include "analisarNumero.hpp"
#include <iostream>

using namespace std;

analisarNumero::analisarNumero() {
}

analisarNumero::analisarNumero(const analisarNumero& orig) {
}

analisarNumero::~analisarNumero() {
}
void analisarNumero::lerDados(){
    int num;
    cout << "digite um numero qualquer: ";
    cin >> num;
    parOuImpar(num);
    cout << " e um ";
    this->positivoOuNegativo(num);
    
}
void analisarNumero::parOuImpar(int num){
    if(num%2==0){
        cout << "É um numero PAR";
    }else{
        cout << "É um número ÍMPAR";
    }
}
void analisarNumero::positivoOuNegativo(int num){
    if(num<0){
        cout << "Numero NEGATIVO";
    }else{
        cout << "Número POSITIVO";
    }
}
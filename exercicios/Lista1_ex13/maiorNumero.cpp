/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   maiorNumero.cpp
 * Author: guiva
 * 
 * Created on 8 de Agosto de 2023, 19:15
 */

#include "maiorNumero.hpp"
#include <iostream>

using namespace std;

maiorNumero::maiorNumero() {
}

maiorNumero::maiorNumero(const maiorNumero& orig) {
}

maiorNumero::~maiorNumero() {
}
void maiorNumero::lerDados(){
    int a,b,c;
    
    cout << "valor 1: ";
    cin >> a;
    cout << "valor 2: ";
    cin >> b;
    cout << "valor 3: ";
    cin >> c;
    if(a!=b && b!=c && c!=a){
        cout << "O maior numero encontrado é: " << this->verificaMaiorNumero(a,b,c);
    }else {
        cout << "Provávelmente um ou mais números são IGUAIS!\n"
                "Re-execute o programa e digite números DIFERENTES\n"
                "para a comparação "<< endl;
    }
    
}
int maiorNumero::verificaMaiorNumero(int a, int b, int c){
    int maior;
    if(a>b && a>c){
         maior = a;
    }else 
        if(b>a && b>c){
         maior = b;
    }else 
        if(c>a && c>b){
         maior = c;
        }
  return maior; 
}


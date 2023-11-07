/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   calcNumeros.cpp
 * Author: guiva
 * 
 * Created on 3 de Agosto de 2023, 16:00
 * 
 */

#include "calcNumeros.hpp"
#include <iostream>
#include <cmath>

using namespace std;

calcNumeros::calcNumeros() {
}

calcNumeros::calcNumeros(const calcNumeros& orig) {
}

calcNumeros::~calcNumeros() {
}
void calcNumeros::lerDados(){
    int a = 0 , b = 0, c = 0;
    
    cout << "Determine os valores de R e S para realizar os cálculos \n";
    cout << "Digite valor A: ";
    cin >> a;
    cout << "Digite valor B: ";
    cin >> b;
    cout << "Digite valor c: ";
    cin >> c;
       
    int r = this->calcularR(a,b);
    int s = this->CalcularS(a,c);
    float d = this->calcExpressao(r,s);
    cout << "O resultado da Expressão é: " << d << endl;
}
    int calcNumeros::calcularR(int a, int b){
        int r;
        
        r = pow(a + b, 2);
        return r;
        
    }
    int calcNumeros::CalcularS(int b, int c){
        int s;
        
        s = pow(b+c, 2);
        return s;
    }
    
    float calcNumeros::calcExpressao(int r, int s){
       float d =0.0;
       
       d = (r+s)/2;
       
       return d;
               
    } 

 


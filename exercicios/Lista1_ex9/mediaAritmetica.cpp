/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   mediaAritmetica.cpp
 * Author: guiva
 * 
 * Created on 8 de Agosto de 2023, 14:29
 */

#include "mediaAritmetica.hpp"
#include <iostream>

using namespace std;

mediaAritmetica::mediaAritmetica() {
}

mediaAritmetica::mediaAritmetica(const mediaAritmetica& orig) {
}

mediaAritmetica::~mediaAritmetica() {
}

void mediaAritmetica::lerDados() {
    float n1, n2, n3;
    cout << "N1: ";
    cin >> n1;
    cout << "N2: ";
    cin >> n2;
    cout << "N3: ";
    cin >> n3;
    
    cout << endl;
    
    int resultado = this->mediaFinal(n1,n2,n3);
    cout << "Media Final: " << resultado << endl;
    this->conclusao(resultado);
}

float mediaAritmetica::mediaFinal(float n1, float n2, float n3) {
    if (n1 + n2 + n3 > 30) {
        cout << "Houve um problema pois uma ou mais notas ultrapassaram\n"
                "o limite avaliado";
        exit(0);
       
    } 
    
    return (n1 + n2 + n3) / 3;
}
void mediaAritmetica::conclusao(float resultado){
    if(resultado >=6  ){
        cout << "APROVADO!\n";
    }else{
        cout << "REPROVADO!\n";
    }
}

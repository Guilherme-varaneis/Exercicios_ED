/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   tipoMedia.cpp
 * Author: guiva
 * 
 * Created on 10 de Agosto de 2023, 02:28
 */

#include "tipoMedia.hpp"
#include <iostream>

using namespace std;

tipoMedia::tipoMedia() {
}

tipoMedia::tipoMedia(const tipoMedia& orig) {
}

tipoMedia::~tipoMedia() {
}
void tipoMedia::lerDados(){
    float n1, n2, n3;
    char opc;
    
    cout << "Indorme nota 1: ";
    cin >> n1;
    cout << "Informe nota 2: ";
    cin >> n2;
    cout << "Informe nota 3: ";
    cin >> n3;
    
    cout << endl;
    
    cout << "A - PARA MÉDIA ARITMÉTICA\n"
            "C - PARA MÉDIA PONDERADA\n"
            "H - PARA MÉIDA HARMÔNICA\n";
    cout << "Selecione: ";
    cin >> opc;
    this->selecionarTipoMedia(opc,n1,n2,n3);
    
}
float tipoMedia::calculaMediaAritmetica(float n1, float n2, float n3){
    return (n1+n2+n3)/3;
}

float tipoMedia::calculaMediaPonderada(float n1, float n2, float n3){
   return (n1*3+n2*3+n3*4)/10;
}

float tipoMedia::calculaMediaHarmonica(float n1, float n2, float n3){
    return 3/(1/n1+1/n2+1/n3);
}

void tipoMedia::selecionarTipoMedia(char opc, float n1, float n2, float n3){
    float mediaFinal;
    if(opc == 'A' || opc == 'a'){
        mediaFinal = this->calculaMediaAritmetica(n1,n2,n3);
    }else
        if(opc == 'C' || opc == 'c'){
           mediaFinal = this->calculaMediaPonderada(n1,n2,n3);
        }else
            if(opc == 'H' || opc == 'h'){
                mediaFinal = this->calculaMediaHarmonica(n1,n2,n3);
            }else{
                cout << "Inválido";
                exit(0);
            }
    cout << "Media Final: " << mediaFinal << endl;
}
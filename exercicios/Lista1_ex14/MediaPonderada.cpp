/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   MediaPonderada.cpp
 * Author: guiva
 * 
 * Created on 8 de Agosto de 2023, 20:25
 */

#include "MediaPonderada.hpp"
#include<iostream>

using namespace std;

MediaPonderada::MediaPonderada() {
}

MediaPonderada::MediaPonderada(const MediaPonderada& orig) {
}

MediaPonderada::~MediaPonderada() {
}
void MediaPonderada::lerDados(){
    float n1, n2, n3;
    int codigoAluno;
    cout << "Insira seu código: ";
    cin >> codigoAluno;
    cout << "Nota 1: ";
    cin >> n1;
    cout << "Nota 2: ";
    cin >> n2;
    cout << "Nota 3: ";
    cin >> n3;
    system("clear");
    float media = this->mediaFinal(n1,n2,n3);
    this->mostraDadosAluno(codigoAluno,n1,n2,n3,media);
    this->verificaAprovacao(media);
    
    
}
float MediaPonderada::mediaFinal(float n1, float n2, float n3){
    float media;
    if(n1>n2 && n1>n3){
    media = (n1*4 + n2*3 + n3*3)/10;
    }else 
        if(n2>n1 && n2>n3){
            media = (n1*3 + n2*4 + n3*3)/10;
        }else {
            media = (n1*3 + n2*3 + n3*4)/10;
            }
    return media;
    }

void MediaPonderada::verificaAprovacao(float media){
    if(media>=5){
        cout << "Situação: APROVADO!";
    }else{
        cout << "Situação: REPROVADO!";
    }
}
void MediaPonderada::mostraDadosAluno(int codigoAluno, float n1, float n2, float n3, float media){
    cout << "Código do aluno: " << codigoAluno << endl;
    cout << " Nota 1: " << n1 << "\n nota 2: " << n2 << "\n nota 3: " << n3 << endl;
    cout << "Média Final: " << media << endl; 
}


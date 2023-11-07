/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   converterIdade.cpp
 * Author: guiva
 * 
 * Created on 7 de Agosto de 2023, 16:00
 */

#include "converterIdade.hpp"
#include <iostream>

using namespace std;
converterIdade::converterIdade() {
}

converterIdade::converterIdade(const converterIdade& orig) {
}

converterIdade::~converterIdade() {
}
void converterIdade::cabecalho(){
    cout << "*************************************************************\n";
    cout << "* Programa designado para a conversão da quantidade de dias *\n";
    cout<<  "******************* para anos, meses e dias *****************\n";
    cout << "*************************************************************\n\n\n";
}

void converterIdade::lerDados(){
    this->cabecalho();
    
    int dias;
    cout << "Digite o numero de dias que deseja converter: ";
    cin >> dias;
    
    int anos = this->ConversaoDiasEmAnos(dias);
    int diasRestantesAnos = dias - (365 * anos);
    int meses = this->conversaoDiasEmMeses(diasRestantesAnos);
    int diasRestantesMeses = diasRestantesAnos - (30 * meses);
    int diasRestados = this->diasRestantes(diasRestantesMeses);
    
    cout << "\n\nConvertendo a quantidade de dias informada(" << dias << " dias), "
            "\nResulta-se em: " << anos << " Ano(s), " << meses << " mes(es), "
            "\n dia(s) " << diasRestados;
}

int converterIdade::ConversaoDiasEmAnos(int dias){
    return dias/365;
}

int converterIdade::conversaoDiasEmMeses(int diasRestantesAnos){   
    return diasRestantesAnos / 30;
}

int converterIdade::diasRestantes(int diasRestantesMeses){
    return diasRestantesMeses;
}
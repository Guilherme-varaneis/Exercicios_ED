/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   converterSegundos.cpp
 * Author: guiva
 * 
 * Created on 8 de Agosto de 2023, 12:37
 */

#include "converterSegundos.hpp"
#include <iostream>

using namespace std;

converterSegundos::converterSegundos() {
}

converterSegundos::converterSegundos(const converterSegundos& orig) {
}

converterSegundos::~converterSegundos() {
}

void converterSegundos::lerDados() {
   int segundos;
    cout << "Informe quantos segundos deseja converter: ";
    cin >> segundos;
    int hora = this->horas(segundos);
    int restanteHoras = segundos % 3600;

    int minuto = this->minutos(restanteHoras);
    int restanteMinutos = restanteHoras % 60;

    int restanteSegundos = this->segundo(restanteMinutos);

    cout << "Horas: " << hora << endl;
    cout << "Minutos: "<< minuto << endl;
    cout << "Segundos: " << restanteSegundos << endl;
}

int converterSegundos::horas(int segundos) {

    return segundos / 3600;

}

int converterSegundos::minutos(int restanteHoras) {

    return restanteHoras / 60;
}

int converterSegundos::segundo(int restanteMinutos) {
    return restanteMinutos % 60;
}

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   distanciaEuclidiana.hpp
 * Author: guiva
 *
 * Created on 1 de Agosto de 2023, 11:57
 * 
 */

#ifndef DISTANCIAEUCLIDIANA_HPP
#define DISTANCIAEUCLIDIANA_HPP

class distanciaEuclidiana {
public:
    distanciaEuclidiana();
    distanciaEuclidiana(const distanciaEuclidiana& orig);
    virtual ~distanciaEuclidiana();
    void lerPontos();
    float calcularDE(int, int, int,int);
    
private:

};

#endif /* DISTANCIAEUCLIDIANA_HPP */


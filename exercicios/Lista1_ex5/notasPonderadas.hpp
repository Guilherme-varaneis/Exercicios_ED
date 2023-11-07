/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   notasPonderadas.hpp
 * Author: guiva
 *
 * Created on 8 de Agosto de 2023, 01:47
 */

#ifndef NOTASPONDERADAS_HPP
#define NOTASPONDERADAS_HPP

class notasPonderadas {
public:
    notasPonderadas();
    notasPonderadas(const notasPonderadas& orig);
    virtual ~notasPonderadas();
    void lerDados();
    float notaFinal(float, float, float);
private:

};

#endif /* NOTASPONDERADAS_HPP */


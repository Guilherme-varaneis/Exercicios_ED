/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   pesoIdeal.hpp
 * Author: guiva
 *
 * Created on 10 de Agosto de 2023, 00:05
 */

#ifndef PESOIDEAL_HPP
#define PESOIDEAL_HPP

class pesoIdeal {
public:
    pesoIdeal();
    pesoIdeal(const pesoIdeal& orig);
    virtual ~pesoIdeal();
    void lerDados();
    float calculaPesoIdealHomem(float &);
    float calculaPesoIdealMulher(float &);
    void pesoFinal(char, float &);
private:

};

#endif /* PESOIDEAL_HPP */


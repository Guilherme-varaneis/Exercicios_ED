/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   mediaAritmetica.hpp
 * Author: guiva
 *
 * Created on 8 de Agosto de 2023, 14:29
 */

#ifndef MEDIAARITMETICA_HPP
#define MEDIAARITMETICA_HPP

class mediaAritmetica {
public:
    mediaAritmetica();
    mediaAritmetica(const mediaAritmetica& orig);
    virtual ~mediaAritmetica();
    void lerDados();
    float mediaFinal(float, float, float);
    void conclusao(float);
private:

};

#endif /* MEDIAARITMETICA_HPP */


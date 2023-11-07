/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   tipoMedia.hpp
 * Author: guiva
 *
 * Created on 10 de Agosto de 2023, 02:28
 */

#ifndef TIPOMEDIA_HPP
#define TIPOMEDIA_HPP

class tipoMedia {
public:
    tipoMedia();
    tipoMedia(const tipoMedia& orig);
    virtual ~tipoMedia();
    void lerDados();
    void selecionarTipoMedia(char, float, float, float);
    float calculaMediaAritmetica(float,float,float);
    float calculaMediaPonderada(float,float,float);
    float calculaMediaHarmonica(float,float,float);
    
private:

};

#endif /* TIPOMEDIA_HPP */


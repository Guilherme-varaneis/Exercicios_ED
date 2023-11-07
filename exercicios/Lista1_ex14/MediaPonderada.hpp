/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   MediaPonderada.hpp
 * Author: guiva
 *
 * Created on 8 de Agosto de 2023, 20:25
 */

#ifndef MEDIAPONDERADA_HPP
#define MEDIAPONDERADA_HPP

class MediaPonderada {
public:
    MediaPonderada();
    MediaPonderada(const MediaPonderada& orig);
    virtual ~MediaPonderada();
    void lerDados();
    float mediaFinal(float, float, float);
    void mostraDadosAluno(int, float, float, float, float);
    void verificaAprovacao(float);
    
private:

};

#endif /* MEDIAPONDERADA_HPP */


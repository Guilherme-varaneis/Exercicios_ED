/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   converterSegundos.hpp
 * Author: guiva
 *
 * Created on 8 de Agosto de 2023, 12:37
 */

#ifndef CONVERTERSEGUNDOS_HPP
#define CONVERTERSEGUNDOS_HPP

class converterSegundos {
public:
    converterSegundos();
    converterSegundos(const converterSegundos& orig);
    virtual ~converterSegundos();
    void lerDados();
    int horas(int);
    int minutos(int);
    int segundo(int);
private:

};

#endif /* CONVERTERSEGUNDOS_HPP */


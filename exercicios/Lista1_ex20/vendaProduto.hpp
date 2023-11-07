/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   vendaProduto.hpp
 * Author: guiva
 *
 * Created on 12 de Agosto de 2023, 14:17
 */

#ifndef VENDAPRODUTO_HPP
#define VENDAPRODUTO_HPP

class vendaProduto {
public:
    vendaProduto();
    vendaProduto(const vendaProduto& orig);
    virtual ~vendaProduto();
    void cabecalho();
    void lerDados();
    double precoProduto(int);
    void realizarVenda(double, int, float &);
private:

};

#endif /* VENDAPRODUTO_HPP */


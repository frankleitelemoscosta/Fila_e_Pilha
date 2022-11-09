#ifndef __FILA_HPP
#define __FILA_HPP

//inicio das inclusões de biblioteca
#include<iostream>
using namespace std;
#include"Pessoa.hpp"
//fim das inclusões de biblioteca
class Fila{
private:
    Pessoa *cabeca;
    Pessoa *cauda;
//fim dos atributos
public:

    Fila();//construtor

    void inserir_na_Fila(string nome, unsigned long long int cpf);

    bool vazia();

    void remover();

    int tamanho();

    void imprimir_toda_fila();
//fim dos métodos
};

#endif

//fim do código
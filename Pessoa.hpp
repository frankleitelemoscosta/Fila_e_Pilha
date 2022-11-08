#ifndef __PESSOA_HPP
#define __PESSOA_HPP

//inicio das inclusões de bibliotecas
#include<iostream>
using namespace std;
//fim das inclusões de bibliotecas

class Pessoa{
    private:

    string nome;
    unsigned long long int CPF;
    Pessoa *proximo;
    Pessoa *anterior;   
    //fim dos atributos
    
    public:

    Pessoa();//construtor

    void setnome(string nome);
    string getnome();

    void setcpf(unsigned long long int CPF);
    unsigned long long int getcpf();

    void setproximo(Pessoa *ponteiro);
    Pessoa *obterproximo();

    void setanterior(Pessoa *ponteiro);
    Pessoa *obteranterior();

    //fim dos métodos
};

#endif

//fim do código
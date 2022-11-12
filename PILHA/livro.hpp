#ifndef __LIVRO_HPP
#define __LIVRO_HPP

//inicio das bibliotecas
    #include<iostream>
    using namespace std;
//fim das biblioteecas

class Livro{
    private:

    string nome;
    int ISBN;
    Livro *proximo;

//fim dos atributos
    public:

    Livro();//construtor

    void setproximo(Livro *ponteiro);
    Livro *obterproximo();

    void setnome(string nome);
    string getnome();

    void setISBN(int ISBN);
    int getISBN();

//fim dos métodos
};

#endif
//fim do código
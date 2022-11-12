//inicio das inclusões de bibliotecas
#include"Pessoa.hpp"
//fim das inclusões de bibliotecas

Pessoa::Pessoa(){

}

void Pessoa::setproximo(Pessoa *ponteiro)
{
    this->proximo = ponteiro;
}

Pessoa *Pessoa::obterproximo()
{
    return proximo;
}

void Pessoa::setanterior(Pessoa *ponteiro)
{
    this->anterior = ponteiro;
}

Pessoa *Pessoa::obteranterior()
{
    return anterior;
}

void Pessoa::setcpf(unsigned long long int cpf)
{
    this->CPF = cpf;
}

unsigned long long int Pessoa::getcpf()
{
    return this->CPF;
}

void Pessoa::setnome(string nome)
{
    this->nome = nome;
}

string Pessoa::getnome()
{
    return this->nome;
}
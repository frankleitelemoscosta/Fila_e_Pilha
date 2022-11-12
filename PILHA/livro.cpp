//inicio das bibliotecas
    #include"livro.hpp"
//fim das bibliotecas

Livro::Livro()//construtor
{

}

void Livro::setproximo(Livro *ponteiro)
{
    this->proximo = ponteiro;
}

Livro *Livro::obterproximo()
{
    return proximo;
}

void Livro::setnome(string nome)
{
    this->nome = nome;
}

string Livro::getnome()
{
    return this->nome;
}

void Livro::setISBN(int ISBN)
{
    this->ISBN = ISBN;
}

int Livro::getISBN()
{
    return this->ISBN;
}

//fim do código
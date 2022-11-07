//inicio das inclusões de biblioteca
#include<iostream>
using namespace std;
#include"Fila.hpp"
//fim das inclusões de biblioteca

int main()
{
    int op,error;
    Fila f;

    do{

        cout<<"|---------------MENU-----------------|"<<endl;
        cout<<"|1- Inserir um individuo na fila     |"<<endl;
        cout<<"|2- Remover alguem da fila           |"<<endl;
        do{ 
            error = 0;
            cin>>op;
            if(cin.fail())
            {
                system("clear");
                //system("wls");//para caso o sistema operacional seja o windowns
                error = 1;
                cout<<"Digite um número válido por obsequio"<<endl;
                cin.clear();
                cin.ignore();
            }
        }while(error==1);
        

        switch(op)
        {
            case 1:

            f.inserir_na_lista();
            break;
            default:
                cout<<"você digitou uma opção inexistente"<<endl;
            break;
        }

    }while(op!=0);


    return 0;
}
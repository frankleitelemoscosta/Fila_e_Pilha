//inicio das bibliotecas
    #include<iostream>
    using namespace std;
//fim das bibliotecas

int main(){

    //inicio das variaveis locais
        int op;
        int error = 0;
    //fim das variaveis locais


    //inicio do menu:
    do{

        cout<<"|---------MENU----------|"<<endl;
        cout<<"|0- Saindo              |"<<endl;
        
        do{
            error = 0;
            cin>>op;
            if(cin.fail())
            {
                error = 1;
                cout<<"Digite um inteiro"<<endl;
                cin.clear();
                cin.ignore();
            }
        }while(error==1);

    }while(op!=0);

    return 0;
}

//fim do código 
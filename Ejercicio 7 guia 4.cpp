#include <iostream>

using namespace std;

int main()
{

    int peso,pesototal=0,maxencomiendas=0,cantencomiendas=0,numerocamion=1,pesocamion=0,numeromax;
    cin>>peso;
    cantencomiendas++;
    pesototal=peso;
 while (peso>0){

    while (pesocamion<200 && peso>0){

        pesocamion+=peso;
        if (!(pesocamion >= 200))
        {
            cin>>peso;
            cantencomiendas++;
        }
    }
    if (pesocamion>200){
        pesocamion-=peso;
        cout<<"CAMION "<<numerocamion<< ":"<<pesocamion<<endl;
        pesocamion = 0;
        cin >> peso;
    }
    if (cantencomiendas>maxencomiendas){
        maxencomiendas=cantencomiendas;
        numeromax=numerocamion;
        cantencomiendas=0;
    }

    numerocamion++;
}

cout<<"CAMION "<<numeromax<<" con "<<maxencomiendas;




return 0;
}

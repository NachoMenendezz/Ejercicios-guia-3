#include <iostream>
using namespace std;

int main(){


int i,cantdiv,num,cantprimo=0,cantnoprimo=0,cantnum=0;
float porcprimo,porcnoprimo;
cout<<"INGRESE UN NUMERO :";
cin>>num;
while (num!=0){
    cantnum++;
    cantdiv=0;
    for (i=1;i<=num;i++){
        if (num%i==0){
            cantdiv++;
        }

    }
    if (cantdiv==2){
        cantprimo++;
    }
    else {
            cantnoprimo++;
    }
    cout<<"INGRESE OTRO NUMERO :";
    cin>>num;



    }

porcprimo=(cantprimo*100)/cantnum;
porcnoprimo=(cantnoprimo*100)/cantnum;

cout<<"PORCENTAJE DE PRIMOS :"<<porcnoprimo<<endl<<"PORCENTAJE DE NO PRIMOS :"<<porcnoprimo;




 return 0;
}

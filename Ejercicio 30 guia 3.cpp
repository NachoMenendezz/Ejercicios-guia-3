#include <iostream>
using namespace std;

int main(){


int donacion,maxdon,totaldon=0,cantdon=0,cantdon1=0;
cout<<"INGRESE DONACION A REALIZAR :";
cin>>donacion;
if (donacion>500){
    cantdon1++;
}
totaldon+=donacion;
maxdon=donacion;
cantdon++;
while (totaldon<=50000){

if (donacion>maxdon){

    maxdon=donacion;
}
totaldon+=donacion;
cantdon++;

if (donacion>500){
    cantdon1++;
}
cout<<"INGRESE DONACION A REALIZAR :";
cin>>donacion;

}

cout<<"CANTIDAD DE DONACIONES :"<<cantdon<<endl<<"MAXIMA DONACION REALIZADA :"<<maxdon<<endl<<"CANTIDAD DE DONACIONES MAYORES AL 1% DE LA DEUDA :"<<cantdon1;




 return 0;
}

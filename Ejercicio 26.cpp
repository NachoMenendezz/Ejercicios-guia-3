#include <iostream>
using namespace std;

int main(){

int i,sueldo,modalidad,contPART=0,contFULL=0,cont750000=0,promFULL,totalFULL=0,contMF=0,contMP=0,maxcont;

for (i=1;i<=10;i++){
    cout<<"INGRESE SUELDO :";
    cin>>sueldo;
    cout<<"INGRESE MODALIDAD, 1 PARA FULL TIME, 2 PARA PART TIME :";
    cin>>modalidad;

if (sueldo>750000&&modalidad==2){
    cont750000++;
}
if (modalidad==1){
    contFULL++;
    totalFULL+=sueldo;
}
if (modalidad==2){
    contPART++;

}
if (sueldo>100000&&modalidad==1){
    contMF++;
}
if (sueldo>100000&&modalidad==2){
    contMP++;

}
}
if (contMF>contMP){
    maxcont=1;
}
else maxcont=2;


promFULL=totalFULL/contFULL;

cout<<"CANTIDAD DE TRABAJADORES PART TIME CON SUELDO +750000 :"<<cont750000<<endl<<"SUELDO PROMEDIO TRABAJADORES FULL TIME :"<<promFULL<<endl<<"MODALIDAD CON MAS TRABAJADORES CON SUELDO +1 MILLON :"<<maxcont;




return 0;
}

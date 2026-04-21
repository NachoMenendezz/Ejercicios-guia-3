#include <iostream>
using namespace std;

int main(){

int i,legajo,sueldo,sueldomax,legajomax;

for (i=0;i<10;i++){
cout<<"INGRESE LEGAJO :";
cin>>legajo;
cout<<"INGRESE SUELDO :";
cin>>sueldo;

if (i==0){
    sueldomax=sueldo;
    legajomax=legajo;
}
if (sueldo>sueldomax){
    sueldomax=sueldo;
    legajomax=legajo;
}






}
cout<<legajomax;





return 0;
}

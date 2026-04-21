#include <iostream>
using namespace std;

int main(){

int num,contN,total;
float promN;
cin>>num;
while(num!=0){

 if(num<0){
    contN++;
    total += num;
 }
    promN = total/contN;

cin>>num;
}

cout<<"promedio de negativo: "<<promN<<endl;



return 0;
}

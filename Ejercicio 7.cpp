#include <iostream>
using namespace std;

int main(){

int i,num,contP,contN;
contN=0;
contP=0;
cin>>num;
while (num!=0){

if (num>0){
    contP++;
}
else if (num<0){
    contN++;
}
cin>>num;
}

cout<<"POSITIVOS :"<<contP<<endl<<"NEGATIVOS :"<<contN;




return 0;
}

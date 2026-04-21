#include <iostream>
using namespace std;

int main(){

int num,contpar=0,contneg=0,ternas;

while (contpar<5){
    cin>>num;
    if (num%2==0)
        {
        contpar++;
    }
    if (num<0){
        contneg++;
    }
    if (num>0){
        contneg=0;
    }
    if (contneg>=3){
        ternas++;
    }
}

cout<<"CANTIDAD DE TERNAS :"<<ternas;






return 0;
}

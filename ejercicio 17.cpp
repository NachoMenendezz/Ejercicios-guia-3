#include <iostream>
using namespace std;

int main(){

int num;
int primerImpar = 0;
int segundoImpar = 0;
cin>>num;
while(num!=0){
    if(num % 2 != 0 && primerImpar == 0){
        primerImpar = num;
    }
    else if (num % 2 != 0 && segundoImpar == 0)
    {
        segundoImpar = num;
    }
    cin>>num;
}

cout<<primerImpar<<endl<<segundoImpar;



return 0;
}

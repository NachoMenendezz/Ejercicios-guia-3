#include <iostream>
using namespace std;

int main(){


int i,n,cont;
cin>>n;
for(i=1;i<=7;i++){

if(n%i==0){

    cont++;

}

}

cout<<"CANTIDAD DE DIVISORES :"<<cont;


return 0;
}

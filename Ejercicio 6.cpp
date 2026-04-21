#include <iostream>
using namespace std;

int main() {

    int i,n1,contP=0,contN=0,contC=0;



    for (i=1;i<=10;i++){
            cin>>n1;
    if (n1>0){
        contP++;
    }
    else if (n1<0){
        contN++;
    }
    else contC++; {

    }

    }

    cout<<"CANTIDAD POSITIVOS: "<<contP<<endl<<"CANTIDAD NEGATIVOS: "<<contN<<endl<<"CANTIDAD CEROS: "<<contC;

   return 0;
}

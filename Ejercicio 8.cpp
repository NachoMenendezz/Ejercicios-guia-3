#include <iostream>

using namespace std;

int main(){
    const int TOTAL = 10;
    int num;
    int contPos=0,contNegativos = 0,contCeros=0;
    float porcP,porcN,porcC;

    for(int i= 1; i<=TOTAL;i++){
        cin>>num;
        if(num>0){
            contPos++;
        }
        else if(num<0){
            contNegativos++;
        }
        else{
            contCeros++;
        }
    }

    porcP = ((float)contPos*100)/TOTAL;
    porcN = ((float)contNegativos*100)/TOTAL;
    porcC = ((float)contCeros*100)/TOTAL;

    cout<<"PORCENTAJE POSITIVO : "<<porcP<<"%"<<endl;
    cout<<"PORCENTAJE NEGATIVO : "<<porcN<<"%"<<endl;
    cout<<"PORCENTAJE CERO : "<<porcC<<"%"<<endl;
    return 0;
}

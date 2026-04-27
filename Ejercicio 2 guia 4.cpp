#include <iostream>
using namespace std;

int main(){

int num,numant,cantiguales=0,maxnum;
bool iguales=true,band=true;

while (iguales){
    cout<<"INGRESE UN NUMERO :";
    cin>>num;
    if(band){
        numant = num;
        maxnum = num;
        band = false;
    }
    else{

        if (num==numant){
           iguales = false;

        }
        if(iguales){
            if (num>maxnum){
                maxnum=num;
            }
        }

        numant=num;
    }

}

cout<<maxnum;





 return 0;
}

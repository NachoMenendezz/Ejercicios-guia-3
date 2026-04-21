#include <iostream>
using namespace std;

int main() {

    int i,n1,maximoN,minimoP,contPos=0,contNeg=0;

for (i = 1; i <=10; i++) {
    cin >> n1;

    if (n1 > 0) {
        // Bloque de positivos
        if (contPos == 0) {
            minimoP = n1; // Si es el primero, lo guardo sí o sí
        } else if (n1 < minimoP) {
            minimoP = n1; // Si no es el primero, comparo
        }
        contPos++; // Sumo al contador de positivos
    }
    else if (n1 < 0) {
        // Bloque de negativos
        if (contNeg == 0) {
            maximoN = n1; // Si es el primero, lo guardo
        } else if (n1 > maximoN) {
            maximoN = n1; // Si no es el primero, comparo
        }
        contNeg++; // Sumo al contador de negativos
    }
} // <--- ACÁ se cierra el for recién

    if (contNeg>0){
    cout<<"El maximo negativo es :"<<maximoN<<endl;
    }
    else {cout<<"No hay negativos"<<endl;
}
     if (contPos>0){
        cout<<"El minimo positivo es :"<<minimoP<<endl;
     }
    else {cout<<"No hay positivos"<<endl;
     }



return 0;

}


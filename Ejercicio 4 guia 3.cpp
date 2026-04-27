#include <iostream>
using namespace std;

int main()
{

    int i,num,maxpar,maximpar,cantPos=0,cantNeg=0,mayorgrupoimpar,cantordenados=0,numImpPos=0,cantnum=0,totalpos=0,numerogrupo;
    float porcP,porcN, porcNumImparPos;
    bool primerPar=true;
    bool primerImpar=true;
    bool primergrupo;

    for (i=1; i<=2; i++){
        cout<<"INGRESAR UN NUMERO :";
        cin>>num;
        cantNeg=0;
        cantPos=0;
        while (num!=0)
        {
            cantnum++;
            if (num%2==0)
            {
                if (primerPar==true)
                {
                    maxpar=num;
                    primerPar=false;
                }
                if (num>maxpar)
                {
                    maxpar=num;
                }
            }
            else
            {
                if (primerImpar==true)
                {
                    maximpar=num;
                    primerImpar=false;
                }
                if (num>maximpar)
                {
                    maximpar=num;
                }
                if (num>0){
                    numImpPos++;
                }
            }
            if (num>0)
            {
                cantPos++;
            }
            if (num<0)
            {
                cantNeg++;
            }

            cout<<"INGRESE OTRO NUMERO :";
            cin>>num;

        }
        totalpos+=cantPos;
        cout << endl << "MAXIMO PAR GRUPO " << i << ":" << maxpar << endl << "MAXIMO IMPAR GRUPO " << i << ":" << maximpar << endl << endl;
        porcP=cantPos*100/cantnum;
        porcN=cantNeg*100/cantnum;
        if (primergrupo==true){
                porcNumImparPos=numImpPos*100/cantnum;
                mayorgrupoimpar=numImpPos*100/cantnum;
                numerogrupo=i;
                primergrupo=false;
        }
        else (porcNumImparPos>mayorgrupoimpar);
            {
            mayorgrupoimpar=porcNumImparPos;
            numerogrupo=i;
        }
        cout << "PORCENTAJE POSITIVOS GRUPO " << i << ":"<<porcP<< endl << "PORCENTAJE NEGATIVOS GRUPO " << i << ":"<<porcN<<endl<<endl;
    }
    cout<<"TOTAL POSITIVOS :"<<totalpos<<endl<<endl;
    cout<<"NUMERO DE GRUPO CON MAYOR PORCENTAJE DE NEGATIVOS IMPARES :"<<numerogrupo;
    return 0;
}

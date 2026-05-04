#include <iostream>

using namespace std;

int main()
{

    int i,num,cantpares=0,menorpar,ultpos,numant,cantnum=0,ubiultpos;
    bool primerpar;
    for (i=1; i<=5; i++)
    {
        cout<<"INGRESE UN NUMERO:";
        cin>>num;
        numant=num;
        cantpares=0;
        cantnum=0;
        while (num>=numant)
        {

            numant=num;
            cantnum++;
            if (num%2==0)
            {
                cantpares++;
                if (primerpar)
                {
                    menorpar=num;
                    primerpar=false;
                }
                if (num<menorpar)
                {
                    menorpar=num;
                }
            }
            if (num>0)
            {
                ultpos=num;
                ubiultpos=cantnum;
            }
            cout<<"INGRESE OTRO NUMERO:";
            cin>>num;
        }

        cout<<endl<<"CANTIDAD DE PARES GRUPO "<< i <<":"<<cantpares<<endl;
        cout<<"MENOR PAR DEL GRUPO "<< i <<":"<<menorpar<<endl;
        cout<<"ULTIMO NUMERO POSITIVO DEL GRUPO "<< i <<":"<<ultpos<< " UBICACION " <<ubiultpos<<endl;
        cout<<"FIN GRUPO "<< i <<endl<<endl;





    }










    return 0;
}

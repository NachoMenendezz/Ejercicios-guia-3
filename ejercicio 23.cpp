#include <iostream>
using namespace std;

int main()
{

    int num,numMax,numMin,diferencia=0,contadornum = 0;



    while(diferencia<10)
    {
        cin>>num;
        contadornum++;
        if(contadornum==1)
        {
            numMax = num;
            numMin = num;
        }

        if(num>numMax)
        {
            numMax=num;

        }
        if(num<numMin)
        {
            numMin = num;
        }
        diferencia= numMax- numMin;


    }

    cout<<"CANTIDAD DE NUMEROS :"<<contadornum;







    return 0;
}

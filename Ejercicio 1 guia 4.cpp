#include <iostream>
using namespace std;

int main()
{
    int i,num,cantperf=0,sumadiv=0;
    cout<<"INGRESE UN NUMERO :";
    cin>>num;
    for (i=1; i<=10; i++)
    {
        sumadiv=0;
        for (int j = 1; j < num; j++)
        {
            if (num % j == 0){
                sumadiv += j;
            }
            if (sumadiv == num)
            {
                cantperf++;
                break;
            }
        }
        cout<<"INGRESE OTRO NUMERO :";
        cin>>num;
    }
    cout<<"CANTIDAD DE NUMEROS PERFECTOS :"<<cantperf;
    return 0;
}

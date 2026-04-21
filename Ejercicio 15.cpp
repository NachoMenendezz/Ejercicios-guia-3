#include <iostream>
using namespace std;

int main()
{


    int num_cliente,saldo,sucursal,contador1=0,contador2=0,contador3=0,contador4=0,maxsaldo,maxsucursal,maxcliente,acu1,acu2,acu3,acu4;
    float porc1,porc2,porc3,porc4,porcmax = 0,totalclientes;
    maxsaldo=0;
    acu1=0;
    acu2=0;
    acu3=0;
    acu4=0;
    cout<<"INGRESE NUMERO DE CLIENTE :";
    cin>>num_cliente;
    cout<<"INGRESE SALDO :";
    cin>>saldo;
    cout<<"INGRESE SUCURSAL :";
    cin>>sucursal;
    while (sucursal!=10)
    {
        totalclientes++;
        if (sucursal==1)
        {
            acu1=+saldo;
        }
        if (sucursal==2)
        {
            acu2=+saldo;
        }
        if (sucursal==3)
        {
            acu3=+saldo;
        }
        if (sucursal==4)
        {
            acu4=+saldo;
        }
        if (saldo >= 20000)
        {
            switch (sucursal)
            {
            case 1:
            {
                contador1++;
                break;
            }
            case 2:
            {
                contador2++;
                break;
            }
            case 3:
            {
                contador3++;
                break;
            }
            case 4:
            {
                contador4++;
                break;
            }
            default:
                break;
            }
        }
        if (saldo>maxsaldo)
        {
            maxsaldo=saldo;
            maxsucursal=sucursal;
            maxcliente=num_cliente;
        }

        cout<<"INGRESE NUMERO DE CLIENTE :";
        cin>>num_cliente;
        cout<<"INGRESE SALDO :";
        cin>>saldo;
        cout<<"INGRESE SUCURSAL :";
        cin>>sucursal;
    }

    totalclientes=contador1+contador2+contador3+contador4;
    if (contador1 != 0)
    {
        porc1=totalclientes/contador1;
    }
    else{
        porc1 = 0;
    }
    if (contador2 != 0)
    {
        porc2=totalclientes/contador2;
    }
    else{
        porc2 = 0;
    }
    if (contador3 != 0)
    {
        porc3=totalclientes/contador3;
    }
    else{
        porc3 = 0;
    }
    if (contador4 != 0)
    {
        porc4=totalclientes/contador4;
    }
    else{
        porc4 = 0;
    }

    porcmax = 1;

    if (porc2 > porc1)
    {
        porcmax = 2;
    }
    if (porc3 > porc2)
    {
        porcmax= 3;
    }
    if (porc4>porc3)
    {
        porcmax=4;
    }

    if ( porc1 == 0 && porc2 == 0 && porc3 == 0 && porc4 == 0)
        porcmax = 0;

    cout<<"NUMERO DE SUCURSAL CON MAYOR PORCENTAJE DE CLIENTES CON SALDO +20000 :"<<porcmax<<endl<<"NUMERO DE CLIENTE CON MAYOR SALDO :"<<maxcliente<<endl<<"NUMERO DE SUCURSAL DEL CLIENTE :"<<maxsucursal<<endl<<"TOTAL SUCURSAL 1 :"<<acu1<<endl<<"TOTAL SUCURSAL 2 :"<<acu2<<endl<<"TOTAL SUCURSAL 3 :"<<acu3<<endl<<"TOTAL SUCURSAL 4 :"<<acu4;

    return 0;
}

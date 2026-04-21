#include <iostream>
using namespace std;

int main(){
int i, n,mayor, mayor1,mayor2;
for(i=0;i<5;i++){
    cout << "Ingrese un numero: ";
    cin>>n;

    if(i==0){
        mayor1 = n;
    } else if (i == 1){
        mayor2 = n;
    }

    if (n > mayor1)
    {
        mayor1 = n;
    }
    else if (n > mayor2&&n!=mayor1) {
        mayor2 = n;
    }


}
cout<<mayor1<<endl<<mayor2;




return 0;
}

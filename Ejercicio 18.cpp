#include <iostream>
using namespace std;

int main(){

int i,n,pares,mayor;

for (i=0;i<10;i++) {

    cin>>n;

if (i==0){
    mayor=n;
}
if (n%2==0) {
    pares=n;
    if (pares>mayor){
        mayor=pares;
    }

}



}

cout<<mayor;



return 0;
}

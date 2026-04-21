#include <iostream>
using namespace std;

int main() {

  int i,n1,mayor;

  for(i=1;i<=10;i++){
    cin>>n1;
    if (i==1){
        mayor=n1;
    }

    if (n1>mayor)
        mayor=n1;
    }

    cout<<mayor;

   return 0;
}

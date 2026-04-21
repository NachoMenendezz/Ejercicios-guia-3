#include <iostream>
using namespace std;

int main() {

  int i,n1,n2,mayor,menor;

  cin>>n1;
  cin>>n2;

  if (n1>n2){
    mayor=n1;
    menor=n2;
  }
  else {mayor=n2;
    menor=n1;
  }

    for (i=menor;i<=mayor;i++){
        cout<<i<<endl;
    }
   return 0;
}

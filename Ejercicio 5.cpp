#include <iostream>
using namespace std;

int main() {

  int i,N,n1,contpos=0;

  cin>>N;

  for(i=1;i<=N;i++){
    cin>>n1;


  if (n1>0){
    contpos++;
  }
  }
  cout<<"CANTIDAD DE POSITIVOS: "<<contpos;

   return 0;
}

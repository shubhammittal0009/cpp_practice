#include <iostream>
using namespace std;

int fact(int n){
  int res = 1;
  for(int i=2; i<=n; i++)
    res = res * i;
  return res;
}

int combination(int n, int r){
  return ( fact(n)/( (fact(r)) * (fact(n-r)) ) );
}

int main() {
        int n=0;
        cin>>n;

    for(int i=0; i<n; i++){
      for(int j=0; j<=i; j++){
        cout<<combination(i,j)<<" ";
      }
      cout<<endl;
    }

}

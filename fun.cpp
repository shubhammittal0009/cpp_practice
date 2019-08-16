#include <iostream>
using namespace std;

int fact(int n){
  int res=1;
  for(int i=1; i<=n; i++)
    res *= i;
  return res;
}

int nCr(int n, int r){
  int nfact = fact(n);
  int rfact = fact(r);
  int nrfact = fact(n-r);
  int result = (nfact / (rfact * nrfact));
  return result;
}

int main() {
  int n=0;
  int r=0;
  cout<<"enter n and r for nCr: "<<endl;
  cin>>n>>r;
  int ans = nCr(n, r);
  cout<<"Answer is: "<<ans;
}
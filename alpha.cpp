#include <iostream>
using namespace std;

int fact(int num){
int ans = 0;
  if(num==0 || num==1)
    return ans;
  for(int i=num; i>0; i--)
    ans += num;
  return ans;
}

int combination(int i, int j){
  int ans=0;
  ans = int((fact(i))/((fact(i-j))*(fact(j))));
  return ans;
}

int main() {
        int n=0;
        cin>>n;

    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        cout<<combination(i,j)<<" ";
      }
      cout<<endl;
    }

}

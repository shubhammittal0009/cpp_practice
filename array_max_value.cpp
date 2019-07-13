#include <bits/stdc++.h>
using namespace std;

int main() {

  long long int n=0, arr[100000], max = INT_MIN;
  cin>>n;

  for(int i=0; i<n; i++){
    cin>>arr[i];
    if(max<arr[i])
      max=arr[i];
  }

  cout<<max;

}

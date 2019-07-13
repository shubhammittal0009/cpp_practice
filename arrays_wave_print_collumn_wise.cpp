#include <bits/stdc++.h>
using namespace std;

int main() {

  int m=0, n=0; 
  long arr[100000][100000];
  cin>>m>>n;

  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
    	cin>>arr[i][j];
    }
  }

  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
    	cout<<arr[i][j]<<" ";    	
    }
    cout<<endl;
  }

}

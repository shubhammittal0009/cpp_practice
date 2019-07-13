#include <bits/stdc++.h>
using namespace std;

int main() {

  int m=0, n=0; 
  long arr[10][10];
  cin>>m>>n;

  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
    	cin>>arr[i][j];
    }
  }

  for(int i=0; i<n; i++){

  	if(i%2==0){
    	for(int j=0; j<m; j++){
    		cout<<arr[j][i]<<", ";
    	}
    }else{
    	for(int j=n-1; j>=0; j--){
    		cout<<arr[j][i]<<", ";
    	}
    }

  }
  cout<<"END";

  return 0;
}

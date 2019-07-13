#include <bits/stdc++.h>
using namespace std;

int main() {

	long long int n=0,t=0; 
	long long int arr[1000];
	cin>>n;

	for(long long int i=0; i<n; i++){
			cin>>arr[i];
	}

	sort(arr, arr+n);

	cin>>t;
	
	for(long long int i=0;i<n;i++){
			for(long long int j=i+1;j<n;j++){
				for(long long int k=j+1;k<n;k++){
					if(arr[i]+arr[j]+arr[k]==t){
						cout<<arr[i]<<", "<<arr[j]<<" and "<<arr[k]<<endl;
						break;
					}
				}
			}		
	}
  return 0;
}

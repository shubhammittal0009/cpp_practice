#include <iostream>
#include <math.h>
using namespace std;
int main(){

	int n;
	cin>>n;

	for(int i=0; i<=n; i++){

		for(int j=n; j>=(n-i); j--){
			if(i==n)
				continue;
			cout<<j<<" ";
		}

		for(int j=(2*(n-i))-1; j>=1; j--){
			if(i==n)
				continue;
			cout<<"  ";
		}

		for(int j=n-i; j<=n; j++){
			if(i==n)
				continue;
			cout<<j<<" ";
		}
		if(i!=n)
			cout<<endl;
	}

	for(int i=0; i<=n; i++){

		for(int j=n; j>=i; j--){
			cout<<j<<" ";
		}

		for(int j=1; j<=(2*i)-1; j++){
			cout<<"  ";
		}

		for(int j=i; j<=n; j++){
			if(j==0)
				continue;
			cout<<j<<" ";
		}

		cout<<endl;
	}	

	return 0;
}
#include <iostream>
#include <math.h>
using namespace std;
int main(){

	int n;
	cin>>n;

	for(int i=1; i<=(n+1)/2; i++){

		for(int j=n-i+1; j>1; j--){
			cout<<"    ";
		}

		for(int k=i; k>=1; k--){
			cout<<k<<" ";
		}

		for(int j=1; j<(2*i)-1; j += 2){
			cout<<"   ";
		}

		for(int k=1; k<=i; k++){
			if(i==1){
				continue;
			}else{
				cout<<k<<" ";
			}
		}

		cout<<endl;
	}

	for(int i=(n/2); i>=1; i--){

		for(int j=1; j<(n-i+1); j++){
			cout<<"    ";
		}

		for(int k=i; k>=1; k--){
			cout<<k<<" ";
		}

		for(int j=(2*i)-1; j>1; j -= 2){
			cout<<"   ";
		}

		for(int k=1; k<=i; k++){
			if(i==1){
				continue;
			}else{
				cout<<k<<" ";
			}
		}

		cout<<endl;
	}

	return 0;
}
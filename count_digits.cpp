#include <iostream>
using namespace std;
int main(){

	int n;
	cin>>n;
	int i=2;

	for(; i<n; i++){
		if(n%i==0){
			cout<<"Not Prime";
			break;
		}
		else
			continue;
	}	
	if(i==n){
		cout<<"Prime";
	}

	return 0;
}
#include <iostream>
#include <math.h>
using namespace std;
int main(){

	int n;
	cin>>n;

	cout<<"1"<<endl;

	for(int i=0; i<n; i++){

		if(i==0)
			continue;

		for(int j=0; j<=i; j++){
			
			if(j==0 || j==i){
				cout<<i;
			}else{
				cout<<"0";
			}

		}
		cout<<endl;
	}

	return 0;
}
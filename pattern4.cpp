#include <iostream>
#include <math.h>
using namespace std;
int main(){

	int n;
	cin>>n;

	int prev=0, curr=1;

	cout<<"0"<<endl;
	for(int i=1; i<n; i++){
		for(int j=0; j<=i; j++){

			cout<<curr<<" ";

			curr += prev;
			prev = curr; 
			cout<<"................."<<endl;
			cout<<"curr is "<<curr<<" & prev is "<<prev<<endl;

		}
		cout<<"----------------------"<<endl;
	}

	return 0;
}
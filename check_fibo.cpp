#include <iostream>
using namespace std;
int main(){

	int n;
	cin>>n;
	int a=0,b=1,c=0;

	if(n==0 || n==1){
		cout<<"false";
		return 0;
	}else{
		for(int i=0; i<n; i++){
			c=a+b;
			a=b;
			b=c;
			cout<<c<<" ";
			if(c==n){
				cout<<"in fibonnacci";
				return 0;
			}else{
				continue;
			}
		}
		cout<<"false";
	}

	return 0;
}
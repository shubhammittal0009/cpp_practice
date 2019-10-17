#include <iostream>
using namespace std;
int main(){
	
	int a,b;
	int sum=0;

	cin>>a;
	cin>>b;

	sum = (a+b);

	cout<<"Sum is "<<sum;

	if(sum%2==0){
		cout<<"Sum is Even \n";
	}else{
		cout<<"Sum is odd";
	}

	return 0;
}

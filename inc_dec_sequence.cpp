#include <iostream>
using namespace std;
int main(){

	long n=0, d=0, count=0;
	cin>>n>>d;
	
	while(n!=0){
		if(n%10==d){
			count++;
		}
		n /= 10;
	}

	cout<<count;

	return 0;
}
#include <iostream>
#include <math.h>
using namespace std;
int main(){

	long t = 0;
	cin>>t;

	while(t--){
		long n = 0;
		cin>>n;
		long sum = 0;
		long even=0, odd=0;

		while(n!=0){
			sum += (n%10);
			if((n%10)%2==0){
				even += (n%10);
			}else if((n%10)%2!=0){
				odd += (n%10);
			}
			n /= 10;
		}

		if(even%4==0 || odd%3==0){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}

	return 0;
}
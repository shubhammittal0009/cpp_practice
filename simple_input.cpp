#include <iostream>
using namespace std;
int main(){

	int sum = 0;
	int n=0;

	while(sum>=0){
		cin>>n;
		sum += n;
		if(sum<0)
			break;
		cout<<n<<endl;
	}

	return 0;
}
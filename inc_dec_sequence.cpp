#include <iostream>
using namespace std;
int main(){

	long n=0, s1[10000],s2[10000];
	cin>>n;
	int flag = 0;

	int n1=0, n2=0;

	cin>>n1;
	s1[0]=n;

	for(int i=1; i<n; i++){

		cin>>n2;

		if(n2<s1[i-1] && flag==0){
			s1[i]=n2;
			n1=n2;
			s2[i-1]=n2;
		}else if(n2>s2[i-1]){
			flag = 1;
			s2[i] = n2;
		}else {
			flag = 2;
			break;
		}
	}

	if(flag<2)
		cout<<"true";
	else
		cout<<"false";

	return 0;
}
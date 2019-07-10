#include <iostream>
#include <math.h>
using namespace std;
int main(){

	int n1=0, n2=0, term=0;

	cin>>n1>>n2;

	for(int i=1, count=0; count<n1; i++){
		term = (3*i)+2;
		if(term%n2==0){
			continue;
		}
		count++;
		cout<<term<<endl;
	}

	return 0;
}
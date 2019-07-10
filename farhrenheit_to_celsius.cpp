#include <iostream>
using namespace std;

int converter(int fahr){
	float cel;
	cel = (float(5*(fahr-32)/9));
	return cel;
}

int main(){

	int start=0, end=0, step=0;
	cin>>start>>end>>step;

	for(int i = start; i<=end; i += step){
		int cel = converter(i);
		cout<<i<<" "<<cel<<endl;
	}

	return 0;
}
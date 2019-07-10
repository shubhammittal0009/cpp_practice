#include <iostream>
#include <math.h>
using namespace std;
int main(){

	bool flag = true;
	long a=0, b=0, ans=0;
	char ch;

	do{
		cin>>ch;

		switch(ch){
			case '+':
				cin>>a>>b;
				ans = a+b;
				cout<<ans<<endl;
			break;
			case '-':
				cin>>a>>b;
				ans = a-b;
				cout<<ans<<endl;
			break;
			case '*':
				cin>>a>>b;
				ans = a*b;
				cout<<ans<<endl;
			break;
			case '/':
				cin>>a>>b;
				ans = a/b;
				cout<<ans<<endl;
			break;
			case '%':
				cin>>a>>b;
				ans = a%b;
				cout<<ans<<endl;
			break;
			case 'x' : case 'X':
				return 0;
			break;
			default:
			cout<<"Invalid operation. Try again."<<endl;
		}

	}while(flag);

	return 0;
}
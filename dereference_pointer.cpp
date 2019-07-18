#include <bits/stdc++.h>
using namespace std;
int main(){

	int x = 10;
	cout<<&x<<endl;

	char ch = 'C';
	cout<<(void *)&ch<<endl;

	int *xptr = &x;
	char *chptr = &ch;

	cout<<sizeof(xptr)<<endl;
	cout<<sizeof(chptr)<<endl;

	cout<<&x<<endl;
	cout<<xptr<<endl;

	int y1 = 7;

	xptr = &y1;
	cout<<&y1<<endl;
	cout<<xptr<<endl;

	return 0;
} 
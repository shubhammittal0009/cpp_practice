#include <iostream>
#include <math.h>
using namespace std;
int main(){

	long t=0, n=0, m=0;
	long c1=0, c2=0, c3=0, c4=0;
	long arr1[10000], arr2[10000];
	long cab1=0, cab2=0, rik1=0, rik2=0;
	long ans=0;

	cin>>t;
	while(t--){

		cab1=0; 
		cab2=0; 
		rik1=0; 
		rik2=0;

		// Taking Inputs
		cin>>c1>>c2>>c3>>c4;

		cin>>n>>m;

		for(int i = 0; i < n; i++)
			cin>>arr1[i];
		for(int i = 0; i < m; i++)
			cin>>arr2[i];

		// Minimizing Cost

		// Rikshaws
		for(int i = 0; i < n; i++){
			rik1 += min((arr1[i]*c1), c2);
		}

		rik2 = min(rik1, c3);

		// Cabs
		for(int i = 0; i < m; i++){
			cab1 += min((arr2[i]*c1), c2);
		}

		cab2 = min(cab1, c3);

		// final cost
		ans = min(c4, (rik2 + cab2));

		// Displaying Answer
		cout<<ans<<endl;
	}

	return 0;
}
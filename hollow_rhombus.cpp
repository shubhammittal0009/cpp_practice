#include <iostream>
using namespace std;
int main() {
        int n;
        cin>>n;
    int nst = n;
    int nsp = n;
    for (int i=1; i<=n; i++) {

      for(int j=n; j>=i; j--){
        cout<<" ";
      }
      
      for(int j=1; j<=n; j++){

        if(i==1 || i==n || j==1 || j==n)
          cout<<"*";
        else
          cout<<" ";

      }
      
      cout<<endl;
    }

}

#include <iostream>
using namespace std;

int main() {

  int arr[20];

  int n=0;
  cin>>n;

  for(int i=0; i<n; i++)
    cin>>arr[i];

  cout<<endl;
  cout<<"Input Array is : ";

  for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";

  cout<<endl;

  for(int i=0; i<n; i++)
    for(int j=i+1; j<n; j++){
      if(arr[i]>arr[j]){
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }

  for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";

}
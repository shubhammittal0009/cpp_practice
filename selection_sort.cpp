#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(arr[i]>arr[j]){
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }
}

void displayArr(int arr[], int n){
  for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}

int main() {

  int arr[20];

  int n=0;
  cin>>n;

  for(int i=0; i<n; i++)
    cin>>arr[i];

  cout<<endl;
  cout<<"Input Array is : ";

  displayArr(arr, n);

  cout<<endl;

  selectionSort(arr, n);

  displayArr(arr, n);
}
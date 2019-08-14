#include <iostream>
using namespace std;

int main() {

  int a[10];

  for(int i=0; i<10; i++){
    cin>>a[i];
  }

  int key=0, i=0;
  cout<<"Enter Key : ";
  cin>>key;

  for(; i<10; i++){
    if(key==a[i]){
      cout<<"Found at key at : "<<i;
      break;    
    }
  }

  if(i==10)
      cout<<"Key not found!";

}
#include<iostream>
using namespace std;
int main(){
  int target=8;
  int arr[]={1,2,3,4,8,5,3};
  int size = sizeof(arr)/sizeof(arr[0]);
  int value=-1;

  for(int i=0;i<size;i++)
  {
    if(target == arr[i])
    {
      value=i;
      cout<<"Value found at index : "<<value<<endl;
    }
    else{
      cout<<"Value not found at index : "<<i<<endl;
    }
  }
  

}
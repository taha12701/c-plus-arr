#include<iostream>
using namespace std;

int linSearch(int arr[], int size, int target){

  for(int i=0;i<size;i++){
    if(arr[i]==target)
    {
      return i;
    }
  }
  return -1;
}

int main(){
  int arr[]={1,2,3,4,5,8,0,4};
  int size = sizeof(arr)/sizeof(arr[0]);
  int target=0;
  cout<<linSearch(arr,size,target)<<endl;
}
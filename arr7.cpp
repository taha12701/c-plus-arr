#include<iostream>
using namespace std;

void swapArr(int arr[], int size){

  int start =0 ; int end=size-1;

  while(start<end)
  {
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}

int main(){
  int arr[]={1,2,3,4,5,6,7,8};
  int size=8;
  swapArr(arr,size);

  for(int i=1;i<size;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
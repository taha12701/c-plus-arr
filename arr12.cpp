#include<iostream>
using namespace std;

int main(){
  int arr1[]={1,2,3,4,5,6};
  int size=sizeof(arr1)/sizeof(arr1[0]);
  int start=0; int end=size-1;

  cout<<"The original array is : "<<endl;
  for(int i=0;i<size;i++){
    cout<<arr1[i]<<" ";
  }
  cout<<endl;

  while(start<end){
    swap(arr1[start],arr1[end]);
    start++;
    end--; 
  }

  cout<<"The reversed array is : "<<endl;
  for(int i=0;i<size;i++){
    cout<<arr1[i]<<" ";
  }
 


}
#include<iostream>
using namespace std;

int main(){
  int arr[]={1,2,3,4,5,6,7,8,9};
  int size= sizeof(arr)/sizeof(arr[0]);
  int sum=0;
  int pro=1;

  for(int i=0;i<size;i++){
    sum +=arr[i];
    pro *=arr[i];
  }
  cout<<"The sum of the elements of an array is : "<<sum<<endl;
  cout<<"The product of the elements of an array is : "<<pro;
}
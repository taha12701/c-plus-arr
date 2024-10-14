#include<iostream>
using namespace std;

// Intersection of the two arrays givenn !!!!
int main(){
  int arr1[]={23,45,32,11,10,5,19};
  int size1=sizeof(arr1)/sizeof(arr1[0]);
  int arr2[]={24,54,12,11,5,19,-87};
  int size2=sizeof(arr2)/sizeof(arr2[0]);
  int counter=0;

  for(int i=0;i<size1;i++)
  {
    for(int j=0;j<size2;j++){
      if(arr1[i]==arr2[j]){
        cout<<arr1[i]<<" ";
        cout<<endl;
        counter++;
      }
    }
  }
  cout<<"The total intersecting elements are : "<<counter;
}
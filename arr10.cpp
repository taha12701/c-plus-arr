#include<iostream>
#include<limits.h>
using namespace std;

int main(){
  int arr[]={23,1,14,2,-89,-45,22};
  int size = 7;
  int min=0;
  int max=0;

  for(int i=0;i<size;i++){
    if(arr[i]<arr[min]){
      min=i;
    }
    if(arr[i]>arr[max]){
      max=i;
    }
  }
  cout<<"The minimum element index is : "<<min<<endl;
  cout<<"The minimum element is : "<<arr[min]<<endl;
  cout<<"The maximum element index is : "<<max<<endl;
  cout<<"The maximum element is : "<<arr[max];
}

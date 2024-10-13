#include<iostream>
using namespace std;

void unique(int arr[], int size, int element, int counter){
   for(int i=0;i<size;i++){
    if(arr[i]==element)
    {
      counter +=1;
    }
  }
  cout<<"Unique element found times : "<<counter;

}

int main(){


  int arr[]={1,2,1,5,6};
  int size=5;
  int element=1;
  int counter =0;

  unique(arr,size,element,counter);

 
}
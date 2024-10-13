#include<iostream>
using namespace std;

// intersection of Two arrays
void intersection(int arr1[],int arr2[], int size1, int size2){
  for(int i=0;i<size1;i++)
  {
    for(int j=0;j<size2;j++)
    {
      if(arr1[i]==arr2[j])
      {
        cout<<arr1[i]<<" ";

}
    }
  }
}

int main(){
  int arr1[]={1,2,3,4};
  int size1=4;
  int arr2[]={4,1,5,9};
  int size2=4;

  intersection(arr1,arr2,size1,size2);



  
}
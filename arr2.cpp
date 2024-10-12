#include<iostream>
#include<limits.h>
using namespace std;

int main(){
  // int size;
  // cout<<"Enter the size of an array : ";
  // cin>>size;

  // // initialization of an array

  // int marks[size];

  // for(int i=0;i<size;i++)
  // {
  //   cin>>marks[i];
  // }

  // for(int i=0;i<size;i++)
  // {
  //   cout<<marks[i]<<endl;
  // }
  // cout<<"End of an array of size "<<size;



// maximum and largest element in an array

// int age[]={23,21,-4,9,-23,12,-34};
// int size =7;
// int smallest = INT_MAX;

// for(int i=0; i<size;i++)
// {
//   if(age[i]<smallest)
//   {
//     smallest=age[i];
//   }
// }
// cout<<"The smallest element is : "<<smallest;

// int age[]={23,21,-4,9,-23,12,-34};
// int size =7;
// int largest=INT_MIN;

// for(int i=0;i<size;i++)
// {
//   if(age[i]>largest)
//   {
//     largest=age[i];
//   }
// }
// cout<<"The minimum element is : "<<largest;

int age[]={23,21,-4,9,-23,12,-34};
int size =7;
int smallest=INT_MAX;
int largest=INT_MIN;
for(int i=0;i<size;i++)
{
  smallest=min(age[i],smallest);
  largest=max(age[i],largest);
}
cout<<"Size of an array is : "<<size<<endl;
cout<<"Smallest element is : "<<smallest<<endl;
cout<<"Largest element is : "<<largest;

}
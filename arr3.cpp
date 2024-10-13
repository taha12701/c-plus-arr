#include<iostream>
#include<limits.h>
using namespace std;


// a program to find the maximum and smallest number in an array
int main(){

  int marks[]={-45,-21,34,56,12,9,-4,23};
  int size=sizeof(marks)/ sizeof(marks[0]);
  int largest=INT_MIN;
  int minimum=INT_MAX;

  for(int i=0;i<size;i++)
  {
    if(marks[i]>marks[largest])
    {
      largest=i;
    }
    if(marks[i]<marks[minimum])
    {
      minimum=i;
    }
  }
  cout<<"The maximum element is : " <<marks[largest]<<endl;
  cout<<"The index at maximum number is : "<<largest<<endl;
  cout<<"The maximum element is : " <<marks[minimum]<<endl;
  cout<<"The index at minimum number is : "<<minimum;

}
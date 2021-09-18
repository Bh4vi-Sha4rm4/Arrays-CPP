#include<iostream>
using namespace std;
int secondlargest(int arr[], int n)
{
  int res=-1, largest=0;
  for(int i=0; i<n; i++)
  {
    if(arr[i]>arr[largest])
    {
      res=largest;
      largest=i;
    }
    else if(arr[i]!=arr[largest])
    {
      if (res = -1 || arr[i]>arr[res] )
      res=i;
    }
  }
}

int main()
{
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int arr[n];
  cout<<"Enter the array elements: ";
  for(int i=0; i<n; i++)
  cin>>arr[i];

  cout<<"The Indec of second largest element is: "<<secondlargest(arr, n);
}
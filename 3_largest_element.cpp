#include<iostream>
using namespace std;
int largestElement(int arr[], int n)
{
  int res=0;
  for(int i=0; i<n; i++)
  {
    if (arr[i]<arr[i+1])
    res=i;
  }
  return res;
}

int main()
{
  int n;
  cout<<"Enter size of the array: ";
  cin>>n;
  int arr[n];
  cout<<"Enter the array elements: ";
  for (int i=0; i<n; i++)
  cin>>arr[i];
  cout<<"The index of largest element is "<<largestElement(arr, n);

}
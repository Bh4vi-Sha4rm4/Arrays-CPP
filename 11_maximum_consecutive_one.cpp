#include<iostream>
using namespace std;
int maxones(bool arr[], int n)
{
  int res=0;
  for(int i=0; i<n; i++)
  {
    int count=0;

    for (int j=i; j<n; j++)
    {
      if(arr[j]==1)
      count++;
      else
      break;

    }

    res=max(res, count);
  }
  return res;
}

int main()
{
  int n;
  cout<<"Enter number of elements: ";
  cin>>n;
  bool arr[n];
  cout<<"Enter array elements: ";
  for(int i=0; i<n; i++)
  cin>>arr[i];

  cout<<maxones(arr, n);
  return 0;
}
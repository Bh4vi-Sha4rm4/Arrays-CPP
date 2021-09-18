#include<iostream>
using namespace std;

int arrayleader(int arr[], int n)
{
  for(int i=0; i<n; i++)
  {
    bool flag = false;
    for(int j=i+1; j<n; j++)
    {
      if (arr[i]<=arr[j])
      {
        flag=true;
        break;
      }
    }
    if (flag==false)
    cout<<arr[i]<<" ";
  }
}
int main()
{
  int n;
  cout<<"Enter the number of elements: ";
  cin>>n;
  int arr[n];
  cout<<"Enter the array elements: ";
  for(int i=0; i<n; i++)
  cin>>arr[i];

  arrayleader(arr, n);
}
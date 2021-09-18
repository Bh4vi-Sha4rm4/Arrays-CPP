#include<iostream>
using namespace std;
int reverse(int arr[], int n)
{
  int low=0, high=n-1;
  while(low<high)
  {
    int temp=arr[low];
    arr[low]=arr[high];
    arr[high]=temp;
    low++;
    high--;
  }
  for(int i=0; i<n; i++)
  cout<<arr[i]<<" ";
}

int main()
{
  int n;
  cin>>n;
  int array[n];
  for (int i=0; i<n; i++)
  cin>>array[i];
  reverse(array,n);
  return 0;

  


}
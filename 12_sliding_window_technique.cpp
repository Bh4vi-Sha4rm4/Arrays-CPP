#include<iostream>
using namespace std;
int maxsubarray(int arr[], int n, int k)
{
  int curr_sum=0;
  for(int i=0; i<k; i++)
  {
    curr_sum+=arr[i];
  }
  int max_sum=curr_sum;
  for(int i=k; i<n; i++)
  {
    curr_sum+=(arr[i]-arr[i-k]);
    max_sum=max(max_sum, curr_sum);
  }

  return max_sum;
}

int main()
{
  int n, k;
  cin>>n>>k;
  int arr[n];
  for(int i=0; i<n; i++)
  cin>>arr[i];
  cout<<"Max subarray of size "<<k<<" is "<<maxsubarray(arr,n,k);
  return 0;
}
#include<iostream>
using namespace std;
int rainwater(int arr[], int n)
{
  int res=0;
  int lmax[n], rmax[n];
  lmax[0]=arr[0];
  for(int i=1; i<n; i++)
  lmax[i] = max(arr[i], lmax[i-1]);

  rmax[n-1]=arr[n-1];
  for(int i=n-2; i>=0; i--)
  rmax[i]=max(arr[i], rmax[i+1]);

  for(int i=0; i<n; i++)
  res=res+ (min(lmax[i], rmax[i])-arr[i]);
  return res;
  }

  int main()
  {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];

    cout<<rainwater(arr,n);
    return 0;

  }
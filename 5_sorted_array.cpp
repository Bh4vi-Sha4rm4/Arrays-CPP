#include<iostream>
using namespace std;
bool issorted(int arr[], int n)
{
//   for(int i=0; i<n; i++)
//   {
//     for(int j=0; j<n; j++)
//     if(arr[j]<=arr[i])        This is Naive approach, takes O(n^2) 
//     return false;             time complexity
//   }
//   return true;

for(int i=0; i<n; i++)
{
  if(arr[i]<arr[i-1])
  return false;                //Efficient method, O(n) time complexity

  return true;
}
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for (int i=0; i<n; i++)
  cin>>arr[i];
  cout<<issorted(arr,n);
  return 0;

}
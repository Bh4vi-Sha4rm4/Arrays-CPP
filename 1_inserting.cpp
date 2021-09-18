#include <iostream>
#include <cmath>
using namespace std;

int insert(int arr[], int n, int x, int cap, int pos)
{
	if(n == cap)
		return n;

	int idx = pos - 1;

	for(int i = n - 1; i >= idx; i--)
	{
		arr[i + 1] = arr[i];
	}

	arr[idx] = x;

	return n + 1;
} 


    
int main() 
{
  int cap;
  cout<<"Enter the cpacity of the array: ";
  cin>>cap;
  int n;
  cout<<"Enter number of present elements: ";
  cin>>n;
  int arr[n];  
  cout<<"Enter present elements: "<<endl;
  for(int i=0; i < n; i++)
  {
   	cin>>arr[i];
  }
  cout<<"Before Insertion"<<endl;
  for(int i=0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  int x;
  cout<<"Enter the elment to insert: ";
  cin>>x;
  int pos;
  cout<<"Enter the position for new element: ";
  cin>>pos;
  n = insert(arr, n, x, cap, pos);
  cout<<"After Insertion"<<endl;
  for(int i=0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }

}
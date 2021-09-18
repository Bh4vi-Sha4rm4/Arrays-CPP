#include<iostream>
using namespace std;
int deletion(int arr[], int n, int x)
{
	int i = 0;

	for(i = 0; i < n; i++)
	{
		if(arr[i] == x)
			break;
	}

	if(i == n)
		return n;


	for(int j = i; j< n-1; j++)
	{
		arr[j] = arr[j+1];
	}
  return (n-1);
} 

int main()
{
  int n;
  cout<<"Enter number of present elements: ";
  cin>>n;
  int arr[n];  
  cout<<"Enter present elements: "<<endl;
  for(int i=0; i < n; i++)
  {
   	cin>>arr[i];
  }
  cout<<"Before deletion :";
  for(int i=0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  /*int x;
  cout<<"Enter the elment to insert: ";
  cin>>x;*/
  int x;
  cout<<"Enter the element to delete: ";
  cin>>x;
  deletion(arr, n, x);
  cout<<"After Deletion: ";
  for(int i=0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
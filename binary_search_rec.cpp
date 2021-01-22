#include<iostream>
using namespace std;
int binary_search(int a[],int ,int ,int );
int binary_search(int a[],int low,int high,int x)
{
	if(low>high)
	{
		return -1;
	}
	int mid = (low+high)/2;
	if(x==a[mid])
	{
		return mid;
	}
	else if(x<a[mid])
	{
	
	return binary_search(a,low,mid-1,x);
	}
	else 
	{
		return binary_search(a,mid+1,high,x);
	}
}
int main()
{
	int i,n,a[100],j ;
	cout<<"enter the range of numbers: ";
	cin>>n;
    cout<<"enter the sorted array: ";
	for(i=0;i<n;i++)
	{
	cin>>a[i];	
	}	

	cout<<"enter the number you want to find: ";
	cin>>j;
    cout<<binary_search(a,0,n,j);

	return 0;
}
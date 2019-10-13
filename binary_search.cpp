#include<iostream>
using namespace std ;
int main()
{
	int i,n,arr[100],j ;
	cout<<"enter the range of numbers: ";
	cin>>n;
    cout<<"enter the sorted array: ";
	for(i=0;i<n;i++)
	{
	cin>>arr[i];	
	}	
	int mid;
    mid = n/2;
	cout<<"enter the number you want to find: ";
	cin>>j;
	if(arr[mid]==j)
	{
		cout<<"element found in the mid!"; 
			cout<<"position:"<<mid;
	}


    else if(arr[mid]<j)
	{
			for(i=n-1;i>mid;i--)
			{
				if(arr[i]==j)
				{
					cout<<"element found!! :)";
					cout<<"position:"<<i;
				}
				
			}
}
else if(arr[mid]>j) {
	for(i=0;i<mid;i++)
	{
		if(arr[i]==j)
		{
			cout<<"element found!! :)";
			cout<<"position:"<<i;
		}
		
	}

}
else {
	cout<<"element not found :(";
}

return 0;
}

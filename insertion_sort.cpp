#include<iostream>
using namespace std;
int main()
{
	int i,j,n,key,a[100];
	cout<<"enter the range of the:"<<endl;
	cin>>n;
	cout<<"enter the array:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for(i=1;i<n;i++)
	{
       key=a[i];
       j=i-1;
       while((j>=0) && (a[j]>key))
       {
       	a[j+1]=a[j];
       	j=j-1;
       }
       a[j+1]=key;
	}
    
    cout<<"sorted array is:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}

return 0;
}
#include<iostream>
using namespace std;
int main()
{
	int i,j,a[100],n,temp=0,index;
	cout<<"enter the range of the:"<<endl;
	cin>>n;
	cout<<"enter the array:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}


	for(i=0;i<n;i++)
	{
		index=i;
		for(j=i+1;j<n;j++)
			{
				if(a[index]>a[j])
				{
					temp=a[index];
					a[index]=a[j];
					a[j]=temp;
				}
			}
	}


	 cout<<"sorted array is:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}

	return 0;
	
}
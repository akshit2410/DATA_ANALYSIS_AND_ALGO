	#include<iostream>
using namespace std ;
int main()
{
    int n,a[100],i,flag=0,m;

    cout<< "enter the range of array:"<<endl;
    cin>>n;
    cout<<"enter the array elements:"<<endl;
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
    }
    
    cout<<"enter the element to be searched:"<<endl;
    cin>>m;
    for(i=0;i<n;i++)
    {
    	if(a[i]==m)
    	{
    		flag=1;

    	}

    }
    if(flag==1)
    {
    	cout<<"element found! :)"<<endl;
    }
    else {
    	cout<<"element not found :("<<endl;
    }
return 0;
}
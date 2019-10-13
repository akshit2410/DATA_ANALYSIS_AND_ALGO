#include<iostream>
using namespace std;
void heapify(int a[],int n,int i )
{
	
	int largest = i;
	int leftchild = 2*i+1;
	int rightchild = 2*i+2;

    if(leftchild<n && a[leftchild]>a[largest])
    {
          largest=leftchild;
    }	
    if(rightchild<n && a[rightchild]>a[largest])
    {
    	largest=rightchild;
    }

    if(largest!=i)
    {
    	swap(a[i],a[largest]);
    	heapify(a,n,largest);
    }
   

}
void buildheap(int array[], int n) 
{ 
	// Build heap (rearrange array) 
	for (int i = n / 2 - 1; i >= 0; i--) 
		heapify(a, n, i);
}		
void del(int a[], int& n,int& p,int b[]) 
{ 
    // Get the last element 
    if(n>0)
    {
    int lastElement = a[n - 1]; 
    b[p]=a[0];
   
    
    a[0] = lastElement; 
    
    
    n = n - 1; 
    p++;
 
    heapify(a, n, 0); 
cout<<"\nafter deleting :\n";
for (int i = 0; i < n; i++)
{
	cout<<a[i]<<" ";
}
    del(a,n,p,b);
}
} 
void insertNode(int a[], int& n, int Key) 
{ 
	
	n = n + 1; 
	a[n - 1] = Key; 
	heapify(a, n, 0); 
} 
  
	

int main()
{
	int a[100],n,i,b[100],p=0;
	cout<<"enter the elements in the array:";
	cin>>n;
	cout<<"enter the array:\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
cout<<"\nenter the key to be insertes:\n";
insertNode(a,n,key);	
buildheap(a,n);
for (i = 0; i < n; i++)
{
	cout<<a[i]<<" ";
}

cout<<endl;
del(a,n,p,b);
cout<<endl;

cout<<endl;
cout<<"sorted array is :\n";
for (int j = p-1; j >=0; j--)
{
	cout<<b[j]<<" ";
}
return 0;	
}
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
	{
		char items;
		int profit;
		int weight;
		float ratio;
		node *next;
	};


void push(node** head_ref, char items,int profit,int weight)  
{  
    node* new_node = new node(); 
    node *last = *head_ref;
    new_node->items = items;  
    new_node->profit = profit;  
    new_node->weight = weight;  
    new_node->ratio =profit/weight ;  
    new_node->next = NULL; 
     if (*head_ref == NULL)  
    {  
        *head_ref = new_node;  
        return;  
    }    
      while (last->next != NULL)  
        last = last->next;  
    last->next = new_node;  
   
}  

void knapsack(node** head,float w,float &sum1,float &sum2)
{
node *p = *head;;

while(p!=NULL)
{
	if(w!=0 && w>0)
	{
		if(w>=p->weight)
		{
	        w=w-p->weight;
	        sum1=sum1+p->weight;
	        sum2=sum2+p->profit;
		}
		else
		{
			
			float l;
			l=w;
			w=l-p->weight;
			float f=l/p->weight;
			sum1=sum1+f*p->weight;
			sum2=sum2+f*p->profit;

		}

    }
  p=p->next;  

  
}
 


}

int main()
{
float sum1=0.0,sum2=0.0,w;
int n;
cout<<"enter the weight of knapsack:";
cin>>w;	
cout<<"\nenter the number of elements in the linked list :\n";
cin>>n;

node* head = NULL;
node* m =NULL;
node* g=NULL;


for (int i = 0; i < n; i++)
{
	char items;
	int profit,weight;
	cout<<"enter the details for item "<<i<<":\n";
	cout<<"enter the item name:\n";
	cin>>items;
	cout<<"enter the profit:\n";
	cin>>profit;
	cout<<"enter the weight:\n";
	cin>>weight;

	push(&head,items,profit,weight);

}

m=head;

char tempi;
int tempp,tempw;
float tempr;
node * temp=NULL;
//sorting the linked list according to the ratio of the nodes.
while(m!=NULL)
{
	g=m->next;
	while(g!=NULL)
	{
		if(g->ratio > m->ratio)
		{
			tempi=g->items;
			tempr=g->ratio;
			tempw=g->weight;
            tempp=g->profit;
            g->items=m->items;
			g->ratio=m->ratio;
			g->weight=m->weight;
			g->profit=m->profit;
			m->items=tempi;
			m->ratio=tempr;
			m->weight=tempw;
            m->profit=tempp;

		}
	g=g->next;
	}

m=m->next;

}
//knapsack function called.
knapsack(&head,w,sum1,sum2);

cout<<"total weight of knapsack:"<<sum1<<endl;
cout<<"total profit obtained:"<<sum2;
return 0;
}
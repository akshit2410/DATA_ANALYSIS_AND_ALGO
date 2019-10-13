#include<iostream>
#include <bits/stdc++.h>
using namespace std;
struct  node {
	int S;
	int D;
	int W;
	node* next;

};


void kruskal(node **head_ref,set<int>s,int flag[])
{
node *head=*head_ref;
while(head!=NULL)
{
	
	if((flag[head->S]==0 && flag[head->D]==0)||(flag[head->S]==1 && flag[head->D]==0)||(flag[head->S]==0 && flag[head->D]==1))
	{

	  
       cout<<head->S<<"----------"<<head->D<<"==="<<head->W<<endl;
       flag[head->S]=1;
       flag[head->D]=1;
      
	}
	 head=head->next; 
}



}

void creategraph(node** head_ref,int s,int d ,int w)
{
 node* new_node = new node(); 
    node *last = *head_ref;
    new_node->S = s;  
    new_node->D = d;  
    new_node->W = w;  
    
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

int main()
{
	int n;
	cout<<"how many edges do you want:\n";
	cin>>n;
	node* head = NULL;
	node* g =NULL;
	node* m=NULL;
	for(int i=0;i<n;i++)
	{
		int source,destination,weight;
		cout<<"enter the source of edge:";
		cin>>source;
		cout<<"enter the destination of edge:";
		cin>>destination;
		cout<<"enter the weight of edge:";
		cin>>weight;
        creategraph(&head,source,destination,weight);

	}

m=head;
int temps,tempd,tempw;
node * temp=NULL;
//sorting the linked list according to the weight of the nodes.
while(m!=NULL)
{
	g=m->next;
	while(g!=NULL)
	{
		if(g->W < m->W)
		{
			
			temps=g->S;
			tempd=g->D;
            tempw=g->W;
            g->S=m->S;
			g->D=m->D;
			g->W=m->W;
			m->S=temps;
			m->D=tempd;
			m->W=tempw;

		}
	g=g->next;
	}

m=m->next;

}
node *pre =head;
set<int>s;
while(head!=NULL)
{
	s.insert(head->S);
	s.insert(head->D);
	head=head->next;	
}


cout<<endl;
int len=s.size();
int flag[len];
set<int>::iterator e;
for(e=s.begin(); e!=s.end(); ++e)
	{
         flag[*e]=0;
	}
head=pre;
cout<<"MST:\n";
kruskal(&head,s,flag);


return 0;		
}
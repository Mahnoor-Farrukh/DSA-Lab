#include<iostream>
using namespace std;
struct Node{
	
	int data;
	Node *next;
};
class Queue
{

  Node *front;
Node *rear;
public:
	Queue()
	{
		front=rear=NULL;
	}
	
	
	
	void Enqueue(int value)
	{
		Node *newnode=new Node();
		newnode->data=value;
		
		
		if(front==NULL)
		{
			front=rear=newnode;
			rear->next=front;
		}
	
    else
    {
    	newnode->next=front;
    	rear->next=newnode;
    	rear=newnode;
	}
	
	
		cout<<value<<" is enqueued"<<endl;
		
	}

	void Dequeue()
	{
	if(front==NULL)
	{
		cout<<"Queue is empty"<<endl;
	}
	else if(front==rear)
	{
		Node *temp=front;
		front=rear=NULL;
		delete temp;
	}
	else
	{
		Node*temp=front;
		front=front->next;
		rear->next=front;
		delete temp;
	}
}
void Display()
{

cout<<endl;
	cout<<"Elements in Queue: "<<endl;
	Node *temp=front;
	do
	{
		cout<<temp->data<<" ";
		temp=temp->next;
		
	}
	while(temp!=front);
	{
	cout<<endl;
	}
	
}

void getrear()
{
	cout<<endl;
	cout<<"Getting rear"<<endl;
	cout<<rear->next->data<<endl;
	
}

	
	

};
int main()
{
	Queue q1;
q1.Enqueue(10);
q1.Enqueue(20);
q1.Enqueue(30);
q1.Enqueue(40);
q1.Enqueue(50);
q1.Display();
q1.Dequeue();
q1.Display();
q1.Enqueue(60);
q1.Display();
q1.getrear();
}


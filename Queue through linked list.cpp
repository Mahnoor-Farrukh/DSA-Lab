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
		rear=NULL;
		front=NULL;
	}
	
	
	
	int Enqueue(int value)
	{
		Node *newnode=new Node();
		newnode->data=value;
		newnode->next=NULL;
	
	if(front==NULL)  //check if queue is empty
	{
		front=rear=newnode;  //since intialy queue is empty it means you can add newnode so intially rear and front points to newnode;
	}
	else  //this part of code runs when queue already has some items
	{
		rear->next=newnode;  //as front is static we cant move front
		rear=newnode;
	}
	
		cout<<value<<" is enqueued"<<endl;
		
	}

	void Dequeue()
	{
	
 
  Node *temp=front;  //taking temporary pointer and front is used for traversing
  cout<<front->data<<" dequeued from the queue"<<endl;
  front=front->next; //The front pointer is moved to the next,removing the current front node from the queue.
                     //now front points to the new front of the queue.

  
  
delete temp;
}
void Display()
{

cout<<endl;
	cout<<"Elements in Queue: "<<endl;
	Node *temp=front;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
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
}

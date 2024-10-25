#include<iostream>
using namespace std;
const 	int size=5;
class Queue
{
public:

	int arr[size];
	int rear,front;
	Queue()
	{
		rear=-1;
		front=-1;    //intially queue is empty
	}
	
	bool empty()
	{
	return(front==-1 && rear==-1);
	
	}
	bool full()
	{
		return(rear==size);
	}
	int Enqueue(int value)
	{
		if(full())  //if queue is full
		{
		cout<<"Queue is Full. Cant Enqueue....";
		}
		else   //if queue is empty
		{
			
			arr[rear++]=value;  //arr[0] = 10; places 10 at arr[0],After placing 10, rear++ increments rear from 0 to 1.
			cout<<value<<" enqueued into the Queue"<<endl;
		}
		
	}
	void Dequeue()  //Removes an item from the front of the queue
	{
	if(empty())
	{
		cout<<"Queue is empty , Cannot dequeue..."<<endl;
	}
	else
	{
		cout<<arr[front]<<" dequeued from the queue"<<endl;
		front++;  //increments front to next element and removing the current front item from queue
	}
	}
void Display()
{
	if(empty())
	{
		cout<<"Queue is empty"<<endl;
	}
	else
	{
	cout<<endl;
	cout<<"Displaying Of Queue: "<<endl;
	for(int i=front;i<rear;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
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

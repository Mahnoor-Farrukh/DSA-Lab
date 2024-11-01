//Circular queue using array
#include<iostream>
using namespace std;
const 	int size=5;
class Queue
{
public:

	int arr[size];
	int rear,front,count;
	Queue()
	{
		rear=0;
		front=0;    //intially queue is empty
		count=0;
	}
	
	bool empty()
	{
	return(count==0);
	
	}
	bool full()
	{
		return(count==size);
	}
	
	int Enqueue(int value)
	{
		if(!full())  //if queue is full
		{
			arr[rear]=value;
			rear=(rear+1)%size;
			count++;
			cout<<value<<" is enquened into queue"<<endl;
			
			}
			else
			{
				cout<<"Queue Overflow"<<endl;
			}
		
		
	}
	int Dequeue()  //Removes an item from the front of the queue
	{
	if(!empty())
	{
		int val=arr[front];
		front=(front+1)%size;
		count--;
		return val;
	}
		else
		{
			cout<<"Queue Underflow"<<endl;
			return-1;
			
		}
	}
void Display()
{
	if(empty())
	{
		cout<<"Queue is empty"<<endl;
		return;
	}
	else
	{
	cout<<endl;
	cout<<"Displaying Of Queue: "<<endl;
	int index=front;
	for(int i=0;i<count;i++)
	{
		cout<<arr[i]<<" ";
		index=(index+1)%size;
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
q1.Enqueue(60);
q1.Display();

}

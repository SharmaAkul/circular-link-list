#include<iostream>
using namespace std;
class circularQueue
{
	public:
		int size,a[20],value;
		static int front,rear;
		circularQueue()
		{
			cout<<"enter size of array : ";
			cin>>size;
		}
		void push()
		{
			cout<<"enter the element : ";
			cin>>value;
		  if((front==0 && rear==size-1) || (rear==front-1))
		      cout<<"Queue overflow"<<endl;
		  else
		  {
		  	if(front==-1)
		  	{
		  		front=rear=0;
			}
		  else if(rear==size)
		  	{
		  		 rear=0;
			}
		  	   
		  	else
		  	rear++;
		  	
		  	a[rear]=value;
		  }
		  cout<<a[rear];
		}
		void pop()
		{
		  if(front==-1)
		     cout<<"Queue Underflow"<<endl;
		  else
		  {
		  	if(front==rear)
		  	   front=rear=-1;
		  	else if(front==size)
		  	   front=0;
		  	else
		  	   front++;
		  }	
		}
		void pip()
		{
		  if(rear<front)
		  {
		  	for(int i=front;i<size;i++)
		  	   cout<<a[i]<<" ";
		  	for(int i=0;i<=rear;i++)
		  	   cout<<a[i]<<" ";
		  }	
		  else if(rear>front)
		    for(int i=front;i<=rear;i++)
		       cout<<a[i]<<" ";
		}
};
int circularQueue::front=-1;
int circularQueue::rear=-1;
int main()
{
	int c;
	circularQueue q;
		cout<<"1.Push \n 2.Pop \n 3.Pip \n 4.Exit"<<endl;
	while(1)
	{
		cout<<endl<<"enter the choice : ";
		cin>>c;
		switch(c)
		{
			case 1:
				{
				    q.push();
					break;	
				}
			case 2:
				{
					q.pop();
					break;	
				}
			case 3:
				{ 
					q.pip();
					break;
				}
			case 4:
				{
				   exit(0);		
				}
		}
	}
	return 0;
}

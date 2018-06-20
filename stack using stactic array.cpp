#include<iostream>
using namespace std;
# define capacity 5
int stack[capacity];
int topIndex=-1;
bool isEmpty()
{
	if(topIndex==-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool isFull()
{
	if(topIndex==capacity-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void push(int data)
{
	if(isFull())
	{
		cout<<"Stack is full. Element cant be inserted!!!\n";
	}
	else
	{
		topIndex++;
		stack[topIndex]=data;
	}
}
int pop()
{
	if(isEmpty())
	{
		cout<<"Stack is empty. No more element to pop!!!\n";
		return 0;
	}
	else
	{
		int ele = stack[topIndex];
		topIndex--;
		return ele;
	}
}
void peek()
{
	if(isEmpty())
	{
		cout<<"Stack is empty. No more element to peek!!!\n";
	}
	else
	{
		cout<<stack[topIndex]<<endl;
	}
}
void traverse()
{
	if(isEmpty())
	{
		cout<<"Stack is empty. No element to traverse!!!\n";
	}
	else
	{
		for(int i=0;i<=topIndex;i++)
		{
			cout<<stack[i]<<endl;
		}
	}
}
int length()
{
	return topIndex;
}
int main()
{
	int choice,data,popElement,len;
	cout<<"1 Push an element.\n";
	cout<<"2 Pop an element.\n";
	cout<<"3 Peek.\n";
	cout<<"4 Traverse.\n";
	cout<<"5 Find length of the stack.\n";
	cout<<"6 Exit\n";
	cout<<"Enter your choice.\n";
	while(1)
	{
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter an element.\n";
				cin>>data;
				push(data);
				break;
			case 2:
				popElement=pop();
				cout<<popElement<<" is popped out of stack\n";
				break;
			case 3:
				peek();
				break;
			case 4:
				traverse();
				break;
			case 5:
				len=length();
				cout<<len<<" is the length of the stack.\n";
				break;
			case 6:
				exit(0);
				break;
			default:
				cout<<"Invalid choice\n";
				break;
		}
	}
}

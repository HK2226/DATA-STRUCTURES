#include<iostream>
using namespace std;

#define max_size 10 // in this case the size of the stack is fixed

class stack // Class for all the operation of the stack
{
	private:
		
		int top,arr[max_size]; // Defining the required variables - top which indicates the top of the stack
		
	public:
		
		stack() // Used the contructor to initialize the top to -1 because at the start there will be no variables and the stack starts from 0th position
		{
			top = -1;
		}
		
		bool is_full() // function to check whether the stack is full or not
		{
			if (top==max_size-1) // as the top is initialized t0 -1 the actual count would be max_size-1 if it is full ( 9 not 10) 
			{
				return true; 
			}
			else
			{
				return false;
			}
		}
		
		bool is_empty()
		{
			if (top==-1) // when no element is in the stack it will as like it is initialized at the start(-1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		
		void push(int ele)
		{
			if (is_full()) // We cant add elements if the stack is full
			{
				cout<<"Stack Overflow"<<endl;
			}
			else
			{
				top++; // top is incremented first because the stack follow LIFO so the top keeps track of the latest added position, top++ will create space to new element
				arr[top] = ele;
				cout<<"element added successfully in the stack"<<endl;
			}
		}
		
		int pop()
		{
			if(is_empty()) // we cant delete if the stack is empty
			{
				cout<<"Stack Underflow"<<endl;
				return 0;
			}
			else
			{
				int del_ele = arr[top];
				top--; // just decrementing the top as it keeps track of the top most element and the element is not deleted because it can be over written
				return del_ele;
			}
		}
		
		int peek(int pos) // given the position we can find the element here peek is not just for top element
		{
			if(is_empty())
			{
				cout<<"The Stack is empty"<<endl;
			}
			else
			{
				return arr[pos];
			}
		}
		
		void change(int val,int pos) // changing the value in the given position if there is no element in the position it will just add it in.
		{
			arr[pos] = val;
			cout<<"The value is changed"<<endl;
		}
		
		void display() // the position of the element will be from 0 to top but the correct manner is to represent in reverse order
		{
			for(int i = top;i>=0;i--)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
		
		int search(int val) //  if the value is found it will return the valur else it will print not found
		{
			int found = 0,p;
			for(int j =top;j>=0;j--)
			{
				if(val == arr[j])
				{
					found = 1;
					p = (j+1);
				}
			}
			if(found == 0)
			{
				cout<<"Not found"<<endl;
			}
			else
			{
				return p;
			}
		}
		
		void count() // top keeps track of the elements
		{
			cout<<top+1<<endl;
		}
		
};

int main()
{
	stack s; // object for the class
	int f = 1; // TO continue or discountinue the operations
	int choice; // Which operation to do
	while(f == 1)
	{
		cout<<"Choice \n1) Push \n2) pop \n3) Empty? \n4) Full? \n5) Display \n6) Change \n7) Peek \n8) Search \n9) top"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				int e;
				cout<<"Enter the element to be pushed ";
				cin>>e;
				s.push(e);
				break;
			case 2:
				int d;
				d = s.pop();
				cout<<d<<" is the element popped"<<endl;
				break;
 			case 3:
 				if(s.is_empty())
 				{
 					cout<<"Stack is empty"<<endl;	
				}
				else
				{
					cout<<"Stack is not empty"<<endl;
				}
				break;
  			case 4:
  				if(s.is_full())
  				{
  					cout<<"Stack is Full"<<endl;
				}
				else
				{
					cout<<"Stack is not full"<<endl;
				}
				break;
			case 5:
				s.display();
				break;
			case 6:
				int x,y;
				cout<<"Enter the position to be changed(0-9) and the value ";
				cin>>x>>y;
				s.change(y,x);
				break;
			case 7:
				int a,b;
				cout<<"Enter the position ";
				cin>>a;
				b=s.peek(a);
				cout<<b<<" Is the element found in that position"<<endl;
				break;
			case 8:
				int r,t;
				cout<<"Enter the value to be searched ";
				cin>>r;
				t=s.search(r);
				cout<<t<<"found"<<endl;
				break;
			case 9:
				s.count();
			default:
				cout<<"Wrong choice";
		}
		cout<<"DO you want to continue 1/0 ";
		cin>>f;
		system("cls");
	}
}


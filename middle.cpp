#include<iostream>

#include<string>


using namespace std;

class stack {
	private:
		int top;
		int arr[5];
		
		
	public:
	stack()
	{
		
		top=-1;
		for(int i=0;i<5;i++)
		{
			arr[i]=0;
			
		}
    }
    
    bool isEmpty()
    {
    	if(top==-1)
    	  return true;
    	else
    	  return false;
    	  
	}
	
	bool isFull()
	{
		if(top==4)
		   return true;
		else
		   return false;
		   
	}
	
	void push(int val)
	{
		if(isFull())
		{
			cout<<"stack overflow"<<endl;
			
		}
		else
		{
			top++;
			arr[top]=val;
			
		}
	}
    
    int pop()
    {
    	if(isEmpty())
    	{
    		cout<<"stack underflow"<<endl;
    		return 0;
    		
		}
		else
		{
			int popvalue = arr[top];
			arr[top] = 0;
			top--;
			return popvalue;
			
		}
	}
	
	int count(){
		return (top + 1);
		
	}
	
	int middle()
	{
		if(isEmpty())
		{
			cout<<"stack underflow"<<endl;
			return 0;
			
			
		}
		else{
			
			if(top%2==0)
			{
				return arr[top/2];
				
			}
		
			
		}
	}
	
	void change(int pos,int val)
	{
		arr[pos] = val;
		cout<<"value changed at location"<<pos<<endl;
		
	}
	
	void display()
	{
		cout<<"all values in the stack are"<<endl;
		for(int i=4;i>=0;i--)
		{
			cout<<arr[i]<<endl;
			
		}
	}
	
	
    
};


int main()
{
	stack s1;
	int option,position,value;
	
	do{
		
		cout<<"what operations do you want to perfform?select option number.enter 0 to exit."<<endl;
		
		cout<<"1.push()"<<endl;
		cout<<"2.pop()"<<endl;
		cout<<"3.isEmpty()"<<endl;
		cout<<"4.isFull()"<<endl;
		cout<<"5.middle()"<<endl;
		cout<<"6.count()"<<endl;
		cout<<"7.change()"<<endl;
		cout<<"8.display()"<<endl;
		cout<<"9.clear screen"<<endl<<endl;
		
		cin>>option;
		
		switch(option)
		{
			case 0:
				break;
			case 1:
				cout<<"enter an item to push in the stack"<<endl;
				cin>>value;
				s1.push(value);
				break;
			case 2:
				cout<<"pop function called-popped value:"<<s1.pop()<<endl;
				break;
			case 3:
				if(s1.isEmpty())
				{
					cout<<"stack is empty"<<endl;
					
				}
				else
				{
					cout<<"stack is not empty";
					
				}
				break;
			case 4:
				if(s1.isFull())
				{
					cout<<"stack is full"<<endl;
					
				}
				else
				{
					cout<<"stack is not full"<<endl;
				}
				break;
			case 5:
			      s1.middle();
			      break;
			case 6:
				cout<<"count functon called-number of items in the stack are:"<<s1.count()<<endl;
				break;
			case 7:
				cout<<"change function called-"<<endl;
				cout<<"enter position of item you want to change:";
				cin>>position;
				cout<<endl;
				cout<<"enter value of item you want to change:";
				cin>>value;
				s1.change(position,value);
				break;
			case 8:
				cout<<"displayed function called-"<<endl;
				s1.display();
				break;
			case 9:
				system("cls");
				break;
			default:
				cout<<"enter proper option number"<<endl;
				
			     				
		}
		
	}while(option!=0);
	
	return 0;
	
}

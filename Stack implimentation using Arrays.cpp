#include<iostream>
#include<climits>
using namespace std;

class Stack{
	int *data;
	int nextindex;
	int capacity;
	
	public:
		//Constructor which intialise the size of Stack:
		Stack(){
			data = new int[4];   // as per our wish we can alocate any capacity
			nextindex = 0;
			capacity = 4;  // as per our wish we can alocate any capacity
		}
		
		//To check the size of Stack:
		int size(){
			return nextindex;
		}
		
		//To check weather the the stack is empty or not:
		bool isEmpty(){
			if(nextindex==0){
				return true;
			}
			else{
				return false;
			}
		}
		
		//To get the top of the stack:
		int top(){
			return data[nextindex-1];
		}
		
		//To insert element
		void push(int element){
			if(nextindex == capacity){
				int *newdata = new int[2*capacity];
				for(int i=0; i<capacity; i++){
					newdata[i] = data[i];
				}
				capacity = capacity*2;
				delete [] data;
				data = newdata;
				//cout<<"Stack is full"<<endl;
				//return;
			}
			
			data[nextindex] = element;
			nextindex ++;
		}
		
		//To pop an element from stack:
		int pop(){
			if(isEmpty()){
				cout<<"Stack is Empty"<<endl;
				return INT_MIN;
			}
			nextindex--;
			return data[nextindex];
		}
		
};


int main(){
	
	Stack s1;
	

	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(40);	
	s1.push(50);
	
	cout<<s1.top()<<endl;
	
	cout<<s1.pop()<<endl;
	cout<<s1.pop()<<endl;
	cout<<s1.pop()<<endl;
	
	cout<<s1.size()<<endl;
	cout<<s1.isEmpty()<<endl;
	
	return 0;
}

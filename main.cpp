#include<iostream>
using namespace std;
class Stack{
	private:
		int *A;
		int top;
		int cap;
	public:
		Stack(int size){
			A = new int[size];
			cap = size;
			top=-1;
			for(int i = 0 ; i<size ; i++){
				A[i] = 0;
			}
		}
		void push(int v){
			if(isfull()){
				cout<<"Stack OverFlow"<<endl;
				return;
			}
			top++;
			A[top] = v;
		}
		void display(){
			for(int i = 0; i<cap ; i++){
				cout<<i+1<<" : "<<A[i]<<endl;
			}
		}
		int peek(){
			if(isEmpty()){
				cout<<"Stack is Empty"<<endl;
				return -1;
			}
			int x = A[top];
			return x;
		}
		int pop(){
			if(isEmpty()){
				cout<<"Stack is Empty"<<endl;
				return -1;
			}
			int x = A[top];
			top--;
			return x;
		}
		bool isfull(){
			return top == cap - 1;
		}
		bool isEmpty(){
			return top == -1;
		}
		~Stack(){
			delete[] A;
		}
};
void menue(){
	cout<<"1 : Check Empty"<<endl;
	cout<<"2 : Check Full"<<endl;
	cout<<"3 : Push Value"<<endl;
	cout<<"4 : Pop Value"<<endl;
	cout<<"5 : Check Peek"<<endl;
	cout<<"6 : Display Stack"<<endl;
	cout<<"Enter Your Choice"<<endl;
}
int main(){
	Stack s(5);
	menue();
	int option;
	char ch;
	do{

	cin>>option;
	switch(option){
		case 1: if(s.isEmpty()){
			cout<<"Stack is Empty"<<endl;
		}
		else{
			cout<<"Stack is Not Empty"<<endl;
		}
		break;
		case 2: if(s.isfull()){
			cout<<"Stack is Full"<<endl;
		}
		else{
			cout<<"Stack is Not Full"<<endl;
		}
		break;
		case 3:
			int v;
			cout<<"Enter The Value For Push : ";
			cin>>v;
			s.push(v);
		break;
		case 4:
			cout<<"Pop Value Is : "<<s.pop()<<endl;
		break;
		case 5:
		cout<<"Peek Value is : "<<s.peek()<<endl; 
		break;
		case 6:
			s.display();
			break;
		default:
		cout<<"Invalid Option"<<endl;
	}
}while(ch!='y'||ch!='Y');
	
	

	
	
	return 0;
}

#include <iostream>

using namespace std;


#define STACKSIZE 100 
//define a const static int stack size as 100 


//define a stack data structure that only contains intergers 

class Stack{
	
private:
	int myStack[STACKSIZE]; 
	
	//top index position to traverse the stack array 
	
	int topPosition; 
	
	
public:
	
	//The initializer: a stack is always initizlied as empty.
	//The stack is empty stack when its top index position is -1 not 0. 
	
	Stack(){
		
		topPosition = -1; 
	}
	
	

//implement a push() function to insert an element onto the stack
	
	void push(int data) {
		
		//check if overflow (check if the stack array is full before pushing values in 
		
		//If stack is full 
		
		if (topPosition >= STACKSIZE - 1 ) {
			
			cout<<"Error: Stack Overflow. Cannot push more integers"<<endl; 
			
			return; 
		} 
		
		//else if the stack is not yet full, push items in. 
		
		myStack[topPosition + 1] = data; 
		
		//keep traversing through the stack 
		
		topPosition = topPosition + 1; 
		
	
	}
	
	
	
	
	//pop() function to always remove the most recently added element
	//from the collection and returns the element followed by LIFO method 
	
	int pop(){
		
		//check if underflow(check if the stack array is already empty before popping values out)
		
		//topPosition <= -1 an underflow stack 
		
		if (topPosition <= -1){
			
			cout << "Error: Stack Underflow. Cannot pop any integers."<<endl; 
			
			return -999999; 
			
		}
		
		//else if the stack is not empty, pop items out
		
		topPosition = topPosition - 1; 
		
		return myStack[topPosition + 1]; 
		
	}
	
	
	//peek() function returns the most recently added element (without removing it)
	
	int peek() {
		
		//check if stack underflow 
		
		if (topPosition <= -1) {
			
			cout <<"Error: Stack Underflow. No most recently added elements to return." <<endl; 
			
			return -999999; 
			
			
		}
		
		//else return the most recently added element without removing it 
		
		return myStack[topPosition]; 
		
	}

	
	
}; 



	
//Driver code 


int main(int argc, char *argv[]) {
	
	//start with an empty stack st and perform the following functions in order.
	
	Stack st; 
	
	st.push(3); 
	
	st.peek(); 

	//cout<<"The returned value is: "<<st.peek()<<endl; 
	//the returned value is 3. test passed. 
	
	st.push(4); 
	
	st.push(5); 
	
	//cout<< "The deleted and returned value is: " << st.pop() <<endl; 
	//the deleted and returned value is 5. test passed. 

	st.pop();
	
	st.peek(); 
	
	//cout<<"The returned value is: "<< st.peek()<<endl; 
	//the returned value is 4. test passed. 
	
	st.push(6); 
	
	
	//cout<< "The deleted and returned value is: " << st.pop() <<endl; 
	//the deleted and returned value is 6. test passed. 

	st.pop(); 
	
//Some extra tests: 
	
	
	//start with an empty stack st and perform the following functions in order.
	
	Stack TestingStack; 
	
	TestingStack.push(30); 
	
	TestingStack.peek(); 
	
	//cout<<"The returned value is: "<<TestingStack.peek()<<endl; 
	//the returned value is 30. test passed. 
	
	TestingStack.push(34); 
	
	TestingStack.push(36); 

	//cout<< "The deleted and returned value is: " << TestingStack.pop() <<endl; 
	//the deleted and returned value is 36. test passed. 
	
	TestingStack.pop();
	
	TestingStack.peek(); 
	
	//cout<<"The returned value is: "<< TestingStack.peek()<<endl; 
	//the returned value is 34. test passed. 
	
	TestingStack.push(32); 
	
	
	//cout<< "The deleted and returned value is: " << TestingStack.pop() <<endl; 
	//the deleted and returned value is 32. test passed. 
	
	TestingStack.pop(); 
	
	
	
	
	
	return 0; 
	
	
	
	
	
}
	
	
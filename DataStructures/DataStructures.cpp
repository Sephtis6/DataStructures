//including from the visual studio library
#include <iostream>
#include <cstdio>
#include <stack>
#include <queue>
#include <string>
//using the namespace std
using namespace std;
//ints declaring the stack size and how much is in the stack/if it is empty
int top = -1; 
int stack1;

//stl less stack items
//a void for the push function in a stack
void push(int stack1[], int x, int n)
{
	//if they are equal it means the stack is full and to display the message
	if (top == n - 1)
	{
		cout << "Stack is full.Overflow condition!" << endl ;
	}
	else
	{
		//add to the top position and insert another element in the new position
		top = top + 1;
		stack1[top] = x;
	}
}
//bool for if the stack is empty or not
bool isEmpty()
{
	//if the stack is empty return true otherwise return false
	if (top == 0) 
		return true;
	else
		return false;
}
//void for popping an integer from a stack
void pop(int stack1[], int n)
{
	//if it;s empty display the following message
	if (isEmpty())
	{
		cout << "Stack is empty.Underflow condition!" << endl;
	}
	//otherwise remove the last element from the stack
	else
	{
		top = top - 1;         
	}
}
//the current size of the stack
int size()
{
	//return the size of the stack
	return top + 1;
}

//stl less que items
char queue1[30];
//bool for if the queue is empty or not
bool isEmpty1(int front, int rear) {
	return front == rear;
}
//the current size of the stack
int size1(int front, int rear) 
{
	return rear - front;
}
//the enqueue void to display whether the void is full
//if not add another element to the back of the queue
void enqueue(char queue1[], char element, int& rear, int arraySize) {
	if (rear == arraySize) 
		cout << "Queue is full.Overflow condition!" << endl;
	else {
		queue1[rear] = element;
		rear++;
	}
}
//void for the dequeue to display whether the queue is empty
//if it is not it deletes the from element
void dequeue(char queue1[], int& front, int rear) {
	if (front == rear)
		cout << "Queue is empty.Underflow condition!" << endl;
	else {
		queue1[front] = 0;
		front++;
	}
}
//displays what is at the front of the queue
char Front(char queue1[], int front) {
	return queue1[front];
}

//main void that runs all the functions
int main()
{
	//part 1 stack without stl
	//set the stack size
	int stack1[5];
	//adding a number to the stack
	int add;
	//asking the user to enter a number the stack
	cout << "Please enter a number to add to the stack" << endl;
	cin >> add; 
	push(stack1, add, 5);
	//displays the current stack size and what numbers are in the stack
	cout << "Current size of stack is " << size() << endl;
	for (int i = 0; i<size(); i++)
		cout << "Numbers in the stack" << '\t' << stack1[i] << endl;
	//asking the user to enter another couple numbers the stack
	cout << "Please enter another few numbers to add to the stack" << endl;
	cin >> add;
	push(stack1, add, 5);
	cin >> add;
	push(stack1, add, 5);
	cin >> add;
	push(stack1, add, 5);
	cin >> add;
	push(stack1, add, 5);
	//displays the current stack size and what numbers are in the stack
	cout << "Current size of stack is " << size() << endl;
	for (int i = 0; i<size(); i++)
		cout << "Numbers in the stack" << '\t' << stack1[i] << endl;
	//As now the stack is full ,further pushing  will show overflow condition .
	cout << "The stack should now be full. Lets see the overflow condition." << endl;
	push(stack1, 12, 5);
	//now removing all the elements from stack .
	cout << "Now to remove all elements from the stack." << endl;
	for (int i = 5; i > 0; i--)
		pop(stack1, i);
	cout << "Current size of stack is " << size() << endl;
	//as stack is empty , now further popping will show underflow condition .
	cout << "The stack should now be full. Lets see the underflow condition." << endl;
	pop(stack1, 0);
	//pauses the system so that you can see the outputs
	system("Pause");

	//part 1 que without stl
	//the queue size and entry's
	char queue1[30] = { 'd', 'a', 't', 'a', 's', 't', 'r', 'u', 'c', 't', 'u', 'r', 'e' };
	//ints for front and rear
	int front = 0, rear = 13;
	//the array size
	int arraySize = 30;
	//number of steps
	int st = 13;
	//char called ch
	char ch;
	//runs through each item in the queue
	for (int i = 0; i < st; ++i) {
		ch = Front(queue1, front);
		enqueue(queue1, ch, rear, arraySize);
		dequeue(queue1, front, rear);
	}
	//displays the current queue size and what letter are in the stack
	cout << "Current size of stack is " << front << endl;
	//prints each item in the queue front to back
	for (int i = front; i <= rear; ++i)
		printf("%c", queue1[i]);
	cout << endl;
	//pauses the system so that you can see the outputs
	system("Pause");

	//part 2 stack with stl
	//declaring the stack
	stack <int> s;
	//inserting numbers 0-9 to the stack
	for (int i = 0; i < 10; i++)
	{
		s.push(i);
	}
	//size of stack s
	cout << "Size of stack is : " << s.size() << endl;
	//accessing top element from stack, it will be the last inserted element.
	//Now deleting all elements from stack 
	for (int i = 0; i < 10; i++)
	{
		s.pop();
	}
	//size of stack s
	cout << "Size of stack is : " << s.size() << endl;
	//nothing is in stack so will return the empty function
	if (s.empty())
	{
		cout << "Stack is empty." << endl;
	}
	//otherwise would return else function
	else
	{
		cout << "Stack is Not empty." << endl;
	}
	//pauses the system so that you can see the outputs
	system("Pause");

	//part 2 queue with stl
	//setting up the functions to be put in the queue
	char queue2[30] = { 'd', 'a', 't', 'a', 's', 't', 'r', 'u', 'c', 't', 'u', 'r', 'e' };
	//declaring the queue
	queue <char> q;
	//the number of steps to fill the queue
	int N = 13;
	//char called ch1
	char ch1;
	//pushing the queue2 char into the queue
	for (int i = 0; i < 13; ++i)
		q.push(queue2[i]);
	//puching and popping the queue into ch1
	for (int i = 0; i < N; ++i) {
		ch1 = q.front();
		q.push(ch1);
		q.pop();
	}
	cout << "Size of queue is : " << q.size() << endl;
	//while the queue is empty will print the queue
	while (!q.empty()) {
		printf("%c", q.front());
		q.pop();
	}
	cout << endl;
	//pauses the system so that you can see the outputs
	system("Pause");
	return 0;


}

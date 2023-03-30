#include<iostream>
#include<string>
using std::string;

class Vector{
	string* data;
	int capacity;
	int length;
	
	public:
	Vector(int n=1);
	~Vector();
	
	void push_back(string s);
	string operator[](int i);
	void remove(int x);
	int size();
	
};


class Stack{
struct Node{
	Node* prev;
	string s;
	
	Node(Node* prev,string s) : prev(prev),s(s) {}
};

Node* cur;
Node start;

public:
	Stack();
	~Stack();
	void push(string s);
	string pop();
	string peek();
	bool is_empty();
	
};
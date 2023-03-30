#include "util.h"
Vector::Vector(int n) : data(new string[n]),capacity(n),length(0) {}

Vector::~Vector(){
	if(data){
		delete[] data;
	}
}

void Vector::push_back(string s){
	if(capacity<=length){
		string* temp = new string[capacity*2];
		for(int i=0;i<length;i++){
			temp[i]=data[i];
		}
		delete[] data;
		data=temp;
		capacity*=2;
	}
	
	data[length]=s;
	length++;
}
string Vector::operator[](int i) {return data[i];}
void Vector::remove(int x){
	for(int i=x+1;i<length;i++){
		data[i-1]=data[i];
	}
	length--;
}

int Vector::size() {return length;}

Stack::Stack() : start(NULL,"") {cur=&start;}
void Stack::push(string s){
	Node* n = new Node(cur,s);
	cur=n;
}
string Stack::pop(){
	if(cur==&start) return "";
	
	string s = cur->s;
	Node* prev = cur;
	cur = cur->prev;
	
	delete prev;
	return s;
}
string Stack::peek(){
	return cur->s;
}
bool Stack::is_empty(){
	return cur==&start;
}
Stack::~Stack(){
	while(cur!=&start){
		Node* prev = cur;
		cur = cur->prev;
		delete prev;
	}
}

int main(){
	Stack stack;
	stack.push("hello");
	stack.push("bye");
	
	Vector vec;
	vec.push_back("hello");
	vec.push_back("bye");
	
	std::cout<<stack.pop()<<std::endl;
	std::cout<<stack.peek()<<std::endl;

	std::cout<<vec[1]<<std::endl;
	vec.remove(0);
		std::cout<<vec.size()<<std::endl;
}
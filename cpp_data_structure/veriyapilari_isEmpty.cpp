#include <iostream>
using namespace std;

class Node{
	public:
		Node(const int& data = 0,Node* next=NULL) : data(data),next(next){
			
		}
		int data;
		Node* next;
};
class list{
	Node* root;
	public:
		list() : root(NULL){ 
			 
		}
		Node* begin()const{  return root; }
		Node* end()const{  return NULL;   }
		
		//bool isEmpty()const{return root == NULL}		ünilerde anlatilan
		bool isEmpty()const{ return begin()	==	end();	}   	// baþ ve son birbirine eþitse zaten boþtur
};

int main(){
	list l;
	cout << l.isEmpty()<<endl; // çýktý 1 yani mantýksal olarak true olarak dönecektir
	
	return 0;
} 

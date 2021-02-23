#include <iostream>
using namespace std;
// push_back() - Sondan doðru eleman ekleme.


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
		list() : root(NULL){ }
		Node* begin()const{  return root; }
		Node* end()const{  return NULL;   }
		
		//bool isEmpty()const{return root == NULL}		ünilerde anlatilan
		bool isEmpty()const{ return begin()	==	end();	}   	// baþ ve son birbirine eþitse zaten boþtur
		void push_back(const int& value){
			if(isEmpty()){
				// burada liste boþsa yeni bir düðüm oluþtur
				root = new Node(value);   // boþ bir listeye eleman ekledik
				
			}else{
				// root isaretcim null deðilse
				// yeni bir düðüm oluþturuyorum
				Node* tmp = begin();
				while(tmp->next != end())
					tmp = tmp->next;
				tmp->next = new Node(value);	
			}
		}
		void print()const{
			Node* tmp = begin();
			while(tmp != end()){
			
			cout << tmp->data<<" ";
			tmp = tmp->next;
			}
		}
		
		
};

int main(){
	list l;
	cout << l.isEmpty()<<endl; // çýktý 1 yani mantýksal olarak true olarak dönecektir
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);
	cout << l.isEmpty()<<endl;
	/*
	Node* first = l.begin();
	Node* last = l.end();
	*/
	l.print();

	return 0;
} 

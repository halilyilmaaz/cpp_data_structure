#include <iostream>
using namespace std;
// push_front() - Ba�tan do�ru eleman ekleme.


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
		//bool isEmpty()const{return root == NULL}		�nilerde anlatilan
		bool isEmpty()const{ return begin()	==	end();	}   	// ba� ve son birbirine e�itse zaten bo�tur
		void push_back(const int& value){
			if(isEmpty()){
				// burada liste bo�sa yeni bir d���m olu�tur
				root = new Node(value);   // bo� bir listeye eleman ekledik
				
			}else{
				// root isaretcim null de�ilse
				// yeni bir d���m olu�turuyorum
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
			cout<< endl;
		}
		void push_front(const int& value){
			Node* tmp = new Node(value);
			 tmp->next=root;
			root = tmp;
			
		}		
};

int main(){
	list l;
	cout << l.isEmpty()<<endl; // ��kt� 1 yani mant�ksal olarak true olarak d�necektir
	
	
	/*
	Node* first = l.begin();
	Node* last = l.end();
	*/
	
	l.push_front(11);
	
	l.push_front(6);
	
	l.push_front(4);
	
	l.push_back(3);
	
	l.push_front(7);
	
	l.push_back(55);
	l.push_front(22);
	l.push_back(77);
	l.print();
	return 0;
} 

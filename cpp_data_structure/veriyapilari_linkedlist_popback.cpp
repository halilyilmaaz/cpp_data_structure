#include <iostream>
using namespace std;
// push_front() - Baþtan doðru eleman ekleme.


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
		int front()const{
			if(isEmpty())
				throw "Error : list::front() for list is empty";
			return begin()->data;
		}
		int back()const{
			if(isEmpty())
				throw "Error : list::back() for kist is empty";
			Node* tmp = begin();
			while(tmp->next != end())
				tmp = tmp->next;
			return tmp->data;		
		}
		void print()const{
			Node* tmp = begin();
			while(tmp != end()){
				cout << tmp->data<<" ";
				tmp = tmp->next;
			}
			cout<< endl;
		}
		// sondan doðru eleman cýkarma pop_back()
		void pop_back(){
			if(isEmpty())
				throw "Error : list::pop_back() for list is empty";
			if(begin()->next == end())
			{
				delete root;
				root = NULL;	
			}else{
				Node* tmp = begin();
				while(tmp->next->next !=end())
					tmp = tmp->next;
				delete tmp->next;
				tmp->next=NULL;	
			}	
		}
		void push_front(const int& value){
			Node* tmp = new Node(value);
			 tmp->next=root;
			root = tmp;
			
		}		
};

int main(){
	list l;
	
	
	
	
	
	
	
	return 0;
} 

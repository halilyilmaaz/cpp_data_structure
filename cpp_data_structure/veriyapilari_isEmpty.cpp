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
		
		//bool isEmpty()const{return root == NULL}		�nilerde anlatilan
		bool isEmpty()const{ return begin()	==	end();	}   	// ba� ve son birbirine e�itse zaten bo�tur
};

int main(){
	list l;
	cout << l.isEmpty()<<endl; // ��kt� 1 yani mant�ksal olarak true olarak d�necektir
	
	return 0;
} 

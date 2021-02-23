#include <iostream>
using namespace std;

template <class T>
class Node{
	public:
		Node(const T& data = T(),Node<T>* next = NULL) : data(data),next(next){
			
		}
		T data;
		Node<T>* next; 
};


int main(){
	Node<int>* n1 = new  Node<int>(3);
	//cout << n1->data<<endl;
	Node<int>* n2 = new Node<int>(5);
	//cout << n2->data<<endl;
	Node<int>* n3 = new Node<int>(10);
	cout <<	n1->data<<endl;
	cout << n2->next->data;
	return 0;
}

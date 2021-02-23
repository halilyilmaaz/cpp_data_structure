#include <iostream>
using namespace std;
template <class T>
class vector{
	int* data;
	int cap;
	int index;
		void growth(){
			if(size()>= cap())
				{
					cap2 *= 2; 
				}		
		}
	public:
		vector() : data(NULL),index(0),cap(1){
			data = new T[cap];
		}
		int size()const{return index; }	 
		int capacity()const{ return cap; } 
		
		void push_back(const T& value){
			data[index++] = value;
		}
		void pop_back(){
			index--;
		}
		bool isEmpty(){
			return size()==0;
		}
		
		T front()const{
			if(isEmpty())
				throw "Error : Vector is Empty";
			return data[0];
		}
};


int main(){
	vector<int> v;
	v.push_back(10);
	v.pop_back(); 
	cout << v.isEmpty() <<endl;
	
	
	return 0;
}

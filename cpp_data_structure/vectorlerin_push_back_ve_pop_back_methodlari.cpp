#include <iostream>
using namespace std;
template <class T>
class vector{
	int* data;
	int cap;
	int index;
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
};


int main(){
	vector<int> v;
	
	
	
	return 0;
}

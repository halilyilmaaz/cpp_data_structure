#include <iostream>
using namespace std;


int main(){
	
	int arr[]={1,2,3,4,5};
	
	int *ptr = arr;
	
	ptr=ptr +1;
	cout << ptr;
	
	return 0;
}

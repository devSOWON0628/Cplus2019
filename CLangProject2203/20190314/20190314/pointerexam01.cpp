#include <iostream>
using namespace std;

int main() {
	int num = 1;
	int *ptr1 = &num;
	int *ptr2 = &num;
	int *ptr3, ptr4;
	int *ptr5, *ptr6;
	ptr3 = &num, ptr4 = 1;
	ptr5 = &num, ptr6 = &num;

	
	cout << "ptr1 은 int* 형이며 값은 " << ptr1 << endl;
	cout << "ptr2 은 int* 형이며 값은 " << ptr2 << endl;
	cout << "ptr3 은 int* 형이며 값은 " << ptr3 << endl;
	cout << "ptr4 은 int 형이며 값은 " << ptr4<< endl;
	cout << "ptr5 은 int* 형이며 값은 " << ptr5 << endl;
	cout << "ptr6 은 int* 형이며 값은 " << ptr6 << endl;

	return 0;
}
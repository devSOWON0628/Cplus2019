#include <iostream>
#include <memory>
using namespace std;
int main() {
	unique_ptr<int> ptr(new int);
	*ptr = 100;
		cout << *ptr << endl;
	//delete ptr;
	return 0;
}

#include <iostream>
//#include <string.h>
using namespace std;

char *str = nullptr;

void tell() {
	delete[]str;
	cout << "������" << endl;
}
int main() {
	str = new char[6];
	strcpy_s(str, 6, "sowon");
	cout << str << endl;
	
}
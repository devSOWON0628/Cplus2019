#include <iostream>

using namespace std;

int main() {
	int j = 10, k = 20;

	int *p = &j;
	 p = &k;
	 cout << *p << end;

}
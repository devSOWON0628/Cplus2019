#include <iostream>

using namespace std;

int main() {
	int *po = nullptr;
	int n = 3;
	po = &n;
	*po = 4;
	cout << n << endl;
	cout << *po << endl;
}
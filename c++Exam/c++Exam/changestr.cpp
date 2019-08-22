#include <iostream>

using namespace std;

int main() {
	char * sce = nullptr;
	char dest[] = "same";

	sce = dest;
	sce[0]= 'g';

	cout << *sce << endl; //g 
	cout << *(++sce) << endl;//a
	cout << sce<< endl; //game 
	cout << dest << endl; //game
}
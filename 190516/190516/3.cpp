#include <iostream>
#include<memory>
using namespace std;
int main() {
	unique_ptr<int[]> pArray(new int[10]);

	for (int i = 0; i < 10; i++) {
		pArray[i] = 20 + i;
	}
	for (int i = 0; i < 10; i++)
		cout << pArray[i] << endl;

	cout << endl;
	return 0;
}
//int a(10)은 a에다가10을 넣으라는 의미 c++스타일
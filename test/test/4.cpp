#include <iostream>
using namespace std;

class Test1 {
	int iData;

public:
	Test1() {
		cout << "TestC::Test()" << endl;
	}

	~Test1() {
		cout << "삭제되었다" << endl;
	}
};

int main() {
	Test1* ptr = new Test1[3];
	delete[] ptr;
	cout << "엔드" << endl;
	return 0;

}
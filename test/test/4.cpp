#include <iostream>
using namespace std;

class Test1 {
	int iData;

public:
	Test1() {
		cout << "TestC::Test()" << endl;
	}

	~Test1() {
		cout << "�����Ǿ���" << endl;
	}
};

int main() {
	Test1* ptr = new Test1[3];
	delete[] ptr;
	cout << "����" << endl;
	return 0;

}
#include <iostream>
using namespace std;

class CTest {
public:
	CTest() {
		cout << "CTest::CTest()" << endl;
	}
	~CTest() {
		cout << "~CTest::CTest()" << endl;
	}
};

//CTest a;//��ü ������ ���ÿ� ���

int main() {
	cout << "Begin a " << endl;
	CTest a;//��ü�� �����̵Ǹ鼭 �ڵ����� CTest�� ȣ��ȴ�
	cout << "Begin b " << endl;
	CTest b;
	cout << "End" << endl;

	return 0;

}
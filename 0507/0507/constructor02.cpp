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

//CTest a;//객체 생성과 동시에 출력

int main() {
	cout << "Begin a " << endl;
	CTest a;//객체가 생성이되면서 자동으로 CTest가 호출된다
	cout << "Begin b " << endl;
	CTest b;
	cout << "End" << endl;

	return 0;

}
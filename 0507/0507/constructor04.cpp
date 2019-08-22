#include <iostream>
using namespace std;

class CTest {
	int m_nData;
public:
	CTest() //nParam에 있는 값을 m_nData에 대입하는것 초기화!
	{
		cout << "CTest::CTest()" << endl;
	}

	~CTest() {
		cout << "~CTest::CTest()" << endl;
	}

};

//CTest a;//객체 생성과 동시에 출력

int main() {
	cout << "Begin a " << endl;
	CTest *pData = new CTest();//new가나오면 동적으로
	cout << "Test" << endl;
	delete pData;//heap영역에 있는 객체를 삭제한다. 메모리 삭제
	//소멸자가 호출된다
	cout << "End" << endl;

	return 0;

}
#include <iostream>
using namespace std;

class CTest {
	int m_nData;
public:
	CTest(int nParam): m_nData(nParam)//nParam에 있는 값을 m_nData에 대입하는것 초기화!
	{
		cout << "CTest::CTest()" << endl;
	}

	~CTest() {
		cout << "~CTest::CTest()" << m_nData<< endl;
	}

};

//CTest a;//객체 생성과 동시에 출력

int main() {
	cout << "Begin a " << endl;
	CTest a(10);//객체가 생성이되면서 자동으로 CTest가 호출된다
	cout << "Before b " << endl;
	CTest b(20);
	cout << "End" << endl;

	return 0;

}
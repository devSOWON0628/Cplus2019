#include <iostream>
using namespace std;

class CTest {
	int m_nData;
public:
	CTest(int nParam): m_nData(nParam)//nParam�� �ִ� ���� m_nData�� �����ϴ°� �ʱ�ȭ!
	{
		cout << "CTest::CTest()" << endl;
	}

	~CTest() {
		cout << "~CTest::CTest()" << m_nData<< endl;
	}

};

//CTest a;//��ü ������ ���ÿ� ���

int main() {
	cout << "Begin a " << endl;
	CTest a(10);//��ü�� �����̵Ǹ鼭 �ڵ����� CTest�� ȣ��ȴ�
	cout << "Before b " << endl;
	CTest b(20);
	cout << "End" << endl;

	return 0;

}
#include <iostream>
using namespace std;

class CTest {
	int m_nData;
public:
	CTest() //nParam�� �ִ� ���� m_nData�� �����ϴ°� �ʱ�ȭ!
	{
		cout << "CTest::CTest()" << endl;
	}

	~CTest() {
		cout << "~CTest::CTest()" << endl;
	}

};

//CTest a;//��ü ������ ���ÿ� ���

int main() {
	cout << "Begin a " << endl;
	CTest *pData = new CTest();//new�������� ��������
	cout << "Test" << endl;
	delete pData;//heap������ �ִ� ��ü�� �����Ѵ�. �޸� ����
	//�Ҹ��ڰ� ȣ��ȴ�
	cout << "End" << endl;

	return 0;

}
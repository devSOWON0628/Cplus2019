#include <iostream>
using namespace std;

class CTest {
	int m_nData;
public:
	CTest() //nParam�� �ִ� ���� m_nData�� �����ϴ°� �ʱ�ȭ!
	{cout << "CTest::CTest()" << endl;}
	~CTest() {
		cout << "~CTest::CTest()" << endl;}

};

int main() {
	cout << "Begin a " << endl;
	CTest *pData = new CTest[3];//CTest[3]()�� ǥ���ص� �ȴ�. new�������� ��������
	cout << "Test" << endl;
	delete[] pData;//heap������ �ִ� ��ü�� �����Ѵ�. �޸� ����//�迭�� �����Ȱ��� �迭�� �����Ѵ�
	//�Ҹ��ڰ� ȣ��ȴ�
	cout << "End" << endl;

	return 0;
}
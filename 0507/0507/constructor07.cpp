#include <iostream>
using namespace std;

class CRefTest {
private:
	int &m_nData;

public:
	CRefTest(int &rParam){m_nData=rParam}; //nParam�� �ִ� ���� m_nData�� �����ϴ°� ������ �ʱ�ȭ!!!�߿���
	int GetData(void) { return m_nData; }

};

int main() {

	int a = 10;
	CRefTest t(a);

	cout << t.GetData() << endl;
	a = 20;
	cout << t.GetData() << endl;

	return 0;
}
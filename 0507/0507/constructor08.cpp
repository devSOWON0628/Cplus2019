#include <iostream>
using namespace std;
//!!!!!!!!!!!!!!!!!!!!!�߿���
class CRefTest {
private:
	int &m_nData;//������ �Ű�����

public:
	CRefTest(int rParam) : m_nData(rParam) {//rParam�� �����͸� m_nData�� ����
		cout << "������"<<m_nData << endl;

	}; 
	int GetData(void) { return m_nData; }

};
//rParam�� �Ű������� �Լ����� ����� ���� ������µ�, rParam�� �����̶� m_nData�� return �Ѵ��ص� �����Ⱚ�� ���´�.
int main() {

	int a = 10;
	CRefTest t(a);

	cout << t.GetData() << endl;
	a = 20;
	cout << t.GetData() << endl;

	return 0;
}
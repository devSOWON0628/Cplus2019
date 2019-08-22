#include <iostream>
using namespace std;

class CRefTest {
private:
	int &m_nData;

public:
	CRefTest(int &rParam){m_nData=rParam}; //nParam에 있는 값을 m_nData에 대입하는것 생성자 초기화!!!중요함
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
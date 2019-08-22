#include <iostream>
using namespace std;
class MyData {
public:
	MyData(int  nParam) {
		m_pnData = new int;
		*m_pnData = nParam;
	}

	MyData(const MyData &rhs) {
		cout << "CMDyata(cosnt MyData &)" << endl;
		m_pnData = new int;
		*m_pnData = *rhs.m_pnData;
	}
	int getData() {
		if (m_pnData != NULL)
			return *m_pnData;

		return 0;
	}

private:
	int *m_pnData = nullptr;

};
int main() {
	MyData a(10);
	MyData b(a);
	cout << a.getData() << endl;
	cout << b.getData() << endl;
	return 0;
}
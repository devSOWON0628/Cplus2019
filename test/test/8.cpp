#include <iostream>
using namespace std;
class MyPerson {
public:
	MyPerson(int nParam) :nAge(nParam)
	{
		cout << "MyPerson()" << endl;
	}
	MyPerson(const MyPerson &rhs) : nAge(rhs.nAge)
	{
		cout << "MyPerson(const MyPerson &)" << endl;
	}
	int getData() { return nAge; }
	void setData(int nData) { nAge = nData; }
private:
	int nAge = 0;

	
};
void TestFunc(MyPerson p) {
	cout << "TestFunc()" << endl;
	p.setData(50);
}
int main() {
	cout << "½ÃÀÛ" << endl;
	MyPerson p1(30);
	TestFunc(p1);
	cout << "p1:" << p1.getData() << endl;
	cout << "²ý" << endl;
	return 0;
}
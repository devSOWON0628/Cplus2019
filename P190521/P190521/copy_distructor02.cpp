#include <iostream>
using namespace std;
class MyPerson {
public:
	MyPerson(int nParam):nAge(nParam)
	{ cout << "Myperson()" << endl; }

	MyPerson(const MyPerson &rhs):nAge(rhs.nAge)
	{
		cout << "MyPerson(const MyPerson &)" << endl;
	}

	int getData(void)const { return nAge; }
	void setData(int nData) { nAge = nData; }

private:
	int nAge = 0;
};

void TestFunc(MyPerson param) {//�� ���忡�� ��������ڰ� �߻��Ѵ�
	//param ��ü�� p1��ü�� ���� �ް� �ȴ�.
	cout << "TestFunc()" << endl;
	param.setData(50);
}
int main() {
	cout << "**begin**" << endl;
	MyPerson p1(30);
	TestFunc(p1);
	//�Լ� ȣ�� �� p1���� ����Ѵ�
	cout << "p1:" << p1.getData() << endl;
	cout << "*****End***" << endl;
	return 0;
}
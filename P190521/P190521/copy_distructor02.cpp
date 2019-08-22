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

void TestFunc(MyPerson param) {//이 문장에서 복사생성자가 발생한다
	//param 객체가 p1객체의 값을 받게 된다.
	cout << "TestFunc()" << endl;
	param.setData(50);
}
int main() {
	cout << "**begin**" << endl;
	MyPerson p1(30);
	TestFunc(p1);
	//함수 호출 후 p1값을 출력한다
	cout << "p1:" << p1.getData() << endl;
	cout << "*****End***" << endl;
	return 0;
}
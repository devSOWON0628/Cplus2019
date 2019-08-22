#include <iostream>
using namespace std;
class MyPerson {
public:
	MyPerson() { cout << "Myperson()" << endl; }
	MyPerson(const MyPerson &rhs) 
	{
		this->nAge = rhs.nAge;
		cout << "MyPerson(const MyPerson &)" << endl;
	}

	int getData(void)const { return nAge;}
	void setData(int nData) { nAge = nData; }

private:
	int nAge = 0;
};
int main() {
	MyPerson p1;
	p1.setData(20);
	//MyPerson p2(p1);
	//MyPerson p2=p1;//��������� ȣ��
	MyPerson p2;//�⺻������ȣ��
	p2 = p1;//��������� ȣ��X
	cout<< "Person�� ����" << p2.getData() << endl;
	return 0;
}
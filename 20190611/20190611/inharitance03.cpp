#include <string>
#include <iostream>
using namespace std;

class Person {
	string name;
protected:
	string addr;
};

class Student : Person {
public:
	/*//�ּ��� Ǯ�� ���� �߻� name������ Person���� private�� �����Ǿ� �ֱ� ������
	void setNamer(string name){
	this->name=name;
	}
	*/

	void  setAddr(string addr) {
		this->addr = addr;
	}
	string getAddr() {
		return addr;
	}
};

int main() {
	Student student1;//Student�� �����ڰ� ���⶧���� ��ü������ �⺻�����ڸ� �����Ϸ��� ����� �ش�
	//�Ļ��� ���� ��� ������ ����
	student1.setAddr("����� ���Ǳ� ȣ�Ϸ� 546����");
	cout << student1.getAddr() << endl;
	return 0;
}
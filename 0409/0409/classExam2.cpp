#include <iostream>
using namespace std;

class Student {
private:
	int hakbun;//�����������
	const char*sName;//const �� ������ �ٲ��� ���� 
	��� ��

public://public�̸� �����Ҷ� �տ� public�Ƚ�� �ȴ�
	Student();//�����ڼ���
	void show();//�Լ�����
};

Student::Student() {//������ ����
	hakbun = 1234;
	sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�" << endl;
}

void Student::show() {//�Լ� ����
	cout << " �й��� " << hakbun << endl;
	cout << " �̸��� " << sName << endl;
}

int main() {
	Student student1;//student1��ü ������ ������ �Լ��� ȣ���Ѵ�.//class������� ���� 
	student1.show();
	return 0;

}
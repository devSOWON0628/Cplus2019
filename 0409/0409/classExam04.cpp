#include <iostream>
using namespace std;

class Student {
private:
	int hakbun;//�����������
	const char*sName;//const �� ������ �ٲ��� ���� ��� ��

public://public�̸� �����Ҷ� �տ� public�Ƚ�� �ȴ�
	Student();//�����ڼ���
	Student(int, const char*);
	void show();//�Լ�����
};

Student::Student() {//������ ����
	hakbun = 1234;
	sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�" << endl;
}
Student::Student(int hakbun, const char* sName) {
	this->hakbun = hakbun;
	this->sName = sName;
}
void Student::show() {//�Լ� ����
	cout << " �й��� " << hakbun << endl;
	cout << " �̸��� " << sName << endl;
}



int main() {
	Student student[3] = {//�迭 ���·� ��ü�� ������ �� �ִ�.
		//student[0],student[1],student[2]������ 3���� ��ü�� �������
		Student(),
		Student(4567,"�Ͽ�"),
		Student(8910,"�ƴ�")
	};

	for (int i = 0; i < 3; i++) student[i].show();
	/*Student student1;//student1��ü ������ ������ �Լ��� ȣ���Ѵ�.//class������� ���� 
	Student student2(5678,"������");
	student1.show();
	student2.show();
	*/
	return 0;

}
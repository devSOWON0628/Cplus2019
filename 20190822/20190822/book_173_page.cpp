#include <iostream>
#include <string>
using namespace std;

class Credits;
class Student {
private:
	string name;
	string major;
	string hakbun;
public:
	Student(string name, string major, string hakbun) {
		this->name = name;
		this->major = major;
		this->hakbun = hakbun;
	}
	friend void printGrade(Student, Credits);
	//�Լ��� friend Ű���带 ���ԵǸ� printGrade()�Լ��ȿ��� 
	//StudentŬ�������� private���� ������ ����� ���ٰ���
};
class Credits {
	double grade;
public:
	Credits(double grade) { this->grade = grade; }
	friend void printGrade(Student, Credits);
	//�Լ��� friend Ű���带 ���ԵǸ� printGrade()�Լ��ȿ��� 
	//StudentŬ�������� privated���� ������ ����� ���ٰ���
};
void printGrade(Student a, Credits b) {
	//Student.CreditŬ������ ��������� ���ٰ���
	cout << "�̸� : " << a.name << endl;
	cout << "�а� : " << a.major << endl;
	cout << "�й� : " << a.hakbun << endl;
	cout << "���� : " << b.grade << endl;
}
int main() {
	Student h("HongGilDong", "��ǻ�Ͱ��к�", "20181234");
	Credits g(4.4);
	printGrade(h, g);

	return 0;

}
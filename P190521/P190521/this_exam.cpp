#include <iostream>
using namespace std;
class Student {
private:
	int grade;
	int ban;
public:
	Student() {
		grade = 3;
		ban = 8;
	}
	~Student(){}
	void setGrade(int grade) { this->grade = grade; }
	int getGrade() { return grade; }
	void setBan(int ban) { this->ban = ban; }
	int getBan() { return ban; }
};
int main() {
	Student student;
	cout << "�г�:" << student.getGrade() << "��:" << student.getBan() << endl;
	student.setGrade(2);
	student.setBan(7);
	cout << "�г�:" << student.getGrade() << "��:" << student.getBan() << endl;

	return 0;
}
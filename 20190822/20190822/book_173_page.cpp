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
	//함수에 friend 키워드를 쓰게되면 printGrade()함수안에서 
	//Student클래스에서 private으로 설정된 멤버에 접근가능
};
class Credits {
	double grade;
public:
	Credits(double grade) { this->grade = grade; }
	friend void printGrade(Student, Credits);
	//함수에 friend 키워드를 쓰게되면 printGrade()함수안에서 
	//Student클래스에서 privated으로 설정된 멤버에 접근가능
};
void printGrade(Student a, Credits b) {
	//Student.Credit클래스의 멤버변수에 접근가능
	cout << "이름 : " << a.name << endl;
	cout << "학과 : " << a.major << endl;
	cout << "학번 : " << a.hakbun << endl;
	cout << "학점 : " << b.grade << endl;
}
int main() {
	Student h("HongGilDong", "컴퓨터과학부", "20181234");
	Credits g(4.4);
	printGrade(h, g);

	return 0;

}
#include <iostream>
#include <string>
using namespace std;
class Employee {
protected:
	string name;
	int salary;
public:
	Employee(string theName="", int sa=0);
	string getName()const;
	int computeSalary()const;
};


class Manager :public Employee {
	int bonus;

public:

	Manager(string theName, int sa, int bon) :Employee(theName,sa)
	{
		this->bonus = bon;
	}

	int computeSalary() {
		return salary + bonus;
	}
	void print() {
		cout << "�̸�: " <<getName()<< endl;
		cout << "����: " << Employee::computeSalary() << endl;
		cout << "���ʽ�: " << bonus << endl;
	}
};

Employee::Employee(string theName, int sa) {
	name = theName;
	salary = sa;
}
string Employee::getName()const {
	return name;
}
int Employee::computeSalary()const {
	return salary;
}

int main() {
	Manager obj("�̻��", 500, 100);
	obj.print();
	cout << "��ü �޿�: " << obj.computeSalary() << endl;
	return 0;
}
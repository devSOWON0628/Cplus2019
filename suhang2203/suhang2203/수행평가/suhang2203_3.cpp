#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
	string name;
	int age;
	int salary;

public:
	void setter(string pname, int page, int psalary) {
		name = pname;
		age = page;
		salary = psalary;
	}

	void getter() {
		cout << name << endl;
		cout << age << endl;
		cout << salary<< endl;
	}

	/*Employee(string pname, int page, int psalary) {
		cout << "gg" << endl;
		setter(pname, page, psalary);
	}*/
};



int main() {

	Employee employee1;
	employee1.setter("ÀÌ¹Ì¸²", 29, 4500000);
	cout<<"Employee1:"<<endl;
	employee1.getter();
	return 0;
}



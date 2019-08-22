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
	/*//주석을 풀면 에러 발생 name변수가 Person에서 private로 지정되어 있기 때문에
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
	Student student1;//Student에 생성자가 없기때문에 객체생성때 기본생성자를 컴파일러가 만들어 준다
	//파생과 기초 모두 생성자 생성
	student1.setAddr("서울시 관악구 호암로 546번지");
	cout << student1.getAddr() << endl;
	return 0;
}
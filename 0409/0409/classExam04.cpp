#include <iostream>
using namespace std;

class Student {
private:
	int hakbun;//멤버변수선언
	const char*sName;//const 는 내용을 바꾸지 마라 라는 뜻

public://public이면 정의할때 앞에 public안써두 된다
	Student();//생성자선언
	Student(int, const char*);
	void show();//함수선언
};

Student::Student() {//생성자 정의
	hakbun = 1234;
	sName = "이사랑";
	cout << "학번이 등록되었습니다" << endl;
}
Student::Student(int hakbun, const char* sName) {
	this->hakbun = hakbun;
	this->sName = sName;
}
void Student::show() {//함수 정의
	cout << " 학번은 " << hakbun << endl;
	cout << " 이름은 " << sName << endl;
}



int main() {
	Student student[3] = {//배열 형태로 객체를 생성할 수 있다.
		//student[0],student[1],student[2]형태의 3개의 객체가 만들어짐
		Student(),
		Student(4567,"하와"),
		Student(8910,"아담")
	};

	for (int i = 0; i < 3; i++) student[i].show();
	/*Student student1;//student1객체 생성시 새엉자 함수를 호출한다.//class순서대로 실행 
	Student student2(5678,"마리아");
	student1.show();
	student2.show();
	*/
	return 0;

}
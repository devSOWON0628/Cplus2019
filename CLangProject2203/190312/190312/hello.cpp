//defualt가 C++이다. 확장자 안써도 자동으로 cpp된다
#include <iostream>
//<iostream>은 입력과 출력에 관계되는 라이브러리
using namespace std;// 뒤에 ::쓰면 이거 안써도 된다.

int main() {
	//std::cout << "Hello World" << std::endl;
	int temp ;
	cin >> temp;
	cout << temp << endl;
	//cout << "Hello World" << endl;
	//cout 콘솔로 출력
	//cin 콘솔로 입력
	//endl 줄바꿈이라는 뜻
	//:: = std라는 공간안에 cout이 있다는 뜻
	//:: 이 범위연산자 이다.
	//<<는 이쪽으로 보내라 이뜻임
	return 0;
}
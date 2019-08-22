#include <iostream>
using namespace std;

void jungjuk() {
	static int a = 0;//a의 데이터가 함수가 끝나도 없어지지 않고 계속해서 ++이 된다. 
		`
	cout << "정적변수 a 는 " << a << endl;
	a++;
}
int main() {
	jungjuk();
	jungjuk();
	jungjuk();

	return 0;
}
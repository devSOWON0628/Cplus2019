#include <iostream>
using namespace std;

int square_sum(int *num);

int main() {
	int a = 3;
	cout <<  square_sum(&a) << endl;
	cout << "a 값이 바뀌었다면 9가 출력됩니다 : " << a << endl;
}
int square_sum(int *num) {//num은 a의 주소값을 가지고 있기 때문에 a값을 바꿀 수 있다.
	*num =( *num )* (*num);
	return (*num )+ (*num);
}
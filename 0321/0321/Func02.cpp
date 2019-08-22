#include <iostream>
#include <cstdlib>
using namespace std;

void print(int a, int b);

int main() {
	char str[] = "100";
	int a = 200;
	int b = atoi(str);//atoi()함수는 숫자형태의 문자열을 정수로 변환
	print(a, b);
}
void print(int a, int b) { std::cout << a + b << std::endl; }


#include <iostream>
using namespace std;

class CDelegration {
public:
	int a, b, c, d;

	CDelegration(int a)
	{
		printf("CDelegration 1\n");
		this->a = a;
	}
	CDelegration(int a, int b) : CDelegration(a)//8번라인
	{
		printf("CDelegration 2\n");
		this->b = b;
	}
	CDelegration(int a, int b, int c) : CDelegration(a, b)//13번 라인
		printf("CDelegration 3\n");
		this->c = c;
	}
	CDelegration(int a, int b, int c, int d) : CDelegration(a, b, c)//18번 라인의 생성자를 호출
	{//이 생성자에 abc값을 위임해준 것
		printf("CDelegration 4\n");
		this->d = d;
	}
};
int main()
{
	CDelegration c(1, 2, 3, 4);//23번 라인의 생성자를 호출
	return 0;
}
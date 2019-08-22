#include <iostream>
using namespace std;
int main() {
	int *ptr2 = new int[4];//heap영역에 배열로 할당
	for (int i = 0; i < 4; i++) 
	{
		ptr2[i] = 10 + i;
		cout << ptr2[i] << endl;
	}
	delete[] ptr2;//ptr1이 가리키는 heap영역의 메모리 삭제//메모리 전체가 삭제된다
	return 0;
}
#include <iostream>
using namespace std;
int main() {
	int *ptr2 = new int[4];//heap������ �迭�� �Ҵ�
	for (int i = 0; i < 4; i++) 
	{
		ptr2[i] = 10 + i;
		cout << ptr2[i] << endl;
	}
	delete[] ptr2;//ptr1�� ����Ű�� heap������ �޸� ����//�޸� ��ü�� �����ȴ�
	return 0;
}
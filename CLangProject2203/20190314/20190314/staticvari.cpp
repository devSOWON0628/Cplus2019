#include <iostream>
using namespace std;

void jungjuk() {
	static int a = 0;//a�� �����Ͱ� �Լ��� ������ �������� �ʰ� ����ؼ� ++�� �ȴ�. 
		`
	cout << "�������� a �� " << a << endl;
	a++;
}
int main() {
	jungjuk();
	jungjuk();
	jungjuk();

	return 0;
}
#include <iostream>
#include<memory>
using namespace std;
class CMYData {
public:
	CMYData() { cout << "CMYData" << endl; }
	~CMYData() { cout << "~CMYData" << endl; }
};

int main() {
	cout << "****Begin****" << endl;
	{
		auto_ptr<CMYData> ptrTest(new CMYData[3]);//������ 3���� 3���������ϴµ� �ѹ��� �������ϱ� ����
	}
	cout << "****end****" << endl;
}
//�����߻�
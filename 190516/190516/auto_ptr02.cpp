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
		auto_ptr<CMYData> ptrTest(new CMYData[3]);//생성자 3개라 3번지워야하는데 한번만 지워지니까 에러
	}
	cout << "****end****" << endl;
}
//에러발생
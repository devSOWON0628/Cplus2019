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
		auto_ptr<CMYData> ptrTest(new CMYData);//ptrTestº¯¼ö
	}
	cout << "****end****" << endl;
}

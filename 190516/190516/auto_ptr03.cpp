#include <iostream>
#include<memory>
using namespace std;
class CMYData {
public:
	CMYData() { cout << "CMYData" << endl; }
	~CMYData() { cout << "~CMYData" << endl; }
	void TestFunc(){ cout << "CMYData::TestFunc()" << endl; }
};

int main() {
	auto_ptr<CMYData> ptrTest(new CMYData);
	auto_ptr<CMYData>ptrNew;
	cout << "0x" << ptrTest.get() << endl;
	ptrTest->TestFunc();
	ptrNew->ptrTest;
	ptrNew->TestFunc();
	cout << "0x" << ptrTest.get() << endl;
	ptrTest->TestFunc();
	return 0;
	
}

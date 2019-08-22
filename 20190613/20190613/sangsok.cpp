#include <iostream>
using namespace std;
class JumsuOne {
public:
	void FuncOneShow() {
		cout << "JumsuOne" << endl;
	}
};
class RankTwo
{
public:
	void FuncTwoShow() {
		cout << "RankTwo" << endl;
	}
};

class SucgjukDerived : protected JumsuOne, protected RankTwo
{
public:
	void SungJukFuncShow() {
		FuncOneShow();
		FuncTwoShow();

	}
	
};

int main() {
	SucgjukDerived sdr;
	sdr.SungJukFuncShow();
	return 0;
}
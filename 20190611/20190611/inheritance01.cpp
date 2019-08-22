#include <iostream>
using namespace std;

class BaseData {
public: //누구나 접근 가능
	BaseData() { cout << "BaseData()" << endl; }
	int GetData() { return m_nData; }
	void setData(int nParam) { m_nData = nParam; }

protected: //파생 클래스만 접근 가능
	void PrintData() { cout << "BaseData::PrintData" << "   "; }

private: //외부에서 접근 불가능
	int m_nData = 0;
};


class DeriveredData : public BaseData{
public:
	DeriveredData(){ cout << "DeriverdData()" << "   "; }
	//파생클래스의 생성자를 실행하기 전에 부모(기초)클래스의 기본생성자가 먼저 실행된다
	void TestFunc() {
		PrintData();
		setData(5);
		cout << BaseData::GetData() << endl;
	}
};

	void main() {
		DeriveredData data;
		data.setData(10);
		cout << data.GetData() << endl;
		data.TestFunc();
	}

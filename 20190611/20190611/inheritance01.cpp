#include <iostream>
using namespace std;

class BaseData {
public: //������ ���� ����
	BaseData() { cout << "BaseData()" << endl; }
	int GetData() { return m_nData; }
	void setData(int nParam) { m_nData = nParam; }

protected: //�Ļ� Ŭ������ ���� ����
	void PrintData() { cout << "BaseData::PrintData" << "   "; }

private: //�ܺο��� ���� �Ұ���
	int m_nData = 0;
};


class DeriveredData : public BaseData{
public:
	DeriveredData(){ cout << "DeriverdData()" << "   "; }
	//�Ļ�Ŭ������ �����ڸ� �����ϱ� ���� �θ�(����)Ŭ������ �⺻�����ڰ� ���� ����ȴ�
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

#include <iostream>
using namespace std;
//!!!!!!!!!!!!!!!!!!!!!중요함
class CRefTest {
private:
	int &m_nData;//참조형 매개변수

public:
	CRefTest(int rParam) : m_nData(rParam) {//rParam의 데이터를 m_nData에 저장
		cout << "생성자"<<m_nData << endl;

	}; 
	int GetData(void) { return m_nData; }

};
//rParam은 매개변수라 함수밖을 벗어나면 값이 사라지는데, rParam이 원본이라 m_nData를 return 한다해도 쓰레기값이 나온다.
int main() {

	int a = 10;
	CRefTest t(a);

	cout << t.GetData() << endl;
	a = 20;
	cout << t.GetData() << endl;

	return 0;
}
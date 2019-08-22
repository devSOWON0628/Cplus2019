#include <iostream>
using	 namespace std;


class BoxNum {
private:
	int num1, num2;

public:
	BoxNum(int num1, int num2):num1(num1),num2(num2){}
	void ShowNum() {
		cout << "num1:" << num1 << " num2:" << num2 << endl;

	}

	BoxNum operator+(BoxNum &ref) {
		return BoxNum(num1 + ref.num1, num2 + ref.num2);
		//num1과num2는 nb1의 멤버변수이다.
		//ref.num1과 ref.num2는 nb2객체의 멤버변수이다.
	}
};

int main() {
	BoxNum nb1(10, 20);
	BoxNum nb2(3, 4);
	//BoxNum result = nb1+nb2;
	BoxNum result = nb1.operator+(nb2);
	//nb1객체에서 operator+함수를 호출한다.
	// 매개변수 nb2는 ref가 참조형으로 받는다
	//값을 리턴받아서 result에게 넘겨줄때 기본적인 복사생성자가 실행이 되어서
	//BoxNum객체의 값을 result가 받는다 멤버중에서 포인터 변수가 있으면 주소값이 복사한다

	nb1.ShowNum();
	nb2.ShowNum();
	result.ShowNum();
	return 0;
}
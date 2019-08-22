#include<iostream>
using namespace std;
class Ride {
public:
	virtual void rideFunc() {
		cout << "타다" << endl;
	}
};
class BusRide :public Ride {
public:
	int age;
	void rideFunc() {
		cout << "버스를 타다" << endl;
	}
};
#include<iostream>
using namespace std;
class Ride {
public:
	virtual void rideFunc() {
		cout << "타다" << endl;
	}
};
class BusRide :public Ride {
public:
	int age;
	void rideFunc() {
		cout << "버스를 타다" << endl;
	}
};

class AirRide : public Ride {
public:
	int ton;
	void rideFunc() {
		cout << "비행기를 타다" << endl;
	}
};

int main() {
	Ride * r1 = new BusRide();// 형변환
	r1->rideFunc();//VusRide클래스에 있는 rideFunc()함수를 호출한다
	//만약에 BusRide클래스에 rideFunc()함수가 정의 되어 있지 않으면
	//Ride클래스에 있는 있는 rideFunc()함수를 호출한다
	//r1->age = 100;
	Ride* r2 = new AirRide();//형변환
	r2->rideFunc();//AirRide클래스에 있는 rideFunc()함수를 호출한다.
	return 0;
}

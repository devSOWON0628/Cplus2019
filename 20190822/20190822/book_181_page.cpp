#include<iostream>
using namespace std;
class Ride {
public:
	virtual void rideFunc() {
		cout << "Ÿ��" << endl;
	}
	virtual void rideFunc2() {
		cout << "����" << endl;
	}
};
class BusRide :public Ride {
public:
	int age;
	void rideFunc() {
		cout << "������ Ÿ��" << endl;
	}
};
class AirRide :public Ride {
public:
	int ton;
	void rideFund(){
		cout << "����⸦ Ÿ��" << endl;
	}
};
int main() {
	Ride * r1 = new BusRide();// ����ȯ
	r1->rideFunc();//VusRideŬ������ �ִ� rideFunc()�Լ��� ȣ���Ѵ�
	//���࿡ BusRideŬ������ rideFunc()�Լ��� ���� �Ǿ� ���� ������
	//RideŬ������ �ִ� �ִ� rideFunc()�Լ��� ȣ���Ѵ�
	//r1->age = 100;
	Ride* r2 = new AirRide();//����ȯ
	r2->rideFunc();//AirRideŬ������ �ִ� rideFunc()�Լ��� ȣ���Ѵ�.
	return 0;
}
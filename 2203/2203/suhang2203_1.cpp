#include <iostream>
#include <string>
using namespace std;

class BankAccount {
	string number;
	int balance;

public:
	void init(string, int);
	void deposit(int amont);
	void withdraw(int amont);
	int getBalance() const;
	void setBalance(int balance);
	const string& getNumber() const;
	void setNumber(const string &number);
};
void BankAccount::init(string pnumber, int pbal) {
	number = pnumber;
	balance = pbal;
}
void BankAccount::deposit(int amont) {
	balance += amont;
}
void BankAccount::withdraw(int amont) {
	if (amont > balance)cout << "잔액이 부족함" << endl;
	else balance -= amont;
}
int BankAccount::getBalance()const {
	return balance;
}

void BankAccount::setBalance(int balance) {
	this->balance = balance;
}

const string& BankAccount::getNumber() const {
	return number;
}

void BankAccount::setNumber(const string &number) {
	this->number = number;
}


int main() {
	BankAccount obj;
	obj.init("010-1111-2222", 1000000);
	cout << "현재잔액:" << obj.getBalance() << endl;
	obj.deposit(3000000);
	cout << "3000000원 입금 후 현재 잔액: " << obj.getBalance() << endl;
	obj.withdraw(2000000);
	cout << "2000000원 출금 후 현재 잔액: " << obj.getBalance() << endl;
	obj.withdraw(5000000);
	return 0;
}

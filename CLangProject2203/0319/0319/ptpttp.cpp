#include <iostream>
using namespace std;

int main() {
	int arr[4] = { 1,2,3,4 };
	int sum=0;
	for (int i = 0; i < 4; i++) {
		sum += arr[i];
		cout << arr[i] << endl;
		}

	cout << "�迭�� �� "<< sum << endl;
	cout << "�迭�� ��� "<<sum / 4 << endl;
	return 0;
}
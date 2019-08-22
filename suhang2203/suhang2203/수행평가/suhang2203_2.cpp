#include <iostream>
#include <string>
using namespace std;

int main() {
	string a[5];
	int aa = 0;

	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	
		if (i >=1) {
			if (a[i].length() > a[i - 1].length())
				aa = i;
		}
}



cout << a[aa] << endl;

return 0;
}
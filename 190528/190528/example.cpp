#include <iostream>
using	 namespace std;

#include <iostream>
using	 namespace std;

class Student {
private:
	int nb1;

public:
	Student(int nb1) :nb1(nb1) {}
	void ShowInfo() {
		cout << "¼ýÀÚ" << nb1 << endl;
	}
	Student &operator+=(Student &ref) {
		nb1 = ref.nb1;
		return *this;
	}

};
int main() {
	Student st1(10);
	Student st2(20);
	Student st3(30);
	st1.operator+=(st2);
	//st1 += st2;
	st1.ShowInfo();
	st2.ShowInfo();
	return 0;
}
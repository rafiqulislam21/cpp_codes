
#include <iostream>
using namespace std;

int main() {
	int sum2 = 0;
	for (int i = 0; i <= 3; ++i) {
		int sum1 = 0;
		for (int j = 0; j <= i; ++j) {
			cout << j << "+";
			sum1 = sum1 + j;
		//cout <<"j:" <<j<<endl;
		}
		cout << "\b" << "=";
		cout << sum1 << endl;
		sum2 = sum2 + sum1;
	}
	cout << "Total sum of elements: " << sum2 << endl;

	return 0;
}

/*
#include <iostream>
using namespace std;

int main() {
	int a = 0;
	int b = 1;
	int i = 0;
	int sum = 0;
	while (i < 10) {
		if (i % 2 == 1) {
			cout << a << " ";
			sum = sum + a;
		}
		int result = a + b;
		a = b;
		b = result;
		i = i + 1;
	}
	cout << endl;
	cout << "Sum of odd fibonacci numbers: " << sum << endl;
	return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main() {
	int a = 2;
	int b = 20;
	int sum = 0;
	for (int i = a; i <= b; ++i) {
		int isPrime = 1;
		int num = i;
		for (int j = 2; j < num; ++j) {
			if (num % j == 0) {
				isPrime = 0;
			}
		}
		if (isPrime == 0) {
			cout << i << "+";
			sum = sum + i;
		}
	}
	cout << "\b" << "=" << sum << endl;
	return 0;
}

/*
#include <iostream>
using namespace std;

int main() {
for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5 - i; ++j) {
			cout << "+" << " ";
		}
		cout <<"/";
		for (int j = i; j>0; --j) {
			cout << "-" <<" ";
		}
		cout << endl;
	}
	return 0;
}
*/


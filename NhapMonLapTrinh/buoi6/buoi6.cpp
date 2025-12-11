#include <iostream>
using namespace std;


int main()
{
	for (int i = 1; i <= 5; i++) {
		cout << "Hello: " << i << endl;
	}

	int j = 1;
	while (j <= 5) {
		cout << "While Hello: " << j << endl;
		j++;
	}

	int k = 1;
	do {
		cout << "Do..While Hello: " << k << endl;
		k++;
	} while (k <= 5);
}

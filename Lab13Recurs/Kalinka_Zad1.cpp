#include <iostream>

using namespace std;

long gcd(long x, long y) {
	long r;
	if (x < y) {
		r = y;
		y = x;
		x = r;
	}
	while (y) {
		r = x % y;
		x = y;
		y = r;
	}
	return (x);
}

void scdr(long *p1, long *p2) {
	long t;
	t = gcd(*p1, *p2);
	*p1/=t;
	*p2/=t;
}

int main () {
	int n;
	cout << "Введите количество членов ряда: ";
	cin >> n;
	long s1 = 0;
	long s2 = 1;
	for (int k = 0; k <= n; k++) {
		s1 = s1 * k + s2;
		s2 *= k;
		scdr(&s1, &s2);
	}
	cout << "Сумма " << n << " членов ряда: " << s1 << " / " << s2 << endl;
	return 0;
}

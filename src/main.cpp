#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if (b <= c || d <= a) {
		cout << (b - a) + (d - c);
		return 0;
	}

	auto l = a;
	if (c < a) {
		l = c;
	}

	auto r = b;
	if (b < d) {
		r = d;
	}

	cout << r - l;

	return 0;
}
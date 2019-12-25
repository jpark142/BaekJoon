#include <iostream>
#include <cstring>
using namespace std;

int m;
int site[31][31];

int calculate(int w, int e) {
	if (site[w][e] != 0)
		return site[w][e];

	int a = w - 1;
	int b = e;
	while (a < b) {
		b--;
		site[w][e] += calculate(a, b);
	}
	return site[w][e];
}

int main() {

	cin >> m;
	memset(site, 0, sizeof(site));
	
	for (int i = 1; i <= 31; ++i) {
		site[1][i] = i;
	}

	for (int i = 0; i < m; ++i) {
		int west, east;
		cin >> west >> east;
		cout << calculate(west, east) << endl;
	}
	return 0;



}
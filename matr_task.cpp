#include <iostream>


int main() {
	double * parr = new double[16]{1, 2, 3, 4, 0, 3, 4, 5, 4, 5, 6, 7, 0, 0, 0, 1};
	int n = 4, m = 4;
	double koef = 0;
	for (int i = 0; i < n; ++i) {
		for (int i2 = i + 1; i2 < n; ++i2) {
			koef = parr[n * i2 + i] / parr[n * i + i];
			for (int j = 0; j < m; ++j) {
				parr[i2 * n + j] = parr[i2 * n + j] -  koef * parr[i * n + j];
			}
		}	
	}
	double result = 1.0;
	for (int i = 0; i < n; ++i) {
		result = result * parr[i * n + i];
	}
	std::cout << result << std::endl; 
	return 0;
}

// 斐波那契动态规划.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>


long long  number[100];
long long  getStep(int n) {
	if (number[n]) {
		return number[n];
	}
	else if (n == 1 || n == 2) {
		number[n] = n;
		return number[n];
	}
	else {
		number[n] = getStep(n - 1) + getStep(n - 2);
		return number[n];
	}
}

int main() {
	std::cout << getStep(20) << std::endl;
	return 0;
}
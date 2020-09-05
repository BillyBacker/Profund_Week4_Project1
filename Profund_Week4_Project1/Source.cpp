#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>

using namespace std;

int main() {
	unsigned long long In;
	vector<char> Out;
	char hex[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E' , 'F'};
	printf("Enter Decimal number : ");
	scanf("%lld", &In);
	printf("Hexadecimal number : ");
	if (In == 0 || In == 1) {
		Out.push_back(hex[In]);
	}
	while(In > 0) {
		Out.push_back(hex[In % 16]);
		In /= 16;
	}
	for (int i = 0; i < Out.size(); i++) {
		printf("%c", Out[Out.size()-1-i]);
	}
	return 0;
}
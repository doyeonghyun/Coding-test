#include <iostream>
using namespace std;
int a, b;

int main() {
	cin >> a >> b;
	cout.precision(10); //출력 소수점 이하 자릿수를 10자리로 설정
	cout << (double)a / (double)b;
	return 0;
}

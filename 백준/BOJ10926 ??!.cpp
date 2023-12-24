#include <iostream>
using namespace std;

int main() {
	string str;
	cin >> str;
	cout << str + "??!";
	return 0;
}

/*
Main.cc:7:24: warning: trigraph ??! ignored, use -trigraphs to enable [-Wtrigraphs]
    7 |         cout << str + "??!";
      |                        

"??!"는 C++의 트리그래프로 인식되고 있다.
트리그래프는 이중 기호로 표시되는 문자 시퀀스다.
'-trigraphs' 플래그를 사용하여 활성화할 수 있다.
위 경고는 코드에 큰 지장이 없는 메시지라 무시해도 된다.
*/

#include <iostream>//C++ stdio
#include <Windows.h>//windows GetAsysnKeyState

//Á¤ÀÇ
#define CLICK_EVENT (-32767)

void keyLog(char k) {
	
}

int main() {
	for (char k = 0; k < 255; k++)
		if (GetAsyncKeyState(k) == CLICK_EVENT) keyLog(k);
}
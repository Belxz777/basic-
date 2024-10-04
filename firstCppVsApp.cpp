#include <iostream>
#include <conio.h>
#include <windows.h>


using namespace std;
int main()
{

    string mult;


    //механика прослушивания клавиш
    bool isListenning = true;
    while (isListenning) {
        if (GetKeyState(VK_SHIFT) & 0x8000) {
            cout << "ENTER PRESSED";
            isListenning = false;
        }
    }
    constexpr size_t  size = 10;
    int digits[size]{ 0 };
    for (int i = 0; i <= size; ++i) {

    cin >>
    }
    return 0;
}


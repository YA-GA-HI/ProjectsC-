#include <iostream>
#include <windows.h>
int main()
{
    while (true)
    {
    ShellExecute(NULL, "open", "notepad.exe", NULL, NULL, SW_SHOWDEFAULT);
    ShellExecute(NULL, "open", "notepad.exe", NULL, NULL, SW_SHOWDEFAULT);
    }
}
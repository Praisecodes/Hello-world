#include <windows.h>

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE PrevhInst, LPSTR argv, int ncmdshow)
{
    MessageBox(NULL, "Are you sure you want to quit?", "Warning", MB_OK);
    return 0;
}

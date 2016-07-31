#if defined(WIN32) || defined(_WIN32) || defined(__WIN32)
#include <Windows.h>
#endif

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32)
int APIENTRY WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR lpComand, int nShow)
{
	HWND hWnd = GetConsoleWindow(); //MER  [Sep 20, 2013] This hides the window
	if (IsWindow(hWnd)) ShowWindow(hWnd, SW_HIDE);
#else
int main(int, char**) {
#endif

	return 0;
}

#include <Windows.h>

int WINAPI wWinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPWSTR    lpCmdLine,
	int       nShowCmd
)
{
	ShellExecuteW(
		NULL,
		L"open",
		L"calculator:",
		NULL,
		NULL,
		nShowCmd
	);
	return 0;
}
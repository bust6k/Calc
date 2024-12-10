#pragma comment(linker,"\"/manifestdependency:type='win32' \
name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")

#define _CRT_SECURE_NO_WARNINGS
#include<windows.h>
#include "resource.h"
#include<Strsafe.h>
#include<tchar.h>
#include<intsafe.h>
#include< stdlib.h>
BOOL x;
BOOL x1;
BOOL x2;
BOOL x3;
BOOL x4;
BOOL x5;
BOOL x6;
BOOL x7;
BOOL x8;
BOOL x9;
BOOL x10;
BOOL x11;
BOOL x12;
BOOL x13;
BOOL x14;
BOOL x15;
BOOL x16;

TCHAR hah[1024];

LRESULT WindowHan(HWND   h, UINT msg, WPARAM wparam, LPARAM lparam) {



	static HWND button0 = NULL;
	static HWND button1 = NULL;
	static HWND button2 = NULL;
	static HWND button3 = NULL;
	static HWND button4 = NULL;
	static HWND button5 = NULL;
	static HWND button6 = NULL;
	static HWND button7 = NULL;
	static HWND button8 = NULL;
	static HWND button9 = NULL;
	static HWND button10 = NULL;

	static HWND button11 = NULL;
	static HWND button12 = NULL;
	static HWND button13 = NULL;
	static HWND button14 = NULL;
	static HWND button15 = NULL;
	static HWND button16 = NULL;
	switch (msg) {
	case WM_DESTROY:
	{
		PostQuitMessage(0);

		return 0;
	case WM_CREATE:
		button0 = CreateWindow(L"BUTTON", L"0", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 0, 346, 60, 80, h, reinterpret_cast<HMENU>(40), 0, 0);
		button1 = CreateWindow(L"BUTTON", L"1", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 60, 346, 60, 80, h, reinterpret_cast<HMENU>(50), 0, 0);
		button2 = CreateWindow(L"BUTTON", L"+", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 240, 266, 50, 80, h, reinterpret_cast<HMENU>(60), 0, 0);
		button3 = CreateWindow(L"BUTTON", L"2", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 120, 346, 60, 80, h, reinterpret_cast<HMENU>(5683), 0, 0);
		button4 = CreateWindow(L"BUTTON", L"3", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 180, 346, 60, 80, h, reinterpret_cast<HMENU>(80), 0, 0);


		button5 = CreateWindow(L"BUTTON", L"4", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 0, 266, 60, 80, h, reinterpret_cast<HMENU>(90), 0, 0);
		button6 = CreateWindow(L"BUTTON", L"5", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 60, 266, 60, 80, h, reinterpret_cast<HMENU>(100), 0, 0);
		button7 = CreateWindow(L"BUTTON", L"6", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 120, 266, 60, 80, h, reinterpret_cast<HMENU>(110), 0, 0);
		button8 = CreateWindow(L"BUTTON", L"7", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 180, 266, 60, 80, h, reinterpret_cast<HMENU>(120), 0, 0);
		button9 = CreateWindow(L"BUTTON", L"8", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 470, 100, 20, 40, h, reinterpret_cast<HMENU>(130), 0, 0);
		button10 = CreateWindow(L"BUTTON", L"9", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 500, 100, 20, 40, h, reinterpret_cast<HMENU>(140), 0, 0);


		button11 = CreateWindow(L"BUTTON", L"=", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 240, 346, 50, 80, h, reinterpret_cast<HMENU>(150), 0, 0);
		button6 = CreateWindow(L"BUTTON", L"-", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 530, 250, 20, 40, h, reinterpret_cast<HMENU>(160), 0, 0);
		button7 = CreateWindow(L"BUTTON", L"/", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 530, 200, 20, 40, h, reinterpret_cast<HMENU>(170), 0, 0);
		button8 = CreateWindow(L"BUTTON", L"*", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 530, 150, 20, 40, h, reinterpret_cast<HMENU>(180), 0, 0);
		button9 = CreateWindow(L"BUTTON", L"<", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 530, 100, 20, 40, h, reinterpret_cast<HMENU>(190), 0, 0);
		button10 = CreateWindow(L"BUTTON", L"c", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 530, 50, 20, 40, h, reinterpret_cast<HMENU>(200), 0, 0);

		return 0;
	case WM_COMMAND:
		if (LOWORD(wparam) == 40) {
			x = InvalidateRect(h, NULL, TRUE);

			if (x == 1) {
				StringCchCat(hah, 1024, L"0");

			}

		}
		else if (LOWORD(wparam) == 50) {
			x1 = InvalidateRect(h, NULL, TRUE);

			if (x1 == 1) {
				StringCchCat(hah, 1024, L"1");

			}


		}
		else if (LOWORD(wparam) == 60) {
			x15 = InvalidateRect(h, NULL, TRUE);

			if (x15 == 1) {
				StringCchCat(hah, 1024, L"+");

			}
		}
		else if (LOWORD(wparam) == 5683) {
			x2 = InvalidateRect(h, NULL, TRUE);

			if (x2 == 1) {
				StringCchCat(hah, 1024, L"2");

			}

		}
		else if (LOWORD(wparam) == 80) {
			x3 = InvalidateRect(h, NULL, TRUE);

			if (x3 == 1) {
				StringCchCat(hah, 1024, L"3");

			}
		}


		else if (LOWORD(wparam) == 90) {
			x4 = InvalidateRect(h, NULL, TRUE);

			if (x4 == 1) {
				StringCchCat(hah, 1024, L"4");

			}
		}
		else if (LOWORD(wparam) == 100) {
			x5 = InvalidateRect(h, NULL, TRUE);

			if (x5 == 1) {
				StringCchCat(hah, 1024, L"5");

			}
		}
		else if (LOWORD(wparam) == 110) {
			x6 = InvalidateRect(h, NULL, TRUE);

			if (x6 == 1) {
				StringCchCat(hah, 1024, L"6");

			}
		}
		else if (LOWORD(wparam) == 120) {
			x7 = InvalidateRect(h, NULL, TRUE);

			if (x7 == 1) {
				StringCchCat(hah, 1024, L"7");

			}

		}
		else if (LOWORD(wparam) == 130) {
			x8 = InvalidateRect(h, NULL, TRUE);

			if (x8 == 1) {
				StringCchCat(hah, 1024, L"8");

			}

		}
		else if (LOWORD(wparam) == 140) {
			x9 = InvalidateRect(h, NULL, TRUE);

			if (x9 == 1) {
				StringCchCat(hah, 1024, L"9");

			}

		}
		else if (LOWORD(wparam) == 150) {
			x16 = InvalidateRect(h, NULL, TRUE);
			if (x16 == 1) {
				int result = 0; // Результат вычислении
				int temp = 0;   // Временная переменная для хранения текущего числа
				wchar_t operation = L'+'; // Начинаем с операции сложения

				for (size_t i = 0; i < wcslen(hah); i++) {
					if (iswdigit(hah[i])) {
						temp = temp * 10 + (hah[i] - L'0'); // Собираем число
					}
					else {
						// Когда встречаем операцию
						if (operation == L'+') {
							result += temp;
						}
						else if (operation == L'-') {
							result -= temp;
						}
						else if (operation == L'*') {
							result *= temp;
						}
						else if (operation == L'/') {
							// Поскольку деление на ноль невозможно, нужно оставить эту проверку
							if (temp != 0) {
								result /= temp;
							}
						}
						operation = hah[i]; // Обновляем операцию
						temp = 0; // Сбрасываем временное число
					}
				}
				// Не забудьте добавить последнее число
				if (operation == L'+') {
					result += temp;
				}
				else if (operation == L'-') {
					result -= temp;
				}
				else if (operation == L'*') {
					result *= temp;
				}
				else if (operation == L'/') {
					if (temp != 0) {
						result /= temp;
					}
				}

				// Преобразуем результат в строку и сохраняем в hah
				wchar_t resultString[1024];
				_itow(result, resultString, 10); // Преобразуемчисло в строку
				wcscpy_s(hah, 1024, resultString); // Копируем строку результата в массив hah
			}
		}
		else if (LOWORD(wparam) == 160) {
			x14 = InvalidateRect(h, NULL, TRUE);

			if (x14 == 1) {
				StringCchCat(hah, 1024, L"-");

			}
		}
		else if (LOWORD(wparam) == 170) {
			x13 = InvalidateRect(h, NULL, TRUE);

			if (x13 == 1) {
				StringCchCat(hah, 1024, L"/");

			}
		}
		else if (LOWORD(wparam) == 180) {
			x12 = InvalidateRect(h, NULL, TRUE);

			if (x12 == 1) {
				StringCchCat(hah, 1024, L"*");

			}
		}
		else if (LOWORD(wparam) == 190) {
			x11 = InvalidateRect(h, NULL, TRUE);
			if (x11 == 1) {
				auto slen = wcslen(hah);
				hah[slen - 1] = 0;
			}
		}
		else if (LOWORD(wparam) == 200) {
			x10 = InvalidateRect(h, NULL, TRUE);
			if (x10 == 1) {
				for (int i = 0; i < wcslen(hah); i++) {
					hah[i] = 0;
				}
			}
		}

		return 0;
	case WM_PAINT:
	{
		// Получаем контекст устройства для рисования
		PAINTSTRUCT ps;

		if (x == 1 or x1 == 1 or x2 == 1 or x3 == 1 or x4 == 1 or x5 == 1 or x6 == 1 or x7 == 1 or x == 8 or x9 == 1 or x10 == 1 or x11 == 1 or x12 == 1 or x13 == 1 or x14 == 1 or x15 == 1) {
			HDC hdc = BeginPaint(h, &ps);
			SetTextColor(hdc, RGB(28, 28, 28));  // Устанавливаем цвет текста
			TextOut(hdc, 480, 79, hah, wcslen(hah));  // Выводим текст "0". Указываем длину как 1 символ.

			EndPaint(h, &ps);  // Завершаем рисование
		}
		return 0;
	}

	default:
		return DefWindowProc(h, msg, wparam, lparam);
	}
	}


}
int WINAPI  WinMain(HINSTANCE hinstance, HINSTANCE prevhinstance, LPSTR pcmd, int cCmdshow) {
	MSG msg{};
	HWND hwnd;
	WNDCLASSEX wc{ sizeof(WNDCLASSEX) };
	wc.cbWndExtra = 0;
	wc.cbClsExtra = 0;
	wc.hCursor = LoadCursor(0, IDC_ARROW);
	wc.hIcon = LoadIcon(hinstance, IDI_APPLICATION);
	wc.hIconSm = LoadIcon(hinstance, IDI_APPLICATION);
	wc.lpszClassName = L"MyApp";
	wc.lpszMenuName = 0;
	wc.hInstance = hinstance;
	wc.hbrBackground = reinterpret_cast<HBRUSH>(GetStockObject(WHITE_BRUSH));
	wc.lpfnWndProc = WindowHan;
	if (!RegisterClassEx(&wc)) {
		return EXIT_FAILURE;
	}
	hwnd = CreateWindow(wc.lpszClassName, L"калькулятор", WS_OVERLAPPEDWINDOW | WS_VISIBLE, 10, 0, 300, 464, NULL, NULL, wc.hInstance, NULL);
	if (hwnd == INVALID_HANDLE_VALUE) {
		return 1;
	}
	ShowWindow(hwnd, cCmdshow);
	UpdateWindow(hwnd);

	while (GetMessage(&msg, NULL, 0, 0)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}


	return 0;
}
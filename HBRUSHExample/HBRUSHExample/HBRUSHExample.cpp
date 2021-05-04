#include <Windows.h>

int main() //Точка входа в нашу программу
{
	HDC hdc = GetDC(0); //Получаем HDC нашего экрана
	int x = GetSystemMetrics(SM_CXSCREEN); //Получаем X координату нашего экрана
	int y = GetSystemMetrics(SM_CYSCREEN); //Получаем Y координату нашего экрана
	while (true) //Наш основной цикл
	{
		//CODE IS BREAKED
	}
}

﻿#include <Windows.h>

int main() //Точка входа в нашу программу
{
	HDC hdc = GetDC(0); //Получаем HDC нашего экрана
	int x = GetSystemMetrics(SM_CXSCREEN); //Получаем X координату нашего экрана
	int y = GetSystemMetrics(SM_CYSCREEN); //Получаем Y координату нашего экрана
	while (true) //Наш основной цикл
	{
		int r1 = rand() % x; //Получаем рандомную точку из нашей Х
		int r2 = rand() % y; //Получаем рандомную точку из нашей Y
		HBRUSH hbrush = CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255)); //В скобках RGB мы должны указать наш цвет в формате RGB (3 числа) Сейчас я вам покажу на примере какого-то цвета
		SelectObject(hdc, hbrush); //Выбираем куда мы будем рисовать
		StretchBlt(hdc/*Наш HDC*/, 0, 0, x/*Наша X координата */, r1, hdc, r1, r2, 1, 1, /*Тут мы будем писать нашу функию. HBRUSH Не работает с некоторыми фунциями*/ /*Для примера я возьму функцию PATINVERT*/ PATINVERT); //Я покажу на примере функции StretchBlt
		//Давайте проверим
		//Как мы видим, мы использовали цвет DeepPink, тоесть розовый.
		//Мы увидели розовый цвет , но мы использовали функцию PATINVERT, тоесть мы инвертировали наш цвет
		//Если бы я взял синий цвет, он был бы жётлым
		//Для таких случаев существует функция PATCOPY
		Sleep(100); //Задержка, что бы экран не так часто мерцал
		//Мы увидели наш розовый абсолютно не прозрачный, как этого не было с функцией PATINVERT
		//Давайте мы сделаем не розовым, а всеми цветами от минимального (0) до максимального (255) в рандомном порядке
		//Смотрим результат
		//Совсем забыл, что мы используем функцию PATCOPY, сейчас я вам покажу как это выглядит с PATINVERT
		//Также я хочу вам показать интересную функцию MERGECOPY
		//Если это использовать не на весь экран , а как в глитче, рандомную  точку из y экрана, будет очень похоже на глитчи из вируса y.exe (от Leurak)
		//Если вы хоть немного понимаете С++, то вы сможете это сделать, и понять о чём я
		//На этом видео окончено, я надеюсь вам оно понравилось
		//Код из этого видео будет в описании видео
	}
}
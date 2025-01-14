#define _CRT_SECURE_NO_WARNINGS
#include<easyx.h>
#include<string>
#include<iostream>
#include"background.h"
#include"putimage_alpha.h"

void Background::load_background()
{
	loadimage(&img_background_1, L"./image_source/background/background/background_layer_1.png");
	loadimage(&img_background_2, L"./image_source/background/background/background_layer_2.png");
	loadimage(&img_background_3, L"./image_source/background/background/background_layer_3.png");
}

void Background::put_background()
{
	Putimage_alpha::putimage_alpha(0, 0, &img_background_1);
	Putimage_alpha::putimage_alpha(0, 0, &img_background_2);
	Putimage_alpha::putimage_alpha(0, 0, &img_background_3);
}
#pragma once
#include<easyx.h>
#include<string>
#include<graphics.h>
#include<windows.h>
#include<iostream>

class Background {
public:
	IMAGE img_background_1;
	IMAGE img_background_2;
	IMAGE img_background_3;

	void load_background();
	void put_background();
};

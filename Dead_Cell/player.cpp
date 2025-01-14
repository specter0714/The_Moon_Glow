#include<easyx.h>
#include<vector>
#include<string>
#include"player.h"
#include"putimage_alpha.h"

Player::Player(int IDLE, int RUN, int J_UP, int J_DOWN, int LAND, int ATK_1, int ATK_2, int TAKE_HIT, int DEATH)
{
	_IDLE = IDLE;
	_RUN = RUN;
	_ATK_1 = ATK_1;
	_ATK_2 = ATK_2;
	_LAND = LAND;
	_J_UP = J_UP;
	_J_DOWN = J_DOWN;
	_TAKE_HIT = TAKE_HIT;
	_DEATH = DEATH;


	load_attack_1();
	load_attack_2();
	load_idle();
	load_j_up();
	load_j_down();
	load_land();
	load_run();

	load_death();
	load_take_hit();
}

Player::~Player()
{

}

void Player::load_attack_1()
{

}

void Player::load_attack_2()
{

}

void Player::load_idle()
{
	//º”‘ÿidle
	for (int i = 0; i < _IDLE; i++)
	{
		std::wstring path = L"./image_source/player/Idle/" + std::to_wstring(i + 1) + L".png";
		IMAGE img;
		loadimage(&img, path.c_str(), 150, 150, true);
		img_idle_right.push_back(img);
	}
	for (int i = 0; i < _IDLE; i++)
	{
		std::wstring path = L"./image_source/player/Idle/0" + std::to_wstring(i + 1) + L".png";
		IMAGE img;
		loadimage(&img, path.c_str(), 150, 150, true);
		img_idle_left.push_back(img);
	}
}

void Player::load_j_up()
{

}

void Player::load_j_down()
{

}

void Player::load_land()
{

}

void Player::load_run()
{

}

void Player::load_death()
{

}

void Player::load_take_hit()
{

}



void Player::put_idle()
{
	static int time = 0;
	if (point_right)Putimage_alpha::putimage_alpha(enemy_point.x, enemy_point.y, &img_idle_right[time / 2]);
	else Putimage_alpha::putimage_alpha(enemy_point.x, enemy_point.y, &img_idle_left[time / 2]);
	time++;
	if (time / 2 == _IDLE)time = 0;
}

void Player::put_run()
{

}

void Player::put_attack_1()
{

}

void Player::put_attack_2()
{

}

void Player::put_j_up()
{

}

void Player::put_j_down()
{

}


void Player::put_take_hit()
{

}

void Player::put_death()
{

}


void Player::change_data()
{

}

void Player::player_action()
{

}
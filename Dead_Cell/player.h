#pragma once
class Player {
public:
	Player(int IDLE, int RUN, int J_UP, int J_DOWN, int LAND, int ATK_1, int ATK_2, int TAKE_HIT, int DEATH);
	~Player();

	void load_attack_1();
	void load_attack_2();
	void load_idle();
	void load_j_up();
	void load_j_down();
	void load_land();
	void load_run();

	void load_death();
	void load_take_hit();

	//渲染图片
	void put_idle();
	void put_run();
	void put_attack_1();
	void put_attack_2();
	void put_j_up();
	void put_j_down();

	void put_take_hit();
	void put_death();


	void change_data();

	void player_action();

	//使用vector来取代传统数组来储存，
	std::vector<IMAGE> img_idle_left;
	std::vector<IMAGE> img_idle_right;

	std::vector<IMAGE> img_run_right;
	std::vector<IMAGE> img_run_left;

	std::vector<IMAGE> img_attack_1_right;
	std::vector<IMAGE> img_attack_1_left;

	std::vector<IMAGE> img_attack_2_right;
	std::vector<IMAGE> img_attack_2_left;

	std::vector<IMAGE> img_j_up_right;
	std::vector<IMAGE> img_j_up_left;

	std::vector<IMAGE> img_j_down_right;
	std::vector<IMAGE> img_j_down_left;

	std::vector<IMAGE> img_take_hit_right;
	std::vector<IMAGE> img_take_hit_left;

	std::vector<IMAGE> img_death_right;
	std::vector<IMAGE> img_death_left;


	//判断在这一帧中，有无键盘A,D信息
	bool is_move_left = false;//A
	bool is_move_right = false;//D

	bool point_right = true;//判断人物朝向变量

	//判断动作是否还在进行
	bool atk_2_ing = false;//W + U
	bool atk_1_ing = false;//U
	bool j_up_ing = false;//K
	bool j_down_ing = false;//下落
	bool take_hit_ing = false;
	bool death_ing = false;

	bool idle_ing = true;

	unsigned int start_time;
	unsigned int end_time;
private:
	int _IDLE;
	int _RUN;
	int _ATK_1;
	int _ATK_2;
	int _J_UP;
	int _J_DOWN;
	int _LAND;
	int _TAKE_HIT;
	int _DEATH;

	POINT enemy_point = { 200, 400 };
};

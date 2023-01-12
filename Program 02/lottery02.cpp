

//----------------------------------------
#pragma once
class Lottery
{
private:
	int user_input_number[5];
	int random_number[5];
public:
	Lottery();
	void input();
	void generate_rnumber();
	void print_results();
	~Lottery();
};


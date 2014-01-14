#pragma once
#include "history.h"

class process
{
public:
	int id;
	char state;				// stan procesu
	int moves;				// liczba kroków
	int moves_left;			// pozostale kroki
	int move_time;			// czas jednego kroku
	process(int,int,int);	

	
};

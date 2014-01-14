#pragma once
#include "process.h"
#include <vector>

class user
{
public:
	std::vector<process> processvec;				// wektor procesów
	int lastp_id;									// id ostatniego utworzonego procesu
	void init_process(int, int*, int*, int*);		
	void sim_process();
	history phistory;								
};

#include "StdAfx.h"
#include "process.h"


process::process(int id,int moves,int move_time)
{
	this -> id = id;
	this -> moves = moves;
	this-> move_time = move_time;
	this->moves_left = moves;
	this->state = 'W';
}

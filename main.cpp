#include "StdAfx.h"
#include "user.h"
#include "process.h"
#include "history.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//--------------------5 procesów----------------------------------------------------------------------------
	user new_user;

	int ids[5] = {1,2,3,4,5};
	int moves[5] = {2,3,1,2,1};
	int moves_time[5] = {2,2,1,4,3}; 

	new_user.init_process(5, ids, moves, moves_time);
	new_user.sim_process();
	(new_user.phistory).display();

	//----------------- 10 procesów-----------------------------------------------------------------------------
	cout<<endl<<endl;

	user new_user2;

	int ids2[10] = {1,2,3,4,5,6,7,8,9,10};
	int moves2[10] = {2,3,1,2,1,3,2,1,5,4};
	int moves_time2[10] = {3,2,3,5,2,3,1,4,7,2}; 

	new_user2.init_process(10, ids2, moves2, moves_time2);
	new_user2.sim_process();
	(new_user2.phistory).display();

	getchar();
	
}



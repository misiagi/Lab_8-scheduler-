#include "StdAfx.h"
#include "user.h"
#include <iostream>


void user::init_process(int amount,int* ids, int* movestab, int* move_time_tab)
{
	for (int i=0; i<amount; i++)
	{
		processvec.push_back( process(ids[i], movestab[i], move_time_tab[i]) );
		lastp_id = ids[i];
	}
}

void user::sim_process()
{
	int exitstates=0;

	int i = 0;

	for(int j=0; j<processvec.size(); j++) 
	{
		phistory.add_id(processvec[j].id);
	}
	
	while(1)
	{
		if(processvec[i].moves_left > 0)
		{
			int rand_move_time = rand()%processvec[i].move_time; 
			if(rand_move_time == 0)                              
			{
				rand_move_time = 1;
			}

			for(int j=0; j<rand_move_time; j++)
			{
				for(int k=0; k<processvec.size(); k++)
				{
					if(k == i)
					{
					processvec[k].state = 'D';
					}
					else if(processvec[k].state != 'Z')
					{
						processvec[k].state = 'W';
					}
				}
					
					phistory.add_cycle();

					char* temp = new char[processvec.size()];

					for(int l=0; l<processvec.size(); l++)
					{
						temp[l] = processvec[l].state;
					}
					phistory.add_state(temp);
					
				
			}
			processvec[i].moves_left--;
			if(processvec[i].moves_left == 0)
			{
				processvec[i].state = 'Z';
				exitstates++;
			}
		}

		i++;
		if(i>processvec.size()-1)
		{
			i=0;
		}

		if(exitstates == processvec.size())
		{
			break;
		}
	}
}

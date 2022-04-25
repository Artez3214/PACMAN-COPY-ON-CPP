#pragma once
#include "PacMan.h"

class ALL_Ghosts
{
protected:
	int x, y;
	bool game_over;
public:
	ALL_Ghosts():x(3),y(3),game_over(false){}
	ALL_Ghosts(int a,int b):x(a),y(b){}
	~ALL_Ghosts(){}
	bool Gameover()
	{
		return game_over;
	}
};

class Ghost1 : public ALL_Ghosts
{
public:
	void Movement(int& x1, int& y1)
	{
		if (x+1 == x1 && y==y1 || x -1 == x1 && y == y1 || x  == x1 && y +1== y1 || x  == x1 && y-1 == y1)
		{
			game_over = true;
			
		}
		
			if (x <= x1)
			{
				if (x == x1)
				{
					if (y < y1)
					{
						if (maps[y + 1][x] ==' ' || maps[y+1][x]=='.')
						{
							maps[y][x] = ' ';
							y++;
							maps[y][x] = 3;
						}
					}
					else if (y > y1)
					{
						if (maps[y - 1][x] == ' ' || maps[y - 1][x] == '.')
						{
							maps[y][x] = ' ';
							y--;
							maps[y][x] = 3;
						}
					}
				}
				else
				{
					if (maps[y][x+1] == ' ' || maps[y][x+1] == '.')
					{
						maps[y][x] = ' ';
						x++;
						maps[y][x] = 3;
					}
					else if (maps[y +1][x] == ' ' || maps[y + 1][x] == '.')
					{
						maps[y][x] = ' ';
						y++;
						maps[y][x] = 3;
					}
					else if (maps[y][x - 1] == ' ' || maps[y][x - 1] == '.')
					{
						maps[y][x] = ' ';
						x--;
						maps[y][x] = 3;
					}
					else if (maps[y - 1][x] == ' ' || maps[y - 1][x] == '.')
					{
						maps[y][x] = ' ';
						y--;
						maps[y][x] = 3;
					}
				}
			}
			else if (x > x1)
			{

				if (maps[y][x - 1] == ' ' || maps[y][x - 1] == '.')
				{
					maps[y][x] = ' ';
					x--;
					maps[y][x] = 3;
				}
				else if (maps[y - 1][x] == ' ' || maps[y - 1][x] == '.')
				{
					maps[y][x] = ' ';
					y--;
					maps[y][x] = 3;
				}
				else if (maps[y][x + 1] == ' ' || maps[y][x + 1] == '.')
				{
					maps[y][x] = ' ';
					x++;
					maps[y][x] = 3;
				}
				else if (maps[y + 1][x] == ' ' || maps[y + 1][x] == '.')
				{
					maps[y][x] = ' ';
					y++;
					maps[y][x] = 3;
				}
			}
			else if (y >= y1)
			{
				if (y == y1)
				{
					if (x > x1)
					{
						if (maps[y][x - 1] == ' ' || maps[y][x - 1] == '.')
						{
							maps[y][x] = ' ';
							x--;
							maps[y][x] = 3;
						}
					}
					else if(x<x1)
					{
							if (maps[y][x + 1] == ' ' || maps[y][x + 1] == '.')
						{
							maps[y][x] = ' ';
							x++;
							maps[y][x] = 3;
						}
					}
				}
				else {
					if (maps[y - 1][x] == ' ' || maps[y - 1][x] == '.')
					{
						maps[y][x] = ' ';
						y--;
						maps[y][x] = 3;
					}
					else if (maps[y][x - 1] == ' ' || maps[y][x - 1] == '.')
					{
						maps[y][x] = ' ';
						x--;
						maps[y][x] = 3;
					}
					else if (maps[y + 1][x] == ' ' || maps[y + 1][x] == '.')
					{
						maps[y][x] = ' ';
						y++;
						maps[y][x] = 3;
					}
					else if (maps[y][x + 1] == ' ' || maps[y][x + 1] == '.')
					{
						maps[y][x] = ' ';
						x++;
						maps[y][x] = 3;
					}
				}
			}
			else if (y < y1)
			{

			if (maps[y + 1][x] == ' ' || maps[y + 1][x] == '.')
				{
					maps[y][x] = ' ';
					y++;
					maps[y][x] = 3;
				}
			else if (maps[y][x + 1] == ' ' || maps[y][x + 1] == '.')
				{
					maps[y][x] = ' ';
					x++;
					maps[y][x] = 3;
				}
				else if (maps[y - 1][x] == ' ' || maps[y - 1][x] == '.')
				{
					maps[y][x] = ' ';
					y--;
					maps[y][x] = 3;
				}
				else if (maps[y][x - 1] != ' ' || maps[y][x - 1] != '.')
				{
					maps[y][x] = ' ';
					x--;
					maps[y][x] = 3;
				}

			}
			
	}
};
class Ghost2 : public ALL_Ghosts
{
public:
	
	void Ghost_Movement(int& x1, int& y1)
	{
		
		if (x + 1 == x1 && y == y1 || x - 1 == x1 && y == y1 || x == x1 && y + 1 == y1 || x == x1 && y-1== y1)
		{
			game_over = true;

		}
		if (x <= x1)
		{
			if (x == x1)
			{
				if (y < y1)
				{
					if (maps[y + 1][x] == ' ' || maps[y + 1][x] == '.')
					{
						maps[y][x] = ' ';
						y++;
						maps[y][x] = 5;
					}
				}
				else if (y > y1)
				{
					if (maps[y - 1][x] == ' ' || maps[y - 1][x] == '.')
					{
						maps[y][x] = ' ';
						y--;
						maps[y][x] = 5;
					}
				}
			}
			else
			{
				if (maps[y][x + 1] == ' ' || maps[y][x + 1] == '.')
				{
					maps[y][x] = ' ';
					x++;
					maps[y][x] = 5;
				}
				else if (maps[y + 1][x] == ' ' || maps[y + 1][x] == '.')
				{
					maps[y][x] = ' ';
					y++;
					maps[y][x] = 5;
				}
				else if (maps[y][x - 1] == ' ' || maps[y][x - 1] == '.')
				{
					maps[y][x] = ' ';
					x--;
					maps[y][x] = 5;
				}
				else if (maps[y - 1][x] == ' ' || maps[y - 1][x] == '.')
				{
					maps[y][x] = ' ';
					y--;
					maps[y][x] = 5;
				}
			}
		}
		else if (x > x1)
		{

			if (maps[y][x - 1] == ' ' || maps[y][x - 1] == '.')
			{
				maps[y][x] = ' ';
				x--;
				maps[y][x] = 5;
			}
			else if (maps[y - 1][x] == ' ' || maps[y - 1][x] == '.')
			{
				maps[y][x] = ' ';
				y--;
				maps[y][x] = 5;
			}
			else if (maps[y][x + 1] == ' ' || maps[y][x + 1] == '.')
			{
				maps[y][x] = ' ';
				x++;
				maps[y][x] = 5;
			}
			else if (maps[y + 1][x] == ' ' || maps[y + 1][x] == '.')
			{
				maps[y][x] = ' ';
				y++;
				maps[y][x] = 5;
			}
		}
		else if (y >= y1)
		{
			if (y == y1)
			{
				if (x > x1)
				{
					if (maps[y][x - 1] == ' ' || maps[y][x - 1] == '.')
					{
						maps[y][x] = ' ';
						x--;
						maps[y][x] = 5;
					}
				}
				else if (x < x1)
				{
					if (maps[y][x + 1] == ' ' || maps[y][x + 1] == '.')
					{
						maps[y][x] = ' ';
						x++;
						maps[y][x] = 5;
					}
				}
			}
			else {
				if (maps[y - 1][x] == ' ' || maps[y - 1][x] == '.')
				{
					maps[y][x] = ' ';
					y--;
					maps[y][x] = 5;
				}
				else if (maps[y][x - 1] == ' ' || maps[y][x - 1] == '.')
				{
					maps[y][x] = ' ';
					x--;
					maps[y][x] = 5;
				}
				else if (maps[y + 1][x] == ' ' || maps[y + 1][x] == '.')
				{
					maps[y][x] = ' ';
					y++;
					maps[y][x] = 5;
				}
				else if (maps[y][x + 1] == ' ' || maps[y][x + 1] == '.')
				{
					maps[y][x] = ' ';
					x++;
					maps[y][x] = 5;
				}
			}
		}
		else if (y < y1)
		{

			if (maps[y + 1][x] == ' ' || maps[y + 1][x] == '.')
			{
				maps[y][x] = ' ';
				y++;
				maps[y][x] = 5;
			}
			else if (maps[y][x + 1] == ' ' || maps[y][x + 1] == '.')
			{
				maps[y][x] = ' ';
				x++;
				maps[y][x] = 5;
			}
			else if (maps[y - 1][x] == ' ' || maps[y - 1][x] == '.')
			{
				maps[y][x] = ' ';
				y--;
				maps[y][x] = 5;
			}
			else if (maps[y][x - 1] != ' ' || maps[y][x - 1] != '.')
			{
				maps[y][x] = ' ';
				x--;
				maps[y][x] = 5;
			}

		}
	}
};
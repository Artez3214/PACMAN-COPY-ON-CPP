#pragma once
#include "map.h"
class PacMan
{
private:
	int Button,x,y,player;
	bool key_pressed;
	
public:
	PacMan():x(14), y(14),Button(0),player(1),key_pressed(true){}
	//~PacMan() {}

	void Start(){}
	void Update()
	{
		CheckInput(x,y);
	//	cout << x << " " << y << endl;
	}

	void CheckInput(int &x,int&y)
	{
		
		_kbhit();
		Button = _getch();
		
		switch (Button)
		{
			
		case  's':
			{
			if (maps[y + 1][x] == ' ' || maps[y + 1][x] == '.')
			{
				maps[y][x] = ' ';
				y++;
				maps[y][x] = player;
				
			}
			 break;
			}
		case 'a':
			
		{
			if (maps[y][x-1] == ' ' || maps[y][x-1] == '.')
			{
				maps[y][x] = ' ';
				x--;
				maps[y][x] = player;
				
			}
			break;
			}
		case 'd':
		{
			if (maps[y][x + 1] == ' ' || maps[y][x + 1] == '.')
			{
				maps[y][x] = ' ';
				x++;
				maps[y][x] = player;
				
			}
		break;
				
			}
		case 'w':
			{
			if (maps[y-1][x] == ' ' || maps[y-1][x] == '.')
			{
				maps[y][x] = ' ';
				y--;
				maps[y][x] = player;
		
			}
				break;
			}
		
		case'0':
			{
				exit(1);
			}
			 
             
			 
		}
		

	}
	

	int GetPacManX()
		{
			return x;
		}
	int GetPacManY()
	{
		return y;
	}
	int GetPlayer()
	{
		return player;
	}
	char Buttonn()
	{
		return char(Button);
	}
	bool keyprs()
	{
		if (Button == 0)
		{
			key_pressed = false;
		}
		else
		{
			key_pressed = true;
		}
		return key_pressed;
	}
};
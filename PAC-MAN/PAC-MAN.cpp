#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <string>
#include <vector>
#include <conio.h>
#include <map>
#include "ghosts.h"


using namespace std;
int main()
{
    PacMan Pac;
    Ghost1 ghost1;
    Ghost2 ghost2;
    int x, y;
    bool ifkeyprs;
    char symb;
    int key_pressed;
     map<char,int> Points;
     vector <int> Points2;
     cout << "Choose  difficulty : \nHard - 3 \nMedium - 2 \nEasy - 1" << endl;
    cin >> key_pressed; 
    if (key_pressed == 1)
    {
          for (int i = 0; i < 20; i++)
            for (int j = 0; j < 60; j++)
            {
                
                maps[i][j] = maps2[i][j];
                
            }
    }
    
    system("cls"); 
    Showmaps2();
    if (key_pressed == 1)
    {    
       
       
        long long  i = 0;
        while (1)
        {
            x = Pac.GetPacManX();
            y = Pac.GetPacManY();
            Sleep(200);   
            if (i % 2 == 0)
            {
                ghost1.Movement(x, y);
            }
            
            system("cls");
            cout << "[+] s - move down" << endl;
            cout << "[+] w - move up " << endl;
            cout << "[+] a move left" << endl;
            cout << "[+] d - move right" << endl;
            cout << "[+] 0 - exit" << endl; 
            cout << ghost1.Gameover() << endl;
            if (_kbhit())
            Pac.Update();
            Showmaps(); 
            if(ghost1.Gameover() == true)
            {
                system("cls");
                cout << "Game Over" << endl;
                exit(1);
            }
            i++;

            for (int i = 0; i < 20; i++)
                for (int j = 0; j < 60; j++)
                {

                    if (maps[i][j] == '.')
                    {
                        Points['.']++;
                    }
                }
            Points2.push_back(Points['.']);
            if (Points['.'] == 0)
            {   
                system("cls");
                cout << "You won !!!" << endl;
                cout << "Your score is " << Points2.front() << endl;
                break;
            }
            Points.clear();
        }
    }
    else if (key_pressed == 2)
    {

        long long i=0;
        while (1)
        {
            x = Pac.GetPacManX();
            y = Pac.GetPacManY();
            Sleep(200);
            if (i % 2 == 0)
            {
            ghost1.Movement(x, y);
            ghost2.Ghost_Movement(x, y);
            }
           
            system("cls");
            cout << "[+] s - move down" << endl;
            cout << "[+] w - move up " << endl;
            cout << "[+] a move left" << endl;
            cout << "[+] d - move right" << endl;
            cout << "[+] 0 - exit" << endl;
            if (_kbhit())
            Pac.Update();
            Showmaps();
            if (ghost1.Gameover() == true)
            {
                system("cls");
                cout << "Game Over" << endl;
                exit(1);
            }
            i++;
            for (int i = 0; i < 20; i++)
                for (int j = 0; j < 60; j++)
                {

                    if (maps[i][j] == '.')
                    {
                        Points['.']++;
                    }
                }
            Points2.push_back(Points['.']);
            if (Points['.'] == 0)
            {
                system("cls");
                cout << "You won !!!" << endl;
                cout << "Your score is " << Points2.front() << endl;
                exit(1);
            }
            Points.clear();
        }
    }
    else if (key_pressed == 3)
    {
        long long i = 0;
        while (1)
        {
            x = Pac.GetPacManX();
            y = Pac.GetPacManY();
            Sleep(200);
            
                ghost1.Movement(x, y);
                ghost2.Ghost_Movement(x, y);
            

            system("cls");
            cout << "[+] s - move down" << endl;
            cout << "[+] w - move up " << endl;
            cout << "[+] a move left" << endl;
            cout << "[+] d - move right" << endl;
            cout << "[+] 0 - exit" << endl;
            if (_kbhit())
                Pac.Update();
            Showmaps();
            if (ghost1.Gameover() == true)
            {
                system("cls");
                cout << "Game Over" << endl;
                exit(1);
            }
            i++;
            for (int i = 0; i < 20; i++)
                for (int j = 0; j < 60; j++)
                {

                    if (maps[i][j] == '.')
                    {
                        Points['.']++;
                    }
                }
            Points2.push_back(Points['.']);
            if (Points['.'] == 0)
            {
                system("cls");
                cout << "You won !!!" << endl;
                cout << "Your score is " << Points2.front() << endl;
                exit(1);
            }
            Points.clear();
        }
    }
  
    
    return 0;
}


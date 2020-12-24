/*
 * rock_paper_scissors.cpp
 * This file is part of <program name>
 *
 * Copyright (C) 2020 - gerie reveur
 *
 * <rock_paper_scissors.cpp> is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * <rock_paper_scissors.cpp> is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with <rock_paper_scissors.cpp>. If not, see <http://www.gnu.org/licenses/>.
 */

#include "rock.h"

GameEngine::GameEngine()
{
    wager = 100;
    WIN = false;
    LOSS = false;
    user = wager;
    computer = 0;
    quit = -1;
    winCount = 0;
    user_choice = -1;
    //begin EngineWorks
    menu();
    gamePlay();
    
    cout << "User:\t" << user << endl;
    cout << "Computer:\t" << computer << endl;
    if(WIN == true)
    cout << "The winner is you:\t" << user <<endl;
    else
        cout << "The computer wins:\t" << computer <<endl;
    
}

void GameEngine::start()
{
        cout <<  "enter your choice" << endl;
        cin >> user_choice;
        computer_choice = get_computer_choice();
        
        if(user_choice == ROCK && computer_choice == PAPER){
        cout << "The computer has won, paper beats rock" << endl;
        LOSS = true;
        user -= 10;
        computer += 10;
        winCount -=1;
        }
        
        else if(user_choice == PAPER && computer_choice == SCISSORS){
            cout << "The computer has won, scissors cut paper" << endl;
        LOSS = true;
        user -= 10;
        computer += 10;
        winCount -=1;
        }
        
        else if(user_choice == SCISSORS && computer_choice == ROCK){
            cout << "The computer has won, Rock smashes scissors" << endl;
        LOSS = true;
        user -= 10;
        computer += 10;
        winCount -=1;
        }
        
        else if(user_choice == ROCK && computer_choice == SCISSORS){
            cout << "You have won, rock smashes scissors" << endl;
        LOSS = false;
        WIN = true;
        user += 10;
        computer -= 10;
        winCount +=1;
        }
        
        else if(user_choice == PAPER && computer_choice == ROCK){
            cout << "You have won, paper wraps rock" << endl;
        LOSS = false;
        WIN = true;
        user += 100;
        computer -= 10;
        winCount +=1;
        }
        
        else if(user_choice == SCISSORS && computer_choice == PAPER){
            cout << "You have won, scissors cut paper" << endl;
        LOSS = false;
        WIN = true;
        user += 10;
        computer -= 10;
        winCount +=1;
        }
        else
        {
            cout << "A tie has been made " << endl;
        }
        
        cout << "enter 0 to quit EngineWorks? " ;
        cin >> quit;
}
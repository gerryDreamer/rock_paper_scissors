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

Game
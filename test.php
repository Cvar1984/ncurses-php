<?php

if(!initscr()) exit('Can\'t init screen');

printw('Hello from ncurses');
refresh();
readline();
endwin();

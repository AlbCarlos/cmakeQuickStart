#include <iostream>
#include <ncurses.h>
using namespace std;

int main(int, char**) {
    initscr();
    
    printw("Hello. ");

    move(90,90);
    
    refresh();
    printw("This text has been moved for you :)");
    
    getch();
    refresh();
    
    endwin();

}

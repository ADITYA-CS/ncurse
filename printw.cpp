#include <ncurses.h>
#include <cstring>
#include <iostream>

int main(){
    char mesg[] = "Hello, there";
    int row, col;

    initscr();
    getmaxyx(stdscr, row, col);
    mvprintw(row/2, (col - strlen(mesg)) / 2, "%s", mesg);

    mvprintw(row-2,0, "This screen has %d rows and %d columns\n", row, col);
    printw("Try resizing your window(if possible) and then run this program again");
    refresh();
    getch();
    endwin();
}

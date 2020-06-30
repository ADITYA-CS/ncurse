#include <ncurses.h>

int main(void) {
    initscr();
    int c, y, x, cmax;

    getmaxyx(stdscr,y,x);
    cmax = (x * y) / 5;
    for(c = 0; c < cmax; c++)
        addstr("blah ");
    refresh();
    getch();

    clear();
    refresh();
    getch();

    endwin();
    return 0;
}

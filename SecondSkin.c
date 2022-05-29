#include "pronouns.h"
#include <curses.h>
#include <stdlib.h>

int main(){
  // setlocale(LC_ALL, "");
  initscr();
  addstr();
  refresh();
  getch();
  endwin();
  return EXIT_SUCCESS;
}

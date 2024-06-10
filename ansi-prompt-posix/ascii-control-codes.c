#include <stdio.h>

/* From: https://notes.burke.libbey.me/ansi-escape-codes/

char          name                            signature     description
A             Cursor Up                       (n=1)         Move cursor up by n
B             Cursor Down                     (n=1)         Move cursor down by n
C             Cursor Forward                  (n=1)         Move cursor forward by n
D             Cursor Back                     (n=1)         Move cursor back by n
E             Cursor Next Line                (n=1)         Move cursor to the beginning of the line n lines down
F             Cursor Previous Line            (n=1)         Move cursor to the beginning of the line n lines up
G             Cursor Horizontal Absolute      (n=1)         Move cursor to the the column n within the current row
H             Cursor Position                 (n=1, m=1)    Move cursor to row n, column m, counting from the top left corner
J             Erase in Display                (n=0)         Clear part of the screen. 0, 1, 2, and 3 have various specific functions
K             Erase in Line                   (n=0)         Clear part of the line. 0, 1, and 2 have various specific functions
S             Scroll Up                       (n=1)         Scroll window up by n lines
T             Scroll Down                     (n=1)         Scroll window down by n lines
s             Save Cursor Position            ()            Save current cursor position for use with u
u             Restore Cursor Position         ()            Set cursor back to position last saved by s

*/


int main(void) {
  printf("01 Hello, World!");

  printf("\e[2E"); // move down 2 lines
  printf("03 Goodbye, World!");

  printf("\e[1F"); // move up 1 lines
  printf("02 Something... in the middle.");

  printf("\e[2E"); // move down 2 lines
                   // so terminal prompt output doesn't clobber our text.
  return 0;
}

// OUTPUT:
/*
$> ./a.out
01 Hello, World!
02 Something... in the middle.
03 Goodbye, World!
$>

*/

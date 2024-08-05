#include <stdio.h>
#include <conio.h>
#include <dos.h>

int stopwatch_running = 0;
int stopwatch_paused = 0;

void printTime(int h, int m, int s, int cs) {
    clrscr();
    printf("\n");
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    printf("%c   SHANKAR      %c\n",219,219);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    printf("%c   %02d:%02d:%02d:%02d  %c\n",219, h, m, s, cs,219);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
}

int main() {
    int h = 0, m = 0, s = 0, cs = 0;
    char ch;
    clrscr();
    printf("Press '0' to start\n");

    while (1) {
        if (stopwatch_running) {
            if (stopwatch_paused) {
                ch = getch();
                if (ch == 't' || ch == 'T') {
                    // Ignore the reset option when the stopwatch is paused
                    printf("Invalid command.\n");
                } else if (ch == 'e' || ch == 'E') {
                    // Ignore the exit option when the stopwatch is paused
                    printf("Invalid command.\n");
                } else if (ch == 'r' || ch == 'R') {
                    // Resume the stopwatch
                    stopwatch_paused = 0;
                } else {
                    printf("Invalid command.\n");
                }
            } else {
                for (cs = 0; cs < 100; cs++) {
                    printTime(h, m, s, cs);
                    delay(10);
                    if (kbhit()) {
                        ch = getch();
                        if (ch == 's' || ch == 'S') {
                            stopwatch_running = 0;
                            stopwatch_paused = 0;
                        } else if (ch == 'p' || ch == 'P') {
                            stopwatch_paused = 1;
                        } else if (ch == 't' || ch == 'T') {
                            // Ignore the reset option when the stopwatch is running
                            printf("Invalid command.\n");
                        } else if (ch == 'e' || ch == 'E') {
                            // Ignore the exit option when the stopwatch is running
                            printf("Invalid command.\n");
                        } else {
                            printf("Invalid command.\n");
                        }
                    }
                }
                cs = 0;
                s++;
                if (s == 60) {
                    s = 0;
                    m++;
                    if (m == 60) {
                        m = 0;
                        h++;
                    }
                }
            }
        } else {
            ch = getch();
            if (ch == '0') {
                stopwatch_running = 1;
            } else if (ch == 't' || ch == 'T' || ch == 'e' || ch == 'E') {
                if (!stopwatch_running && !stopwatch_paused) {
                    h = 0;
                    m = 0;
                    s = 0;
                    cs = 0;
                    printTime(h, m, s, cs);
                    if (ch == 'e' || ch == 'E') {
                        exit(0);
                    }
                    getch();
                } else {
                    printf("Invalid command.\n");
                }
            } else if (ch == 'r' || ch == 'R') {
                printf("Invalid command.\n");
            } else {
                printf("Invalid command. Press '0' to start.\n");
            }
        }
    }
}
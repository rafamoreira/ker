#include <stdio.h>
#define MAXLINE 10000

int max;
char line[MAXLINE];
char longest[MAXLINE];

int get_line(void);
void copy(void);

int main(){
    int len;
    extern int max;
    extern char longest[];

    max = 0;
    while ((len = get_line()) > 0)
        if (len > max) {
            max = len;
            copy();
        }
    if (max > 0)
        printf("%s | %d", longest, max);
    return 0;
}

int get_line(void) {
    int c, i;
    extern int max;
    extern char line[];
    i = 0;

    while((c=getchar()) != EOF && c != '\n'){
        if (i < MAXLINE-1){
            line[i] = c;
        }
        // if (c == '\n'){
        //     ++i;
        //     break;
        // }
        ++i;
    }
    line[MAXLINE-1] = '\0';

    return i;
}

void copy(void) {
    int i;
    extern char line[], longest[];

    i = 0;
    while((longest[i] = line[i]) != '\0')
        ++i;
}


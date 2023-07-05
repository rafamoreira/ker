#include <stdio.h>
#define MAXLINE 10000

int get_line(char line[], int maxline) {
    int c, i, end_line;
    i = 0;

    while((c=getchar()) != EOF && c != '\n'){
        if (i < maxline-1) {
            line[i] = c;
        }
        ++i;
    }

    if (maxline-1 < i) {
        end_line = maxline-1;
    } else {
        end_line = i;
    }

    line[end_line] = '\0';
    return i;
}

int main() {
    int c, current_line_length;
    char line[MAXLINE];

    current_line_length = 0;

    while((current_line_length = get_line(line, MAXLINE)) > 0){
        if (current_line_length > 80) {
            printf("%s\n", line);
        }
    }


    return 0;
}



#include <stdio.h>
#define MAXLINE 10000

int get_line(char line[], int maxline) {
    int c, i;
    for(i = 0; i < maxline-1 && (c=getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }
    // if (c == '\n') {
    //     line[i] = c;
    //     i++;
    // }
    line[i] = '\0';
    return i;
}

int main() {
    int len; 
    char line[MAXLINE];

    while((len = get_line(line, MAXLINE)) > 0){
        if (len > 0) {
            for(int i = len; i > 0; i--){
                if (line[i] == '\0') {
                    continue;
                }
                if (line[i] == ' ' || line[i] == '\t') {
                    line[i] = '\0';
                } else {
                    break;
                }
            }
        }
        printf("%s|\n", line);
    }

}

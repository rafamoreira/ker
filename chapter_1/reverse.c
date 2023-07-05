#include <stdio.h>
#define MAXLINE 10000

int get_line(char line[], int maxline);
void reverse(char line_from[], char line_to[], int len);

int main() {
    int len;
    char line_from[MAXLINE];
    char line_to[MAXLINE];

    while((len = get_line(line_from, MAXLINE)) > 0){
        reverse(line_from, line_to, len);
        printf("%s\n", line_to);
    }
}

int get_line(char line[], int maxline){
    int c, i;
    i = 0;

    while((c=getchar()) != EOF && c != '\n'){
        if (i < maxline-1){
            line[i] = c;
        }
        ++i;
    }
    line[maxline-1] = '\0';
    return i;
}

void reverse(char line_from[], char line_to[], int len){
    int i;
    for(i = 0; i < len; i++){
        line_to[i] = line_from[len-i-1];
    }
}

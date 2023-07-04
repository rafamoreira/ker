#include <stdio.h>

int main() {
    int blanks, tabs, newlines, c;
    blanks = tabs = newlines = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            blanks++;
        } else if (c == '\t') {
            tabs++;
        } else if (c == '\n') {
            newlines++;
        }
    }

    printf("blanks: %d\ntabs: %d\nnew lines: %d\n", blanks, tabs, newlines);
}

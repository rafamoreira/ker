#include <stdio.h>

int main() {
    int c, word_count[100], current_word;

    current_word = 0;
    for (int i = 0; i < 100; i++) {
        word_count[i] = 0;
    }

    while((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            word_count[current_word]++;
            current_word = 0;
        } else {
            current_word++;
        }
    }

    printf("Word count histogram:\n");
    for (int i = 0; i < 100; i++) {
        if (word_count[i] > 0) {
            printf("%d: ", i);
            for (int j = 0; j < word_count[i]; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
}

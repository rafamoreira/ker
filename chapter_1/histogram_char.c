#include <stdio.h>

int main() {
    int c, char_count[255];

    for (int i = 0; i < 255; i++) {
        char_count[i] = 0;
    }

    while((c = getchar()) != EOF) {
        char_count[c]++;
    }

    printf("Character count histogram:\n");
    for (int i = 0; i < 255; i++) {
        if (char_count[i] > 0) {
            printf("%c: ", i);
            for (int j = 0; j < char_count[i]; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
}

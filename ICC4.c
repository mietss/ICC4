//
// Created by Mies VanBeek on 2026-02-06.
//
#include <stdio.h>

int main(void) {
    int width = 0, repetitions = 0;
    char line[width+2];

    scanf(" %d %d", &width, &repetitions);
    while (getchar() != '\n');

    for (int i = 0; i <= width; i++) {
        line[i] = ' ';
    }
    line[width+1] = '|';

    for (int i = 0; i < repetitions; i++) {
        for (int j = width; j >= 0; j--) {
            line[j] = 'o';
            printf("%s\n", line);
            line[j] = ' ';
        }
        for (int j = 1; j < width; j++) {
            line[j] = 'o';
            printf("%s\n", line);
            line[j] = ' ';
        }
    }

    return 0;
}
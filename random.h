#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar();

char randchar() {
    // define alphabet
    char* alphabet = "abcdefghijklmnopqrstuvwxyz";
    // get rand index in range
    int index = rand() % 26;
    return alphabet[index];
}
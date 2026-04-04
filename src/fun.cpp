// Copyright 2022 UNN-IASR
#include "fun.h"
#include <cctype>
#include <cstring>

unsigned int faStr1(const char *str) {
    unsigned int count = 0;
    bool inWord = false;
    bool hasDigit = false;
    for (int  i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            if (!inWord) {
                inWord = true;
                hasDigit = false;
            }
            if (isdigit(str[i])) {
            hasDigit = true;
            }
        } else {
            if (inWord && !hasDigit) {
                count++;
            }
            inWord = false;
        }
    }
    if (inWord && !hasDigit) count++;
    return count;
}

unsigned int faStr2(const char *str) {
    unsigned int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        while (str[i] == ' ') i++;

        if (str[i] == '\0') break;

        bool valid = true;

        if (!isupper(str[i])) {
            valid = false;
        }

        i++;

        while (str[i] != ' ' && str[i] != '\0') {
            if (!islower(str[i])) {
                valid = false;
            }
            i++;
        }
        if (valid) count++;
    }
    return count;
}

unsigned int faStr3(const char *str) {
    unsigned int words = 0;
    unsigned int totalLength = 0;
    int i = 0;

     while (str[i] != '\0') {
        while (str[i] == ' ') i++;

        if (str[i] == '\0') break;

        int length = 0;

        while (str[i] != ' ' && str[i] != '\0') {
            length++;
            i++;
        }

        totalLength += length;
        words++;
    }
    if (words == 0) return 0;

    return (totalLength + words / 2) / words;
}

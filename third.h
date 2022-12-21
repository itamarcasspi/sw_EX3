#include <stdio.h>
#define LINE_MAXSIZE 256
#define WORD_MAXSIZE 30

void shift_element(int* arr, int i);

void insertion_sort(int* arr , int len);

int getline_(char s[LINE_MAXSIZE]);

int getword(char w[WORD_MAXSIZE]);

int contains(char *str1, char *str2);

int substring(char *str1, char *str2);

int similar(char *str1, char *str2, int n);
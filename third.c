#include "third.h"
#include <string.h>

#define LINE 256

void shift_element(int *arr, int i)
{
    int prev = *arr;
    int curr;
    for (int j = 1; j < i + 1; j++)
    {
        curr = *(arr + j);
        *(arr + j) = prev;
        prev = curr;
    }
    *arr = prev;
}

void insertion_sort(int *arr, int len)
{

    for (int i = 0; i < len - 1; i++)
    {
        if (*(arr + i) > *(arr + i + 1))
        {
            int j = i;
            while (*(arr + j - 1) > *(arr + i + 1) && j > 0)
            {
                // printf("**%d_%d***\n",*(arr+j),*(arr+i+1));
                j--;
            }
            // printf("j[%d],i[%d]:",j,i);
            shift_element(arr + j, i - j + 1);
        }

        // printf("iteration-%d-",i);
        // for (int i = 0; i < 6; i++)
        // {
        //     printf("[%d],", *(arr + i));
        // }
        // printf("\n");
    }
}

int getline_(char s[LINE_MAXSIZE])
{
    
    char c;
    int i=0;
    for (; i < LINE_MAXSIZE; i++)
    {
        if(scanf("%c", &c) < 1)
        {
            return i;
        }

        *(s + i) = c;
        if (c == '\n' || c == '\0')
        {
            break;
        }
    }
    return i;
}

int getword(char w[WORD_MAXSIZE])
{
    int i;
    char c;
    for (i = 0; i < WORD_MAXSIZE; i++)
    {
        if(scanf("%c", &c)<1)
        {
            return i;
        }
        
        if (c == '\n' || c == '\0' || c == '\t' || c == ' ' )
        {
            break;
        }
        *(w + i) = c;
    }

    return i;
}

int contains(char *str1, char *str2)
{
    char *str1_ = str1;
    char *str2_ = str2;
    while (*str1 != '\0' && *str2 != '\0')
    {
        if (*str1 == *str2)
        {
            str2++;
        }
        str1++;
    }
    if (*str2 == '\0')
    {
        return strlen(str1_) - strlen(str2_);
    }
    return 0;
}

int substring(char *str1, char *str2)
{
    char *t2 = str2;
    
    while (*str1 != '\0' && *str2 != '\0')
    {
        if (*str1 == *str2 )
        {
            str2++;
            str1++;
        }
        else if(str2 != t2)
        {
            str2 = t2;
        }
        else
        {
            str1++;
        }
    }
    return *str2 == '\0' ? 1 : 0;
}

int similar(char *str1, char *str2, int n)
{
    if(strcmp(str1, str2) == 0)
    {
        return strcmp(str1, str2) == 0 ? 1 : 0;
    }
    return contains(str1, str2) == n ? 1 : 0;
}
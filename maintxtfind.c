#include "third.h"
#include <stdlib.h>
#include <string.h>

int main()
{

    char *line = malloc(LINE_MAXSIZE);
    char *word = malloc(WORD_MAXSIZE);
    char *choice = malloc(WORD_MAXSIZE);

    memset(line, '\0', LINE_MAXSIZE);
    memset(word, '\0', WORD_MAXSIZE);
    memset(choice, '\0', WORD_MAXSIZE);

    getword(word);
    getword(choice);

    
    getline_(line);

    memset(line, '\0', LINE_MAXSIZE);
    
    if (*choice == 'a')
    {
        while (getline_(line) > 0)
        {
            
            if (substring(line, word) == 1)
            {
                printf("%s", line);
                memset(line, '\0', LINE_MAXSIZE);
            }
        }
    }
    else if(strcmp(choice,"b")==0)
    {
        
        char curr_word[WORD_MAXSIZE];
        while (getword(curr_word) > 0)
        {
            // printf("%s,%s\n",curr_word,word);
            if (similar(curr_word, word, 1) == 1)
            {
                printf("%s\n", curr_word);
            }
            memset(curr_word, '\0', LINE_MAXSIZE);

        }
    }
    free(line);
    free(choice);
    free(word);
    return 0;
}

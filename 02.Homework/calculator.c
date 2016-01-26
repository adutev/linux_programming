#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * check if a digit
 *      check if in a word
 *          add current digit to current number
 *      start new number
 *      add current digit to current number
 * check if
 * check first in negative
 */
int main() {
    int operators[100];
    int count = 0;
    //char* line = NULL;
    size_t size = 100;
    //int input_length = getline(&line, &size, stdin);
    
    
    char line[100] = "32+ 212*-83 + 7";
    int in_a_word = 0;
    
    int i;
    char tmp[11];
    int tmp_count = 10;
    for (i = 0; i < size; i++) {
      
        if (line[i] >= '0' && line[i] <= '9') {
            if (in_a_word) {
                tmp[tmp_count--] = line[i];
            } else {
                in_a_word = 1;
                tmp[tmp_count--] = line[i];
            }
        } else {
            if(in_a_word){
               printf("N: %s\n", tmp);
            }
            in_a_word = 0;
            tmp_count = 10;

        }
    }

    int op;
   
    for (i = 0; i < 100; i++) {
        char ch = line[i];
        if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            operators[count++] = ch;
        }
    }

    for (i = 0; i < count; i++) {
        printf("%d\n", operators[i]);
    }

    return 0;
}

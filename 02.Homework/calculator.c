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
 * 
 */
int main() {
    char* line = NULL;
    size_t size = 0;
    int input_length = getline(&line, &size, stdin);
    
//    int in_a_word = 0;
//    
//    int i;
//    for (i = 0; i < size; i++) {
//        
//        if(line[i] >= '0' && line[i] <= '9'){
//            if(in_a_word) {
//                printf("%c", line[i]);
//            } else {
//                in_a_word = 1;
//                printf("\n%c", line[i]);
//                
//            }            
//        } else {
//            in_a_word = 0;
//        }
//    }
    int num1;
    char operator;
    int result = sscanf(line, "%d %c", &num1, &operator);
    while(result != NULL){
        sscanf(line, "%d %c", &num1, &operator);
        printf("%d %c\n", num1, operator);
    }
    return 0;
}

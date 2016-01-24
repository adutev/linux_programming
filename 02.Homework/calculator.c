#include <stdio.h>
#include <string.h>

int main(){
	int i = 0;
	int ch;
	char line[32];

	while((ch = getchar()) != EOF){
		if(ch != '\n'){
			printf("%c", ch);
		} else {
			break;
		}
	}
	return 0;
}

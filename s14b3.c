#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello world"; 
    for (int i = strlen(str); i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    
    return 0;
}

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char input[10];
    bool light;
    
    scanf("%s", input);
    
    light = strcmp(input, "true") == 0;
    
    printf("%s\n", light ? "On" : "Off");
    
    light = !light;
    
    printf("%s\n", light ? "On" : "Off");
    
    return 0;
}
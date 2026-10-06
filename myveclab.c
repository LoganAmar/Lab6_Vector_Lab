/**
* Logan Amar
* CPE 2600 Lab5
* myveclab.c
* Main source file
*/

#include <stdio.h>
#include <string.h>

void main(void){

    //char istring1[50];

    while(1){
        printf("myveclab> ");
        printf("test");

        char input[10];

        if (fgets(input, sizeof(input), stdin) != NULL) {
        
            char name;
            int x;
            int y;
            int z;

            int parsed = sscanf(input, " %c = %d %d %d", &name, &x, &y, &z);
        
            if (parsed == 4) {
                new_vector(name, x, y, z);
            }
        }
    }

}
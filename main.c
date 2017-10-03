#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char input[50];
    while(1) {
        printf("Enter DOS input: ");
        fgets(input, sizeof(input), stdin);
        printf("ECHO: %s", &input);

        char *command = strtok(input, " ");
        char *arg1 = strtok(NULL, " ");
        char *arg2 = strtok(NULL, " ");
        char *arg3 = strtok(NULL, " "); //should always be null
        // Keep printing commands while one of the
        // delimiters present in str[].
        //while (command != NULL)
        //{

                //1 arg
            if(strcmp(command, "cd")) {
                if(arg1 != NULL && arg2 == NULL) {
                    system(input);
                }
                else {
                    printf("Invalid input!");
                }
            }
                //0 or 1 arg
            else if(strcmp(command, "dir")) {
                if(arg1 == NULL) {
                    system("ls");
                }
                else if(arg2 == NULL) {

                }
                else {
                    printf("Invalid input!");
                }
            }
                //1 or 2 args
            else if(strcmp(command, "type")) {
                if(arg1 != NULL && arg3 == NULL) {
                    system(input);
                }
                else {
                    printf("Invalid input!");
                }
            }
                //1 arg
            else if(strcmp(command, "del")) {
                if(arg1 != NULL) {
                    system(input);
                }
                else {
                    printf("Invalid input!");
                }
            }
                //2 args
            else if(strcmp(command, "ren")) {
                if((arg1 != NULL && arg2 != NULL) && arg3 == NULL ) {
                    system(input);
                }
                else {
                    printf("Invalid input!");
                }
            }
                //2 args
            else if(strcmp(command, "copy")) {
                if((arg1 != NULL && arg2 != NULL) && arg3 == NULL ) {
                    system(input);
                }
                else {
                    printf("Invalid input!");
                }
            }


        printf("Press CTRL-C to exit\n");
        input[strlen(input) - 1] = '\0';

        }
    //}
    return 0;
}

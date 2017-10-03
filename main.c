#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char input[64];
    char *command;
    char *arg1;
    char *arg2;
    char *arg3;
    while(1) {
        printf("Enter DOS input: ");
        fgets(input, sizeof(input), stdin);
        printf("ECHO: %s", &input);
        input[strlen(input) - 1] = '\0';
        command = strtok(input, " ");
        arg1 = strtok(NULL, " ");
        arg2 = strtok(NULL, " ");
        arg3 = strtok(NULL, " "); //should always be null

        printf("Command: %s\n", command);
        printf("Command: %s\n", arg1);
        printf("Command: %s\n", arg2);
        printf("Command: %s\n", arg3);
        // Keep printing commands while one of the
        // delimiters present in str[].
        //while (command != NULL)
        //{

                //1 arg
                //cd foldername
            if(strcmp(input, "cd") == 0) {
                if(arg1 == NULL) {
                    printf("0 args\n");
                    system("cd");
                }
                else if(arg2 == NULL) {
                    printf("1 arg\n");
                    char out[64];
                    strcpy(out, "cd ");
                    strcat(out, arg1);
                    system(out);
                    system(input);
                }
                else {
                    printf("Invalid input!");
                }
            }
                //0 or 1 arg
            else if(strcmp(input, "dir") == 0) {
                if(arg1 == NULL) {
                    printf("0 args\n");
                    system("ls");
                }
                else if(arg2 == NULL) {
                    printf("1 arg\n");
                    char out[64];
                    strcpy(out, "ls ");
                    strcat(out, arg1);
                    system(out);
                }
                else {
                    printf("Invalid input!");
                }
            }

                //1 or 2 args
                //cat [OPTION]... [FILE]...
            else if(strcmp(input, "type")) {
                if(arg1 != NULL && arg2 == NULL) {
                    printf("1 arg\n");
                    char out[64];
                    strcpy(out, "cat ");
                    strcat(out, arg1);
                    system(out);
                }
                else if(arg2 != NULL && arg3 == NULL) {
                    printf("2 args\n");
                    char out[64];
                    strcpy(out, "cat ");
                    strcat(out, arg1);
                    strcat(out, arg2);
                    system(out);
                }
                else {
                    printf("Invalid input!");
                }
            }
                //1 arg
                //rm FILE...
            else if(strcmp(command, "del")) {
                if(arg1 != NULL && arg2 == NULL) {
                    printf("1 arg\n");
                    char out[64];
                    strcpy(out, "cat ");
                    strcat(out, arg1);
                    system(out);
                }
                else {
                    printf("Invalid input!");
                }
            }
                //2 args
                //rename directory1 directory2
            else if(strcmp(command, "ren")) {
                if((arg1 != NULL && arg2 != NULL) && arg3 == NULL ) {
                    printf("2 args\n");
                    char out[64];
                    strcpy(out, "mv ");
                    strcat(out, arg1);
                    strcat(out, arg2);
                    system(out);
                }
                else {
                    printf("Invalid input!");
                }
            }
                //2 args
            else if(strcmp(command, "copy")) {
                if((arg1 != NULL && arg2 != NULL) && arg3 == NULL ) {
                    printf("2 args\n");
                    char out[64];
                    strcpy(out, "cp ");
                    strcat(out, arg1);
                    strcat(out, arg2);
                    system(out);
                }
                else {
                    printf("Invalid input!");
                }
            }


        printf("Press CTRL-C to exit\n");


        }
    //}
    return 0;
}

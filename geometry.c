#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void correct_spelling(char* str, int max_symb)
{
    char check_str[] = {'c', 'i', 'r', 'c', 'l', 'e'};
    char object_str[max_symb];
    int i, j;
    for (i = 0; str[i] != '('; i++) {
        object_str[i] = str[i];
    }
    j = strcmp(object_str, check_str);
    if (j != 0) {
        printf("ERROR! Input is not correct\n");
        printf("\"%s\" Not found\nDid you mean \"circle\"?\n", object_str);
        exit(0);
    };

}
void cirlce_output(char* str)
{
    fputs(str, stdout);
}

int main()
{
    int max_symb = 40;
    FILE* mf;
    mf = fopen("geo.txt", "r");
    char sourse_str[max_symb];
    fgets(sourse_str, max_symb, mf);
    correct_spelling(sourse_str, max_symb);
    cirlce_output(sourse_str);
    return 0;
}

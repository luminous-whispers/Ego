#define _CRT_SECURE_NO_WARNINGS
/*notice: for my mentor group*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

void PrintWelcome( char *name ) {
    printf( "Hello,%s!\n Welcome to BUAA, Congratulation!!", name);
}

char my_mentor_group[10];

int main( int argc, char *argv[] ) {
    int i;
    strcpy( my_mentor_group, argv[1] );
    PrintWelcome( my_mentor_group );
    return 0;
}


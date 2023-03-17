// Ques : Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop. (Capital case)
#include<stdio.h>
int main(){
    int i = 'A';
    char c = 'A';
    while(i<='Z'){
        printf("ASCII value of %c is : %d\n",c,i);
        i++;
        c++;
    }
    return 0;
}
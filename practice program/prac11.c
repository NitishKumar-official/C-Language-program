#include<stdio.h>
int main(int argc, char const *argv[])
{
    int c,lower_case,upeer_case;
    printf("enter the character");
    scanf("%c",&c);
    lower_case=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    upeer_case=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(lower_case||upeer_case)
{printf(" %c the letter is vowel",c);}
else{printf(" %c the letter is consonent",c);}
    return 0;
}

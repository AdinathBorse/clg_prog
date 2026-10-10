#include<string.h>
#include<stdio.h>
#include<ctype.h>

// #include <stdio.h>
#include <stdlib.h>
// #include <ctype.h>
#include <stdbool.h>
// #include <string.h>
//  void replace(char str2[100])
//  {
//     int i;
//     char str1[100];
//     for(int i=0;i<strlen(str1)-1;i++)
//     {
//         if(str1[i]==' '){
//         str1[i]='*';}
//         if(islower(str1[i]))
// {        str1[i]=toupper(str1[i]);
// }        else
// {        str1[i]=tolower(str1[i]);
// }
//         if(isdigit(str1[i]))
// {        str1[i]='?';
// }  
//   }
//  }
// int main()
// {
//     char str2[100];
//     printf("enter the sentence");
//     scanf("%s",str2[100]);
//     // replace(str2);
//     printf("%s",str2);
//      printf("\n%s\n",str2); 

//     return 0; 
// }

void replace(char input[100])
{




// for(int i=0 ; i<strlen(input);i++)
// {
//  if(i = isdigit)
//  {
//     printf("?");
//  }
//  else if(i!=isdigit){
//     printf("not digit");
//  }454
int i;
    if (!isdigit(input[i])) {
            return false;
        }
 





return true;

}
 

int main() {
    char input[100];

    printf("Enter a string: ");
    scanf("%s",&input); // Read until newline character
    replace(input);
//    printf("%s",input);

    return 0;
}
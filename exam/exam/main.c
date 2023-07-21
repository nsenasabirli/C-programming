/*
#include <stdio.h>
#include <string.h>
int getSize (char *str) {
    return sizeof(str); }
int main(void) {
    char S1[30] = "I love playing soccer.";
    char S2[20] = "We are";
    printf("%d\n", strlen(S1));
    printf("%d\n", sizeof(S1));
    printf("%d\n", getSize(S1));
    strcpy(S1+15, "basketball");
    printf("%s\n", S1);
    printf("%d\n", strlen(S1));
    printf("%d\n", sizeof(S1));
    strncpy(S1, S2, strlen(S2));
    printf("%s\n", S1);
    printf("%d\n", strlen(S1));
    printf("%d\n", getSize(S2));
    printf("%d\n", sizeof(S2));
    S1[6] = '\0';
    printf("%s\n", S1);
    printf("%d\n", strlen(S1));
    return 0;
    
    


}
*/
/*
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[] = "Nahide Sena Sabırlı";
    char* p = (char*)0;
    int x=45;
    int *px = (int*)0;
    int *sx=&x;
    p=s;
    *p = 'X';
    printf("%s\n", s);
    p +=17;
    *p = 'R';
    printf("%s\n", s);
    printf("%d\n", *sx);
    printf("%d\n", *sx+5);
    printf("%d\n", *sx);
    px = sx;
    printf("%d\n", *px);
    *px = 83;
    printf("%d\n", x);
    printf("%d\n", *sx);
    return 0;
    
    
}
 */
#include <stdio.h>
#define SIZE 5

int main(void){
    int min;
    int list[5] = {1, 2, 3, 4, 5};
        printf("this is the smallest number in your array: %d\n", min);
    
    
    
}

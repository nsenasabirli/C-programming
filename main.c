
//  main.c
//  c programming
//
//  Created by Nahide Sena Sabırlı on 29.11.2021.
//

#include <stdio.h>

int main(void) {
   /* int integer1;
    int integer2;
    
    printf("Enter first integer value is = ");
    scanf("%d", &integer1);
    
    printf("Enter second integer value is = ");
    scanf("%d", &integer2);
    
    int sum;
    sum = integer1 + integer2;
    
    printf("sum is %d\n", sum);
    
    printf("enter two values and I will tell you\n");
    printf("the relasionships they satisfy: ");
    
    
    int num1;
    int num2;
    
    scanf("%d %d", &num1, &num2);
    if(num1 == num2) {
        printf("%d is equal to %d\n", num1, num2);
    }
    if(num1 < num2) {
        printf("%d is less than %d\n", num1, num2);
    }
    if(num1 > num2) {
        printf("%d is greater than %d\n", num1, num2);
    } */
    /*
    int a;
sena:
    printf("enter the value = ");
    scanf("%d", &a);
    switch(a){
        case 5:
            printf("value is 5\n");
            break;
        case 6:
            printf("value is 6\n");
            break;
        case 3:
            printf("value is 3\n");
            break;
        case 1:
            printf("value is 1\n");
            break;
        default:
            printf("please enter one of the 1, 5, 6, 3");
            goto sena;
            break;
    } */
     /*
    int kilo;
    float boy;
    int sonuc ;
    
    printf("kilonuzu girin = ");
    scanf("%d", &kilo);
    
    printf("boyunuzu girin = ");
    scanf("%f", &boy);
    
    sonuc = kilo / (boy * boy);
    printf("vucut kitle indeksiniz = %d\n", sonuc);
    
    if (sonuc < 20) {
        printf("zayifsiniz\n");
    }
    if ((sonuc > 20)) {
        printf("normalsiniz\n");
    }
    if (sonuc >= 25) {
        printf("normalsiniz\n");
    }
    if (sonuc > 25) {
        printf("obezsiniz\n");
    }
     */
  /*
    int numbers[5] = {1, 2, 3, 4, 5};
    printf("1.number: %d\n", numbers[0]);

    printf("5.number: %d\n", numbers[4]);
    
    float sayilar[5] = {0.8, 2.2, 0.32, 0.4, 0.5};
    float toplam = 0;
    for(int i = 0; i<5; i++){
        toplam += sayilar[i];
    }
    printf("sayiların toplami: %f\n", toplam);
    */
    /*
    char nss[3] = {'a', 'b', 'c'};
    char x;
    printf("bir karakter girin = ");
    scanf("%c", &x);
    
    int sena = 0;
    int sirasi;
    
    for(int a = 0; a<3; a++){
        if (x == nss[a]){
            sena=1;
            sirasi = a;
        }
    }
    if (sena == 1) {
        printf("bulundu\n");
        printf("sirasi = %d\n", sirasi);
    }
        else {
                printf("bulunamadı\n");
                
            }
          */
  /*
    int a[5];
    a[0] = 1;
    printf("%d", a[0]);
    for(int i = 1; i < 5; i++){
        a[i] = a[i-1]*2;
        printf("%d", a[i]);
    }
        
    */
     /*
    int a = 5;
    int *ptr;
    ptr = &a;
    
    printf("a'nın adresi: %p\n değer: %d\n", &a, a);
    printf("a'nın adresi: %p\n değer: %d\n", ptr, *ptr);
    */
    /*
    int a = 5, b;
    int *ptr;
    ptr = &a;
    
    b = *ptr + 10;
    printf("b: %d\n", b);
    */
    /*
    char m[8] = "merhaba";
    char *pm = &m[0];
    printf("%.15s \t%.15s \t%.15s\t", &m[0], m, pm);
    
    int a[2][3] = {{1,2,3}, {10,20,30}};
    int *b[2];
    
    b[0] = a[0];
    b[1] = a[1];
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
    printf("%d\t ", b[i][j]);
        }
    }
    
    int x = 33;
    float y = 12.4;
    char c = 'a';
    void *ptr;
    
    ptr = &x;
    printf("pointer değeri : %d\n", *((int *)ptr));
    ptr = &y;
    printf("pointer değeri : %f\n", *((float*)ptr));
    ptr = &c;
    printf("pointer değeri : %c\n", *((char*)ptr));
  */
    
    /*
    int x[4];
    
    for(int i=0; i<4; i++){
        printf("&x[%d] = %p\n", i, &x[i]);
    }
        printf("address of array: x, %p\n", x);
    */
  
    int x[5] = {1, 2, 3, 4, 5};
    int *ptr;

    ptr = &x[2];
    printf("*ptr = %d \n ", *ptr);
    printf("(*ptr+1) = %d \n", (*ptr+1));
    printf("(*ptr-1) = %d \n", (*ptr-1));
    
    
    
}


    
    

    

 
    
    


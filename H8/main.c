//
//  main.c
//  H8
//
//  Created by my computer on 22.03.2023.
//

#include <stdio.h>
int func(int sayi,int kontrol);
int main(int argc, const char * argv[]) {
    // STRONG NUMS
    int sayi;
    printf("bir sayi giriniz");
    scanf("%d",&sayi);
   int k= func(sayi,sayi);
    if(k==1){
        printf("strongdur");
    }else{
        printf("strong değildir");
    }
    
    return 0;
}
int func(int sayi,int kontrol){
    static  int total =0;
    
    int us=1;
    if(sayi<=0){
        if(total==kontrol){
            return 1;
        }
        else{
            return 0;
        }
    }
    for(int i = sayi%10;i>0;i--){
        us*=i;
        printf("%d\n",us);
    }
    total+=us;
    printf("%d\n",total);
    return func(sayi/10, kontrol);
    
    
}

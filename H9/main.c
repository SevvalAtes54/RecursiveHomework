//
//  main.c
//  H9
//
//  Created by my computer on 23.03.2023.
//

#include <stdio.h>
int func(int sayi);
int main(int argc, const char * argv[]) {
    //o find the sum of the series 1 +11 + 111 + 1111 + .. n terms
    int sayi;
    printf("bir n degeri giriniz");
    scanf("%d",&sayi);
    int k = func(sayi);
    printf("%d",k);
    
    return 0;
}
int func(int sayi){
    static int total =0;
    int sum=0;
    if(sayi==0){
        return total;
    }
    for(int i=0;i<sayi;i++){
        sum=(10*sum)+1;
    }
    printf("%d\n",sum);
    total+=sum;
    
    return func(sayi-1);
    
}

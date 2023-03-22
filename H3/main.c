//
//  main.c
//  H3
//
//  Created by my computer on 22.03.2023.
//

#include <stdio.h>
#include <math.h>
int func(int sayi,int sayi2);
int main(int argc, const char * argv[]) {
    // Draw a flow chart to swap first and last digits of a number.
    int sayi;
    printf("Bir sayi giriniz");
    scanf("%d",&sayi);
    int k =func(sayi,sayi);
    printf("%d",k);
    
    return 0;
}
int func(int sayi,int sayi2){
    int son;
    static int toplam;
    if(sayi==sayi2){
        son = sayi%10;
    }
    if(sayi<10 && sayi>=0){
        return sayi2-sayi*pow(10.0, toplam+2)+sayi-son+son*pow(10.0, toplam+2);
        
        
    }
    toplam+=1;
    return sayi/10;
    
    
    
    
}

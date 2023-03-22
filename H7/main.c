//
//  main.c
//  H7
//
//  Created by my computer on 22.03.2023.
//

#include <stdio.h>
int func(int sayi,int kontrol);
int main(int argc, const char * argv[]) {
    // perfect number
    int sayi;
    printf("bir sayi girin");
    scanf("%d",&sayi);
   int k = func(sayi,sayi-1);
    if(k==1){
        printf("perfect");
    }
    else{
        printf("perfect değil");
    }
    return 0;
}

int func(int sayi,int kontrol){
  
    static int total = 0;
    if(kontrol==0){
        if(total==sayi){
            return 1;
        }else{
            return 0;
        }
        
    }
    if(sayi%kontrol==0){
    
        total += kontrol;
        return func(sayi,kontrol-1) ;
    }
    else{
        return func(sayi,kontrol-1) ;
    }
    
    
    
    
}

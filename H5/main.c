//
//  main.c
//  H5
//
//  Created by my computer on 22.03.2023.
//

#include <stdio.h>
int func(int sayi);
int main(int argc, const char * argv[]) {
    //  find the sum of the first 50 natural numbers.
    int sayi = 50;
   int k= func(sayi);
    printf("%d",k);
    return 0;
}
int func(int sayi){
    if(sayi<=0){
        return 0;
    }
    return sayi+func(sayi-1);
    
}

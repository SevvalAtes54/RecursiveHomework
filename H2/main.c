//
//  main.c
//  H2
//
//  Created by my computer on 22.03.2023.
//

#include <stdio.h>
int func(int sayi,int sayi2);
int main(int argc, const char * argv[]) {
    // Draw a flow chart to print multiplication table of any number.
    int sayi;
    printf("bir sayi giriniz");
    scanf("%d",&sayi);
    func(sayi,sayi);
    
    
    return 0;
}
int func(int sayi,int sayi2){
   
    if(sayi<=0){
        return 0;
    }
    
    printf("%d\n",sayi2*sayi);
        return func(sayi-1,sayi2);
       
        
   

    
}

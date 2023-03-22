//
//  main.c
//  H6
//
//  Created by my computer on 22.03.2023.
//

#include <stdio.h>
int func(int sayi,int kontrol);
int main(int argc, const char * argv[]) {
    // armstrong numbers
    int sayi;
    printf("sayi gir");
    scanf("%d",&sayi);
    
    int k =func(sayi,sayi);
    if(k ==1){
        printf("armstrongdur");
    }
    else{
        printf("armstrong değildir");
    }
    
    return 0;
}
int func(int sayi,int kontrol){
    static int total =0;
  int us =1;
    if(sayi<=0){
        if(total==kontrol){
            return 1;
        }
        else{
            return 0;
        }
        
        
    }
    int i =0;
    while ( i<3) {
        us *= sayi%10;
        i++;
    }
    printf("%d\n",us);
    total += us;
    printf("%d\n",total);
    return func(sayi/10,kontrol);
    
    
    
    
}

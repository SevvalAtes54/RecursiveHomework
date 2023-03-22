//
//  main.c
//  H4
//
//  Created by my computer on 22.03.2023.
//

#include <stdio.h>
int func (int sayi);
int main(int argc, const char * argv[]) {
    // PrintHelloWorld10times
   
    func(10);
    return 0;
}
int func (int sayi){
    if(sayi<=0){
        return 0;
    }
    printf("%d Hello, World!\n",sayi);
    return func(sayi-1);
    
}

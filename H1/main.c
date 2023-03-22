//
//  main.c
//  H1
//
//  Created by my computer on 22.03.2023.
//

#include <stdio.h>
int elemanBul(int dizi[],int sayi,int gelen);
int main(int argc, const char * argv[]) {
    // dizideki en büyük sayıyı bulan program
    int dizi[5]= {23,34,12,45,1};
    int k =elemanBul(dizi,5,0);
    printf("%d",k);
    return 0;
    
}

int elemanBul(int dizi[],int sayi,int gelen){
    static int enbuyuk;
    if(gelen== sayi){
        return enbuyuk;
    }
    if(dizi[gelen]>enbuyuk){
        enbuyuk = dizi[gelen];
        return elemanBul(dizi, sayi,gelen+1);
    }
    else{
        return elemanBul(dizi,sayi,gelen+1);
    }
    
    
}


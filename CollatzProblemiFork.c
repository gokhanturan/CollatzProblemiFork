#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>

//Collatz Problemi Fork İle Çözümü

int main(){
    unsigned int pid = fork();
    if(pid){
    printf("Fork ID : %u\n" ,pid);    
    
    int sayi, sonuc;
    printf("Bir Sayı Giriniz..: ");
    scanf("%d", &sayi);
    if(sayi < 0){
        printf("Lütfen Pozitif Bir Sayi Giriniz..: ");
    }

    if(sayi >= 0){
        
        while(1){
        if(sayi % 2 == 0){
             sayi = sayi / 2 ;
             printf("%d\n" ,sayi);
             if(sayi == 1){
                 break;
                 }   
        }
        else{
             sayi = sayi * 3 + 1;
             printf("%d\n" ,sayi); 
             if(sayi == 1){
                break;
             } 
          }
        }
        
    }
}
}
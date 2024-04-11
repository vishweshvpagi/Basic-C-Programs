#include <stdio.h>
#include <windows.h>


int main(){
    printf("set the clock:H,M,S");
    int h , m, s;
    int d=1000;
    scanf("%d%d%d",&h,&m,&s);

    if(h>12||m>60||s>60){
        printf("invalid inputs");
        exit (0);
    }
    
        while(1){
            s++;
        if(s>59){
            s=0;
            m++;
        }
        if(m>59){
            m=0;
            h++;
        }
        if(h>12){
            h=1;

        }
        
        printf("\n Clock");
        printf("\n %02d:%02d:%-2d",h,m,s);
        Sleep(d);
        system("cls");
}
}
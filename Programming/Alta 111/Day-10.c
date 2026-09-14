#include <stdio.h>
int main()
{
    int day,month,year;
    int leap;
    int max;
    scanf("%d %d %d",&day,&month,&year);
    if(year < 1 || month < 1 || month > 12){
        printf("Invalid Input");
    }
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        leap = 1;
    }
    if(month==2){
        if(leap){
            max = 29;
        }
        else{
            max = 28;
        }
    }
    else if(month==4 || month==6 || month==9 || month==11){
        max = 30;
    }
    else{
        max = 31;
    }
    if(day>=1 && day <= max){
        printf("Valid Date");
    }
    else{
        printf("Invalid Date");
    }
}
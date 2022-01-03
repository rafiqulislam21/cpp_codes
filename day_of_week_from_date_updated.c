#include<stdio.h>

int isLeapYear(int year){

    if((year%4 == 0) && ((year%400 == 0) || (year%100 != 0))){
        //if leap year return 1
        return 1;
    } else {
        //if not leap year return 0
        return 0;
    }
}

int getDaysInMonth(int month, int year){
    int days = 0;

    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
        days = 31;
    }else if(month==4 || month==6 || month==9 || month==11){
        days = 30;
    }else if(month==2){
        if(isLeapYear(year) == 1){
            days = 29;
        }else{
            days = 28;
        }
    }

    return days;
}


int getTotalDays (int year, int month, int day) {
    int firstYear = 1584, firstMonth = 1, firstDay = 1;
    int days = 0;

    for(int yr = firstYear; yr <= year; yr++) {
        if(yr == year){
            //if given year is the current year of the loop
            for(int mn = 1; mn < month; mn++){
                days += getDaysInMonth(mn, yr);
            }
            //adding given month's days with total days
            days = days+day;
        }else{
            for(int mn = 1; mn <= 12; mn++){
                days += getDaysInMonth(mn, yr);
            }
        }
    }

    return days;
}

int getDayOfWeek(int year, int month, int day){
    int totalDays = getTotalDays(year, month, day);
    int weekDay = (totalDays%7)-1;
    //printf("days: %d", weekDay);

  return weekDay;
}

int main(){

    int y,m,d;

    printf("Enter date(yyyy-mm-dd): ");
    scanf("%d-%d-%d", &y,&m,&d);
    int day = getDayOfWeek(y, m, d);

    if(day == 0 ){
        printf("\nSunday\n");
    }else if(day == 1 ){
        printf("\nMonday\n");
    }else if(day == 2 ){
        printf("\nTuesday\n");
    }else if(day == 3 ){
        printf("\nWednesday\n");
    }else if(day == 4 ){
        printf("\nThursday\n");
    }else if(day == 5 ){
        printf("\nFriday\n");
    }else if(day == 6 ){
        printf("\nSaturday\n");
    }

    return 0;
}

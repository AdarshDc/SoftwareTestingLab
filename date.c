#include <stdio.h>

int check(int day, int month) {
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 31)
        return 1;
    else
        return 0;
}

int isLeap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int day, month, year, tomm_day, tomm_month, tomm_year;
    char flag;
    
    do {
        flag = 'y';
        printf("Enter today's date in the format dd mm yyyy: ");
        scanf("%d%d%d", &day, &month, &year);
        
        if (day < 1 || day > 31) {
            printf("Invalid day value. Day should be in the range 1...31.\n");
            flag = 'n';
        }
        
        if (month < 1 || month > 12) {
            printf("Invalid month value. Month should be in the range 1...12.\n");
            flag = 'n';
        } else if (check(day, month)) {
            printf("Invalid day value. For the given month, day should be in the range day <= 30.\n");
            flag = 'n';
        }
        
        if (year <= 1812 || year > 2013) {
            printf("Invalid year value. Year should be in the range 1812...2013.\n");
            flag = 'n';
        }
        
        if (month == 2) {
            if (isLeap(year) && day > 29) {
                printf("Invalid date input for a leap year.\n");
                flag = 'n';
            } else if (!isLeap(year) && day > 28) {
                printf("Invalid date input for a non-leap year.\n");
                flag = 'n';
            }
        }
    } while (flag == 'n');
    
    tomm_day = day + 1;
    tomm_month = month;
    tomm_year = year;
    
    if (tomm_day > 31) {
        tomm_day = 1;
        tomm_month++;
        
        if (tomm_month > 12) {
            tomm_month = 1;
            tomm_year++;
        }
    }
    if(tom_year>2012)
        printf("The next day is: %d %d %d\nYear is greater than 2012", tomm_day, tomm_month, tomm_year);
    else
        printf("The next day is: %d %d %d\n", tomm_day, tomm_month, tomm_year);
    return 0;
}

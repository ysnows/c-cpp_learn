#include <stdio.h>

enum MONTH {
    JANUARY,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOMBER,
    NOVEMBER,
    DECEMBER
};


enum DAY {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATUREDAY,
    SUNDAY,
};


void testEnum() {

    enum DAY day;

    printf("请输入今天周几？: (1. monday, 2. tuesday, 3. wednesday, 4. thursday, 5. friday, 6. saturday, 7. sunday): ");
    scanf("%d", &day);

    switch (day) {
        case MONDAY:
            printf("today is 星期%d", day);
            break;
        case TUESDAY:
            printf("today is 星期%d", day);
            break;
        default:
            break;
    }

}




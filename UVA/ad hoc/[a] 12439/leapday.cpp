#include <cstdio>
#include <cstring>
// #include "util.cpp"

using namespace std;

bool isBeforeOrOnFeb29(const char* month, int day) {

    if (strcmp(month, "January") == 0) {
        return true;
    }
    if (strcmp(month, "February") == 0 && day <= 29) {
        return true;
    }
    return false;
}

bool isOnOrAfterFeb29(const char* month, int day) {
    if (strcmp(month, "January") == 0) {
        return false;
    }
    if (strcmp(month, "February") == 0 && day < 29) {
        return false;
    }
    return true;
}

bool isLeapYear(long long year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

long long countLeapYearFromYear1(long long year) {
    long long ans = 0;

    ans += year/400;
    ans += year/4;
    ans -= year/100;

    return ans;
}

long long countLeapYearsInRangeInclusive(long long year1, long long year2) {
    long long ans = 0;

    ans += countLeapYearFromYear1(year2) - countLeapYearFromYear1(year1);

    if(isLeapYear(year1)) {
        ans += 1;
    }

    return ans;
}


int main() {

    int testcases;
    long long ans, startYear, endYear;

    long long day1, day2, year1, year2;
    char month1[20], month2[20];

    scanf("%d", &testcases);

    for(int i = 1; i <= testcases; i++) {
        scanf("%s %lld, %lld\n", month1, &day1, &year1);
        scanf("%s %lld, %lld\n", month2, &day2, &year2);

        // printf("%s %lld, %lld\n", month1, day1, year1);
        // printf("%s %lld, %lld\n", month2, day2, year2);


        ans = 0;
        //if start year is not before or on feb 29 
        // then we can ignore that year
        if(isBeforeOrOnFeb29(month1, day1)) {
            startYear = year1;
        } else {
            startYear = year1 + 1;
        }

        //if end year is not on or after feb 29
        // then we can ignore that year
        if(isOnOrAfterFeb29(month2, day2)) {
            endYear = year2;
        } else {
            endYear = year2 - 1;
        }

        // edge case where the start date is after feb 29 
        // and the end date is before next year's feb 29
        if(startYear > endYear) {
            printf("Case %d: 0\n", i);
        } else {
            printf("Case %d: %lld\n", i, countLeapYearsInRangeInclusive(startYear, endYear));
        }


    }

    return 0;
}

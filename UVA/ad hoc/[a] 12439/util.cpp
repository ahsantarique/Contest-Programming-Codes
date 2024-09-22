#include <cstring>

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
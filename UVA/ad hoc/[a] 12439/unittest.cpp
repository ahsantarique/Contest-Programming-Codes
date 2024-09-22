#include <cassert>
#include "util.cpp"

using namespace std;

void test_isBeforeOrOnFeb29() {
    assert(isBeforeOrOnFeb29("January", 31) == true);
    assert(isBeforeOrOnFeb29("February", 28) == true);
    assert(isBeforeOrOnFeb29("February", 29) ==  true);
    assert(isBeforeOrOnFeb29("March", 1) == false);
}

void test_isOnOrAfterFeb29() {
    assert(isOnOrAfterFeb29("January", 31) == false);
    assert(isOnOrAfterFeb29("February", 28) ==  false);
    assert(isOnOrAfterFeb29("February", 29) ==  true);
    assert(isOnOrAfterFeb29("March", 1) == true);
}

void test_isLeapYear() {
    assert(isLeapYear(1900) == false);
    assert(isLeapYear(1904) == true);
    assert(isLeapYear(2000) == true);
    assert(isLeapYear(2e9) == true);
}

void test_countLeapYearFromYear1() {
    assert(countLeapYearFromYear1(1) == 0);
    assert(countLeapYearFromYear1(3) == 0);
    assert(countLeapYearFromYear1(4) == 1);
    assert(countLeapYearFromYear1(5) == 1);
    assert(countLeapYearFromYear1(8) == 2);
    assert(countLeapYearFromYear1(100) == 24);
    assert(countLeapYearFromYear1(400) == 97);

    assert(countLeapYearFromYear1(2011) + 1  == countLeapYearFromYear1(2012));
    assert(countLeapYearFromYear1(2012) == countLeapYearFromYear1(2013));
    assert(countLeapYearFromYear1(2012) ==  countLeapYearFromYear1(2015));
    assert(countLeapYearFromYear1(2012) + 1 ==  countLeapYearFromYear1(2016));
    assert(countLeapYearFromYear1(2e9) == countLeapYearFromYear1(2e9 + 1));

    assert(countLeapYearFromYear1(2004) + 1 ==  countLeapYearFromYear1(2011));
    assert(countLeapYearFromYear1(2004) + 2 ==  countLeapYearFromYear1(2012));
    assert(countLeapYearFromYear1(2004) + 2 ==  countLeapYearFromYear1(2013));
    assert(countLeapYearFromYear1(2004) + 2 ==  countLeapYearFromYear1(2014));
    assert(countLeapYearFromYear1(2004) + 2 ==  countLeapYearFromYear1(2015));
    assert(countLeapYearFromYear1(2004) + 3 ==  countLeapYearFromYear1(2016));
}

void test_countLeapYearsInRangeInclusive() {
    assert(countLeapYearsInRangeInclusive(1,1) == 0);
    assert(countLeapYearsInRangeInclusive(1,4) == 1);
    assert(countLeapYearsInRangeInclusive(4,4) == 1);
    assert(countLeapYearsInRangeInclusive(5,5) == 0);
    assert(countLeapYearsInRangeInclusive(5,7) == 0);
    assert(countLeapYearsInRangeInclusive(5,8) == 1);


    assert(countLeapYearsInRangeInclusive(1896,1900) == 1);
    assert(countLeapYearsInRangeInclusive(1897,1900) == 0);
    assert(countLeapYearsInRangeInclusive(1898,1900) == 0);
    assert(countLeapYearsInRangeInclusive(1899,1900) == 0);
    assert(countLeapYearsInRangeInclusive(1900,1900) == 0);

    assert(countLeapYearsInRangeInclusive(1896,1897) == 1);
    assert(countLeapYearsInRangeInclusive(1896,1898) == 1);
    assert(countLeapYearsInRangeInclusive(1896,1899) == 1);
    assert(countLeapYearsInRangeInclusive(1896,1901) == 1);
    assert(countLeapYearsInRangeInclusive(1896,1902) == 1);
    assert(countLeapYearsInRangeInclusive(1896,1903) == 1);
    assert(countLeapYearsInRangeInclusive(1896,1904) == 2);

    assert(countLeapYearsInRangeInclusive(1899,1900) == 0);
    assert(countLeapYearsInRangeInclusive(1899,1901) == 0);
    assert(countLeapYearsInRangeInclusive(1899,1902) == 0);
    assert(countLeapYearsInRangeInclusive(1899,1903) == 0);
    assert(countLeapYearsInRangeInclusive(1899,1904) == 1);


    assert(countLeapYearsInRangeInclusive(2000,2000) == 1);

    assert(countLeapYearsInRangeInclusive(2003, 2013) == 3);
    assert(countLeapYearsInRangeInclusive(2003, 2013) == 3);
    assert(countLeapYearsInRangeInclusive(2003, 2015) == 3);
    assert(countLeapYearsInRangeInclusive(2004, 2012) == 3);
    assert(countLeapYearsInRangeInclusive(2004, 2013) == 3);

    assert(countLeapYearsInRangeInclusive(2005, 2012) == 2);
    assert(countLeapYearsInRangeInclusive(2006, 2012) == 2);
    assert(countLeapYearsInRangeInclusive(2007, 2012) == 2);
    assert(countLeapYearsInRangeInclusive(2008, 2012) == 2);
    assert(countLeapYearsInRangeInclusive(2009, 2012) == 1);
    assert(countLeapYearsInRangeInclusive(2010, 2012) == 1);
    assert(countLeapYearsInRangeInclusive(2011, 2012) == 1);
    assert(countLeapYearsInRangeInclusive(2012, 2012) == 1);

    assert(countLeapYearsInRangeInclusive(2e9, 2e9) == 1);
}

int main() {
    test_isBeforeOrOnFeb29();
    test_isOnOrAfterFeb29();
    test_isLeapYear();
    test_countLeapYearFromYear1();
    test_countLeapYearsInRangeInclusive();
}

import math
import util

# Assuming the following methods were previously defined and converted:

def is_before_or_on_feb29(month: str, day: int) -> bool:
    if month == "January":
        return True
    if month == "February" and day <= 29:
        return True
    return False

def is_on_or_after_feb29(month: str, day: int) -> bool:
    if month == "January":
        return False
    if month == "February" and day < 29:
        return False
    return True

def is_leap_year(year: int) -> bool:
    return (year % 400 == 0) or (year % 4 == 0 and year % 100 != 0)

def count_leap_year_from_year_1(year: int) -> int:
    ans = 0
    ans += year // 400
    ans += year // 4
    ans -= year // 100
    return ans

def count_leap_years_in_range_inclusive(year1: int, year2: int) -> int:
    ans = count_leap_year_from_year_1(year2) - count_leap_year_from_year_1(year1)
    if is_leap_year(year1):
        ans += 1
    return ans

# Now translating the test functions:

def test_is_before_or_on_feb29():
    assert is_before_or_on_feb29("January", 31) == True
    assert is_before_or_on_feb29("February", 28) == True
    assert is_before_or_on_feb29("February", 29) == True
    assert is_before_or_on_feb29("March", 1) == False

def test_is_on_or_after_feb29():
    assert is_on_or_after_feb29("January", 31) == False
    assert is_on_or_after_feb29("February", 28) == False
    assert is_on_or_after_feb29("February", 29) == True
    assert is_on_or_after_feb29("March", 1) == True

def test_is_leap_year():
    assert is_leap_year(1900) == False
    assert is_leap_year(1904) == True
    assert is_leap_year(2000) == True
    assert is_leap_year(int(2e9)) == True

def test_count_leap_year_from_year_1():
    assert count_leap_year_from_year_1(1) == 0
    assert count_leap_year_from_year_1(3) == 0
    assert count_leap_year_from_year_1(4) == 1
    assert count_leap_year_from_year_1(5) == 1
    assert count_leap_year_from_year_1(8) == 2
    assert count_leap_year_from_year_1(100) == 24
    assert count_leap_year_from_year_1(400) == 97

    assert count_leap_year_from_year_1(2011) + 1 == count_leap_year_from_year_1(2012)
    assert count_leap_year_from_year_1(2012) == count_leap_year_from_year_1(2013)
    assert count_leap_year_from_year_1(2012) == count_leap_year_from_year_1(2015)
    assert count_leap_year_from_year_1(2012) + 1 == count_leap_year_from_year_1(2016)
    assert count_leap_year_from_year_1(int(2e9)) == count_leap_year_from_year_1(int(2e9) + 1)

    assert count_leap_year_from_year_1(2004) + 1 == count_leap_year_from_year_1(2011)
    assert count_leap_year_from_year_1(2004) + 2 == count_leap_year_from_year_1(2012)
    assert count_leap_year_from_year_1(2004) + 2 == count_leap_year_from_year_1(2013)
    assert count_leap_year_from_year_1(2004) + 2 == count_leap_year_from_year_1(2014)
    assert count_leap_year_from_year_1(2004) + 2 == count_leap_year_from_year_1(2015)
    assert count_leap_year_from_year_1(2004) + 3 == count_leap_year_from_year_1(2016)

def test_count_leap_years_in_range_inclusive():
    assert count_leap_years_in_range_inclusive(1, 1) == 0
    assert count_leap_years_in_range_inclusive(1, 4) == 1
    assert count_leap_years_in_range_inclusive(4, 4) == 1
    assert count_leap_years_in_range_inclusive(5, 5) == 0
    assert count_leap_years_in_range_inclusive(5, 7) == 0
    assert count_leap_years_in_range_inclusive(5, 8) == 1

    assert count_leap_years_in_range_inclusive(1896, 1900) == 1
    assert count_leap_years_in_range_inclusive(1897, 1900) == 0
    assert count_leap_years_in_range_inclusive(1898, 1900) == 0
    assert count_leap_years_in_range_inclusive(1899, 1900) == 0
    assert count_leap_years_in_range_inclusive(1900, 1900) == 0

    assert count_leap_years_in_range_inclusive(1896, 1897) == 1
    assert count_leap_years_in_range_inclusive(1896, 1898) == 1
    assert count_leap_years_in_range_inclusive(1896, 1899) == 1
    assert count_leap_years_in_range_inclusive(1896, 1901) == 1
    assert count_leap_years_in_range_inclusive(1896, 1902) == 1
    assert count_leap_years_in_range_inclusive(1896, 1903) == 1
    assert count_leap_years_in_range_inclusive(1896, 1904) == 2

    assert count_leap_years_in_range_inclusive(1899, 1900) == 0
    assert count_leap_years_in_range_inclusive(1899, 1901) == 0
    assert count_leap_years_in_range_inclusive(1899, 1902) == 0
    assert count_leap_years_in_range_inclusive(1899, 1903) == 0
    assert count_leap_years_in_range_inclusive(1899, 1904) == 1

    assert count_leap_years_in_range_inclusive(2000, 2000) == 1

    assert count_leap_years_in_range_inclusive(2003, 2013) == 3
    assert count_leap_years_in_range_inclusive(2003, 2015) == 3
    assert count_leap_years_in_range_inclusive(2004, 2012) == 3
    assert count_leap_years_in_range_inclusive(2004, 2013) == 3

    assert count_leap_years_in_range_inclusive(2005, 2012) == 2
    assert count_leap_years_in_range_inclusive(2006, 2012) == 2
    assert count_leap_years_in_range_inclusive(2007, 2012) == 2
    assert count_leap_years_in_range_inclusive(2008, 2012) == 2
    assert count_leap_years_in_range_inclusive(2009, 2012) == 1
    assert count_leap_years_in_range_inclusive(2010, 2012) == 1
    assert count_leap_years_in_range_inclusive(2011, 2012) == 1
    assert count_leap_years_in_range_inclusive(2012, 2012) == 1

    assert count_leap_years_in_range_inclusive(int(2e9), int(2e9)) == 1

# Main function to run all tests
if __name__ == "__main__":
    test_is_before_or_on_feb29()
    test_is_on_or_after_feb29()
    test_is_leap_year()
    test_count_leap_year_from_year_1()
    test_count_leap_years_in_range_inclusive()

    print("All tests passed!")

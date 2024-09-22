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

def count_leap_year_from_year1(year: int) -> int:
    ans = 0
    ans += year // 400
    ans += year // 4
    ans -= year // 100
    return ans

def count_leap_years_in_range_inclusive(year1: int, year2: int) -> int:
    ans = count_leap_year_from_year1(year2) - count_leap_year_from_year1(year1)
    if is_leap_year(year1):
        ans += 1
    return ans

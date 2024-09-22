from datetime import datetime
# import util

FIRST_DAY = datetime(1998, 6, 25)
DAYS_IN_YEAR = 365
DAYS_IN_LEAP_YEAR = 366

def parse_date(input_string):
    # Split the string by the hyphen
    year_str, month_str, day_str = input_string.split('-')

    # Convert to integers
    year = int(year_str)
    month = int(month_str)
    day = int(day_str)
    return year, month, day

def is_leap_year(year: int) -> bool:
    return (year % 400 == 0) or (year % 4 == 0 and year % 100 != 0)

def get_positive_year_and_days(days):
    year = 1
    while(days > 0):
        days_in_that_year = DAYS_IN_YEAR
        if(is_leap_year(year)):
            days_in_that_year = DAYS_IN_LEAP_YEAR

        if(days <= days_in_that_year):
            break
        year += 1
        days -= days_in_that_year
    return year, days

def get_month_and_days_in_month(days_in_period):
    MONTHS = ["Sun", "Water", "Forest", "Mountains", "Money"]
    month = MONTHS[(days_in_period - 1) // 36] # 36th day is still the same month
    days_in_month = days_in_period % 36
    if(days_in_month == 0):
        days_in_month = 36
    return month, days_in_month

def get_week_and_days_in_week(days_in_month):
    WEEKS = ["First", "Second", "Third", "Fourth", "Fifth", "Sixth"]
    week = WEEKS[(days_in_month - 1) // 6] # 6th day is still the same week
    days_in_week = days_in_month % 6
    if(days_in_week == 0):
        days_in_week = 6
    return week, days_in_week

def get_week_and_days_from_days_in_current_year(days_in_current_year):
    if(days_in_current_year > 360):
        days_in_week = days_in_current_year - 360
        return "Feast {}".format(days_in_week)

    period = "Gill"
    days_in_period = days_in_current_year
    if (days_in_current_year > 180):
        days_in_period = days_in_current_year - 180
        period = "Bates"
    
    month, days_in_month = get_month_and_days_in_month(days_in_period)
    week, days_in_week = get_week_and_days_in_week(days_in_month)
    return "{}-{}-{}-{}".format(period, month, week, days_in_week)

def get_positive_date(days):
    year, days_in_current_year = get_positive_year_and_days(days)
    week_and_days_in_week = get_week_and_days_from_days_in_current_year(days_in_current_year)
    return "{}-{}".format(week_and_days_in_week, year)

def get_negative_year_and_days(days):
    year = 0
    while(days <= 0):
        days_in_that_year = DAYS_IN_YEAR
        if(is_leap_year(year + 1)): # look at the previous year
            days_in_that_year = DAYS_IN_LEAP_YEARgit
        year += 1
        days += days_in_that_year
    return year, days

def get_negative_date(days):
    year, days_in_current_year = get_negative_year_and_days(days)
    week_and_days_in_week = get_week_and_days_from_days_in_current_year(days_in_current_year)
    return "{}-{}bd".format(week_and_days_in_week, year)

def main():
    while (True):
        try:
            input_string = input()
            if(input_string == "END"):
                break
            year, month, day = parse_date(input_string)
            old_date = datetime(year,month, day)
            diff_datetime = old_date - FIRST_DAY

            # print(diff_datetime.days)
            if(diff_datetime.days >= 0):
                print(get_positive_date(diff_datetime.days + 1))
            else:
                print(get_negative_date(diff_datetime.days + 1))
        except:
            print("Enter date in old format")
            continue

if __name__ == "__main__":
    main()
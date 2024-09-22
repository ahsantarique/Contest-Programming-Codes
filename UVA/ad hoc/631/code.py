from datetime import datetime

FIRST_DAY = datetime(1998, 6, 25)

def parse_date(input_string):
    # Split the string by the hyphen
    year_str, month_str, day_str = input_string.split('-')

    # Convert to integers
    year = int(year_str)
    month = int(month_str)
    day = int(day_str)

    return year, month, day


def main():
    while (True):
        try:
            input_string = input()
            if(input_string == "END"):
                break
            year, month, day = parse_date(input_string)
            old_date = datetime(year,month, day)
            diff_datetime = old_date - FIRST_DAY
            diff_days = diff_datetime.days
            print(diff_days)
        except:
            print("Enter date in old format")
            continue

if __name__ == "__main__":
    main()
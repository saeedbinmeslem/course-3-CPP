def MonthOfYear(month):
    while True:
        if month == 1:
            return "it is a January"
        elif month == 2:
            return "it is a February"
        elif month == 3:
            return "it is March"
        elif month == 4:
            return "it is April"
        elif month == 5:
            return "it is May"
        elif month == 6:
            return "it is June"
        elif month == 7:
            return "it is July"
        elif month == 8:
            return "it is August"
        elif month == 9:
            return "it is September"
        elif month == 10:
            return "it is October"
        elif month == 11:
            return "it is November"
        elif month == 12:
            return "it is December"
        else:
            print("Wrong month, please Enter the month again: ")    
            month = int(input("1: January\n2: February\n3: March\n4: April\n5: May\n6: June\n7: July\n8: August\n9:september\n10:October\n11: November\n12: December\nChose day by Enter number: "))

month = int(input("1: January\n2: February\n3: March\n4: April\n5: May\n6: June\n7: July\n8: August\n9:september\n10:October\n11: November\n12: December\nChose day by Enter number: "))

print(MonthOfYear(month))
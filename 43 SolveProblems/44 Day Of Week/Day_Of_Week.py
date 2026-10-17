def dayofweek(day):
    while True:
        if day == 1:
            return "it is a Friday"
        elif day == 2:
            return "it is a Saturday"
        elif day == 3:
            return "it is a Sunday"
        elif day == 4:
            return "it is a Monday"
        elif day == 5:
            return "it is a Tuseday"
        elif day == 6:
            return "it is a wednesday"
        elif day == 7:
            return "it is a Thursday"
        else:
            print("Wrong day, please Enter the day again: ")    
            day = int(input("1: Friday\n2: Saturday\n3: Sunday\n4: Monday\n5: Tuseday\n6: Wednesday\n7: Thursday\nChose day by Enter number: "))

day = int(input("1: Friday\n2: Saturday\n3: Sunday\n4: Monday\n5: Tuseday\n6: Wednesday\n7: Thursday\nChose day by Enter number: "))

print(dayofweek(day))
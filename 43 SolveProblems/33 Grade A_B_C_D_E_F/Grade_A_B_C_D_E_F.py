def Pass(e):
    if e >= 90 and e <= 100:
        result = "A"
    elif e >= 80:
        result = "B"
    elif e >= 70:
        result = "C"
    elif e >= 60:
        result = "D"
    elif e >= 50:
        result = "E"
    else:
        result = "F"

    return result


mark = float(input("Enter your mark: "))
print(Pass(mark))

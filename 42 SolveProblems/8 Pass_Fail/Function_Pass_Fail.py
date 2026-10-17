def Pass(s):
    while True:    
        if s >= 50 and s <= 100:
            return "PASS"
        elif s >= 0 and s < 50:
            return "FAIL"
        else:
           s = float(input("wrong value,Please re-enter your mark agian: ")
)
mark = float(input('Enter your mark: '))
print(Pass(mark))
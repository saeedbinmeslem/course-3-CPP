mark1 = float(input('enter your mark1: '))
mark2 = float(input('enter your mark2: '))
mark3 = float(input('enter your mark3: '))

Average = (mark1 + mark2 + mark3) / 3
print('your average is ' + str(Average) + ' so you')
if Average >= 50:
    print('PASS')
else:
    print('FAIL')    
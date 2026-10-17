def Simple_Calculator(n,typeOf,m):
    while True:
        result = 0
        if typeOf == "+":
            result = n + m
            break
        elif typeOf == "-":
            result = n - m
            break
        elif typeOf == "*":
            result = n * m
            break
        elif typeOf == "/":
            result = n / m
            break
        else:
            print('wrong opreation, please Enter type of opreation again')
            typeOf = str(input("Enter type of opreation: "))
    
    return result



num1 = float(input('Enter first numbers: '))
opreation = str(input("Enter type of opreation: "))
num2 = float(input('Enter second numbers: '))

print(Simple_Calculator(num1,opreation,num2))

                        
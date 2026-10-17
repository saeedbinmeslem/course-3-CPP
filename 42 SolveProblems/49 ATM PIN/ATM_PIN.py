def ATMPin(PassWord):
    balance = 7500
    while True:
        if PassWord == 1234:
            return balance
        else:
            print('wrong PassWord')
            PassWord = int(input("Enter the PassWord: "))

PassWord = int(input("Enter the PassWord: "))

print(ATMPin(PassWord))
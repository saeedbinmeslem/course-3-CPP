age = int(input('How old are you? ')) 

def vaildage(s):
    if s > 18 and s < 45:
        return "Vaild age"
    else:
        return "Invaild age"

print(vaildage(age))
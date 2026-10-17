def SumAverage(s):
    sum = 0
    count = 0
    for i in s:
        sum = sum + i
        count += 1
    return sum/count

def Pass(s):
    if s >= 50:
        return "PASS"
    else:
        return "FAIL"


marks = [100,99,93,97,98,97,97,96]
fail = [50,50,50,50,50,50,50,50]


print(SumAverage(fail))
print(Pass(SumAverage(fail)))
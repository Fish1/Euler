import sympy as sp

computed = {}
answer = 1

print("[1,1] = 1")
for number in range(2,2001):
    fromComputed = computed.pop(number, None)
    if fromComputed != None:
        answer *= fromComputed
        computed[number*fromComputed] = fromComputed
    elif sp.isprime(number):
        answer *= number
        computed[number*number] = number
    print("[1," + str(number) + "] = " + str(answer))

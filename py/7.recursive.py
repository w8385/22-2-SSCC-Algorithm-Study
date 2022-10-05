def to_one(n):
    if n < 0:
        return
    print(n, end=' ')
    return to_one(n-1)


def sum_n(n):
    if n == 1:
        return 1
    return n + sum_n(n-1)


def fibonacci(n):
    if n < 2:
        return 1
    return fibonacci(n-1) + fibonacci(n-2)


n = int(input())

print("to_one : ", end='')
to_one(n)
print()

print("sum : " + str(sum_n(n)))

print("fibonacci : " + str(fibonacci(n)))


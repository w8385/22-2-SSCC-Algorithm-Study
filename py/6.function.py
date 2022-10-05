def plus_print(a, b):
    print(a + b)


def plus(a, b):
    return a + b


def is_zero(n):
    return not n


# 두 수의 합
a, b = map(int, input().split())

plus_print(a, b)
print(plus(a, b))

# 입력 값이 0인가?
n = int(input())

if is_zero(n):
    print("n is zero")
else:
    print("n is not zero")

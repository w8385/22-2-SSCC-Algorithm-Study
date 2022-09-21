# if, elif, else
n = int(input())

if n == 0:
    print("is zero")
elif 0 < n:
    print("is positive")
else:
    print("is negative")

# for
f = int(input())

for i in range(f):
    print(i, end=" ")
print()

# while
w = int(input())

while 0 < w:
    w -= 1
    print(w, end=" ")


'''
when input is 0, print SSCC once
else, print SSCC as absolute value of input
'''
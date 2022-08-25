n = int(input())

if n == 0:
    print("SSCC")
elif n > 0:
    for i in range(n):
        print("SSCC")
else:
    while n < 0:
        print("SSCC")
        n += 1

'''
when input is 0, print SSCC once
else, print SSCC as absolute value of input
'''
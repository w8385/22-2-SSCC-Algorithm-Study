# input n
# create list size of n
# # 0 to n-1
n = int(input())
print([0 for _ in range(n)], end="\n\n")

# input row, col
# create list size of row * col
row, col = map(int, input().split())
m = [[0 for j in range(col)] for i in range(row)]

# print list by row
for i in m:
    print(i)
print()


# print list by row * col
for i in m:
    for j in i:
        print(j, end=' ')
    print()

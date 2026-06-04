# Write your code here
lis1 = list(map(int, input().split()))

prod = 1
for i in range(len(lis1)):
    prod *= lis1[i]
print(prod)
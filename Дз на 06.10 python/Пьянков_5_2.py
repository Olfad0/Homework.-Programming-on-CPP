proverka = 0
number = int(input())
for i in range(1, number+1):
    if number % i == 0:
        proverka += 1

if proverka == 2:
    print("prime\n")
else:
    print("composite\n")




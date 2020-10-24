
vklad = int(input())
percent = int(input())
poluchim = int(input())
year = 0

while int(vklad) < poluchim:
    vklad = vklad * (1 + percent / 100)
    year += 1

print(str(year) + "\n")

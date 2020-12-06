
A = []
size = int(input())
for i in range(size):
    A.append(int(input()))


for i in range(1, size):
    if A[i] < 0 and A[i-1] < 0 or A[i] >= 0 and A[i-1] >= 0:

        j = True
        break

    else:
        j = False

if j == True:
    print("YES\n")
else:
    print("NO\n")







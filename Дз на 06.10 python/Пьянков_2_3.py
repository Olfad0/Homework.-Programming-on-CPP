maxK = input()
time = input()
count = input()

maxK = int(maxK)
time = int(time)
count = int(count)

if count % maxK == 0:
    print(str(count / maxK * 2 * time))

else:
    print(str(( count / maxK+1 ) * 2 * time)+"\n")
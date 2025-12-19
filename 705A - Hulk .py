n = int(input())
i = 1
while i <= n :
    if i % 2 == 1:
        print("I hate",end=" ")
    else:
        print("I love", end=" ")
    if i == n:
        print("it")
    else:
        print("that", end=" ")
    i+=1

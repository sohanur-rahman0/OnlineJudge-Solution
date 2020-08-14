tc = int(input())
while tc>0:
    tc-=1
    n = int(input())
    arr = []
   
    arr = list(map(int,input().strip().split()))[:n]

    arr.sort()
    flag = True

    for i in range(0, n-1):
        if abs(arr[i]-arr[i+1]) > 1:
            flag = False
            break

    if flag == True:
        print("YES")
    else:
        print("NO")        


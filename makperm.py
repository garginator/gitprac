t = int(input())
for i in range(t):
        n = int(input())
        count = 0
        arr = []
        for j in range(n):
            arr.append(0)
 
        temp = list(map(int,input().split()))
        #print(temp)
        for j in range(n):
            if( temp[j] > n ):
                continue
            if( arr[temp[j]-1] == 0):
                count+=1
                arr[temp[j]-1] = 1
        print(n-count)

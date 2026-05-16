n = int(input())
count=0
data = [input().replace(" ", "").replace("0", "") for _ in range(n)]
for i in data:
    if len(i)>=2:
        count+=1
print(count)

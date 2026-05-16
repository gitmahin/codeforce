n = int(input())
data = [input() for _ in range(n)]
suffix=""
prefix=""
middle=""
for i in data:
    if len(i)>10:
        suffix=i[0]
        prefix=i[-1]
        middle=len(i)-2
        print(f"{suffix}{middle}{prefix}")
    else:
        print(i)

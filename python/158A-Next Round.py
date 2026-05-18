n, k = map(int, input().split())
a = list(map(int, input().split()))
count = 0
target_score = a[k - 1] 
for i in a:
    if i >= target_score and i > 0:
        count += 1
print(count)

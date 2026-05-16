w = int(input())
found = False


for x in range(2, w):
    y = w - x
    if x % 2 == 0 and y % 2 == 0:
        found = True
        break  

if found:
    print("YES")
else:
    print("NO")

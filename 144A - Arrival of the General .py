n = int(input())
h = list(map(int,input().split()))

output =0

max_h = max(h)
min_h = min(h)
last_index = n-1

#1st occurrence of Max
max_idx = h.index(max_h)

# last occurrence of min
for i,val in enumerate(h):
    if val == min_h:
        min_idx = i

if max_idx != 0:
    output += max_idx
if min_idx != last_index:
    output +=  (last_index - min_idx)

if max_idx > min_idx:
    output -=1  #if not provided the swap between max and min is counted for both the values

print(output)






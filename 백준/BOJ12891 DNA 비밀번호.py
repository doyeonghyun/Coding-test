def add(plain, N):
    for i in range(N):
        if plain[i] == 'A':
            cnt[0] += 1
        if plain[i] == 'C':
            cnt[1] += 1
        if plain[i] == 'G':
            cnt[2] += 1
        if plain[i] == 'T':
            cnt[3] += 1

def sub(plain):
    if plain == 'A':
        cnt[0] -= 1
    if plain == 'C':
        cnt[1] -= 1
    if plain == 'G':
        cnt[2] -= 1
    if plain == 'T':
        cnt[3] -= 1

S, P = map(int, input().split())
DNA = input()
ACGT = list(map(int, input().split()))
cnt = [0, 0, 0, 0]
ans = 0


add(DNA[0:P], P)
for j in range(4):
        if ACGT[j] > cnt[j]: break
        if j == 3: ans += 1

for i in range(1, S-P+1):
    add(DNA[P+i-1:P+i], 1)
    sub(DNA[i-1])
    for j in range(4):
        if ACGT[j] > cnt[j]: break
        if j == 3: ans += 1

print(ans)

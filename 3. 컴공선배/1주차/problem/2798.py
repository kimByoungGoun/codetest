from itertools import combinations
N, M = map(int, input().split())
card = list(map(int, input().split()))
big = 0
for cards in combinations(card, 3):
    tmp = sum(cards)
    if big < tmp and tmp <= M:
        big = tmp
print(big)
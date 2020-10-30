import sys

if __name__ == "__main__":
	coin_count, target = input().split()
	coin_count = int(coin_count)
	target = int(target)
	coins = list()
	dp = [0 for _ in range(target+1)]
	dp[0] = 1
	
	for i in range(coin_count):
		coins.append(int(input()))

	for i in coins:
		for j in range(1, target+1):
			if j - i >= 0:
				dp[j] = dp[j] + dp[j-i]

	print(dp[-1])
import sys

if __name__ == "__main__":
	count, target = input().split()
	nums = list()
	result = ""
	nums = input().split()
	for i in nums:
		if int(i) < int(target):
			result = result + i + " "
	print(result)
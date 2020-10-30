import sys

if __name__ == "__main__":
	count = input()
	for i in range(int(count)):
		a, b = input().split()
		print(int(a) + int(b))
import sys

if __name__ == "__main__":
	while True:
		a, b = input().split()
		if (int(a) == 0) & (int(b) == 0):
			break
		print(int(a) + int(b))
	
		
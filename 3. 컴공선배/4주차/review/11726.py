def calc(n):
    nums = [0,1,2]
    for i in range(3, n+1):
        nums.append((nums[i-2] + nums[i-1])%10007)
    return (nums[n])
if __name__ == '__main__':
    n = int(input())
    result = calc(n)
    print(result)
import sys

MOD = 1000000007
MAX_P = 200001

class FenwickTree:
    def __init__(self):
        self.count = [0 for _ in range(MAX_P+1)]
        self.summ = [0 for _ in range(MAX_P+1)]

    def update(self, x, val):
        while( x <= MAX_P ):
            self.count[x] += 1
            self.summ[x] += val
            x += ( x & -x )
    
    def sum(self, x, cnt):
        ret = 0
        while(x):
            ret += self.count[x] if cnt else self.summ[x]
            x &= x-1
        return ret

if __name__ == '__main__':
    BIT = FenwickTree()
    N = int(sys.stdin.readline())
    p_i = int(sys.stdin.readline()) + 1
    
    BIT.update(p_i, p_i)
    ans = 1
    p_i_sum = p_i
    
    for i in xrange(2, N+1):
        p_i = int(sys.stdin.readline()) + 1
        
        n_i = BIT.sum(p_i, True)
        smaller = BIT.sum(p_i, False)
        
        cost = ( 2 * n_i + 1 - i ) * p_i
        cost -= smaller
        cost += (p_i_sum - smaller)
        cost %= MOD
        
        ans = (ans * cost) % MOD
        p_i_sum += p_i
        BIT.update(p_i, p_i)

    print ans

# https://greeksharifa.github.io/ps/2018/07/11/PS-01280/

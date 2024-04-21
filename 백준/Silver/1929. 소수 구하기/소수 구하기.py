import sys

def get_primes(n):
    
    # 숫자 리스트를 False, True로 된 배열로 변환한다.
    # n개의 요소를 포함한 리스트가 필요하므로 0부터 n-1개까지 범위를 잡고,
    # 0과 1은 소수가 아니므로 0번째, 1번째 요소는 False로 초기화
    # 2번째부터는 모두 True로 초기화되어 있고, 소수일지 아닐지는
    # 앞으로 계산을 통해 판단될 것이다.
    # 여기서부터 0, 1을 초기화시키는 이유는..
    # 소수를 계산할 때 제외하려면 그만큼 index에 연산이 추가되고
    # 코드는 더 읽기 복잡해진다. 
    is_prime = [False, False] + [True] * (n-1)
    
    primes = []
    
    # 2부터 n까지의 모든 자연수에서 is_prime[2]부터 is_prime[n]까지의 수를
    # 모두 primes라는 배열에 담는다
    for i in range(2, n+1):
        if is_prime[i]:
            primes.append(i)
            # i*2부터 n까지, 시퀀스를 i만큼 증가시킨다
            # i(=i*1)를 제외한, n이하의, i의 배수
            # 를 모두 소수가 아닌 것으로, False로 바꾼다.
            for j in range(i*2, n+1, i):
                is_prime[j] = False
    return primes
    
m,n = map(int, input().split())
primes = get_primes(n)

for p in primes:
    if p >= m:
        print(p)

# 2부터 n까지의 소수를 모두 구한다.
# 구한 소수 중 m이상 n이하의 수를 추려낸다.
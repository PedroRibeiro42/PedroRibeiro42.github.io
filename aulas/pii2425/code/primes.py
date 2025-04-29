LIMIT = 10000000

def is_prime(n):
    if n < 2: return False
    if n % 2 == 0: return n == 2
    if n % 3 == 0: return n == 3
    p = 5
    while p * p <= n:
        if n % p == 0: return False
        p += 2
    return True

def main():
    
    count = 0
    for n in range(1, LIMIT):
        if is_prime(n):
            count += 1
    print(f"There are {count} primes less than {LIMIT}")

if __name__ == "__main__":
    main()


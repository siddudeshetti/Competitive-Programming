# GCD
def gcd(a, b):
    maxi = max(a, b)
    gcd = 0
    for i in range(maxi, 0, -1):
        if a % i == 0 and b % i == 0:
            gcd = i
            break
    print(gcd)


# LCM
def lcm(a, b):
    max_element = max(a, b)
    while True:
        if max_element % a == 0 and max_element % b == 0:
            print(max_element)
            break
        max_element += 1


# Count number of digits
def count_digit(n):
    cnt = 0
    while n > 0:
        n //= 10
        cnt += 1
    print(cnt)
    return 0


# Reverse a number
def reverse_digit(n):
    rev = 0
    while n > 0:
        last_digit = n % 10
        rev = rev * 10 + last_digit
        n //= 10
    print(rev)
    return 0


# Palindrome
def palindrome(n):
    rev = 0
    dup = n

    while n > 0:
        last_digit = n % 10
        rev = rev * 10 + last_digit
        n //= 10

    if rev == dup:
        print("true")
    else:
        print("no")

    return 0


# Armstrong Number
def armstrong(n):
    no_of_digits = int(math.log10(n)) + 1
    dup = n
    total = 0

    while n > 0:
        last_digit = n % 10
        m = 1
        for _ in range(no_of_digits):
            m *= last_digit
        total += m
        n //= 10

    if total == dup:
        print("true")
    else:
        print("no")

    return 0


# Print all divisors
def print_all_divisors(n):
    divisors = []

    for i in range(1, int(math.sqrt(n)) + 1):
        if n % i == 0:
            divisors.append(i)
            if n // i != i:
                divisors.append(n // i)

    divisors.sort()

    for d in divisors:
        print(d, end=" ")
    print()

    return 0


# Prime Number Check
def prime_or_not(n):
    cnt = 0

    i = 1
    while i * i <= n:
        if n % i == 0:
            cnt += 1
            if n // i != i:
                cnt += 1
        i += 1

    if cnt == 2:
        print("Prime Number")
    else:
        print("Not a Prime Number")

    return 0

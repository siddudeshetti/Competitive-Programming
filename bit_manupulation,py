def binary_to_decimal(s):
    decimal = 0

    for bit in s:
        decimal = decimal * 2 + int(bit)

    return decimal


def decimal_to_binary(n):
    if n == 0:
        return "0"

    s = ""
    while n > 0:
        x = n % 2
        s += str(x)
        n = n // 2

    return s[::-1]


print(decimal_to_binary(60))
print(binary_to_decimal("111100"))

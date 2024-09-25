
factorial = [0] * 21
factorial[0] = 1
for i in range(1, 21):
    factorial[i] = factorial[i-1] * i
# print(factorial)


def get_factorial_number_system(n, size):
    l = []
    for i in range(size):
        l.append(n//factorial[size-i-1])
        # print(l)
        n = n % factorial[size-i-1]
        # print(n)
    return l

# print(get_factorial_number_system(15, 4));

def get_perm(n, size):
    l = get_factorial_number_system(n, size);
    # print(l)
    for i in range(size):
        # print("fixed: {}".format(size - i - 1));
        for j in range(size - i - 1):
            # print("moving: {}".format( (size - i - 1) - j - 1))
            if ( l[(size - i - 1) - j - 1] <= l[size - i - 1]): # basically digits to the left have more claims to lower value
                l[size - i - 1] += 1
    return l

# print(get_perm(15, 4))

t = int(input())
for i in range(t):
    s = sorted(str(input()))
    n = int(input())
    l = get_perm(n, len(s))

    for index in l:
        print(s[index], end="")
    print()






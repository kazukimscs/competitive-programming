n, k = map(int, input().split())
a = list(map(int, input().split()))

def binary_search(a):
    left, right = 0, n - 1
    if a[right] < k:
        return -1
    
    while right - left > 1:
        mid = (left + right) // 2
        if a[mid] == k:
            return mid
        elif a[mid] < k:
            left = mid
        else:
            right = mid
    return  right

print(binary_search(a))
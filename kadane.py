def contiguousSubArray(n, x):
    now = n[0]
    end = 0

    for p in range(0, x):
        end = end + n[p]
        if end < 0:
            end = 0


        elif (now < end):
            now = end

    return now


n = [-3, -2, 1, 2, 3, -4, -5, -1]
print("The Maximum sum of a contiguous Subarray is ", contiguousSubArray(n, len(n)))
n = int(input())
apples = list(map(int, input().split()))


def find_min_diff(curr_apple, curr_sum1, curr_sum2):
    if curr_apple == n:
        return abs(curr_sum1 - curr_sum2)
    diff1 = find_min_diff(curr_apple+1, curr_sum1 +
                          apples[curr_apple], curr_sum2)
    diff2 = find_min_diff(curr_apple+1, curr_sum1,
                          curr_sum2 + apples[curr_apple])
    return min(diff1, diff2)


print(find_min_diff(0, 0, 0))

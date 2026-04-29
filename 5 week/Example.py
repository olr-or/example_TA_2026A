a = [[1, 2],
     [3, 4]]

b = [[5, 6],
     [7, 8]]

print(matrix_add(a, b))


a = [[1, 2],
     [3, 4]]

b = [[2, 0],
     [1, 2]]

print(matrix_mul(a, b))


a = [[5, 1],
     [2, 3]]

print(matrix_trace(a))


a = [[4, 6],
     [3, 8]]

print(matrix_det(a))


a = [[-1, 7],
     [3, 2]]

print(matrix_max(a))


a = [[9, 4],
     [6, 2]]

print(matrix_min(a))


a = [[1, 2],
     [3, 4]]

print(matrix_transpose(a))


def matrix_add_3x3(a, b):
    return [
        [a[0][0]+b[0][0], a[0][1]+b[0][1], a[0][2]+b[0][2]],
        [a[1][0]+b[1][0], a[1][1]+b[1][1], a[1][2]+b[1][2]],
        [a[2][0]+b[2][0], a[2][1]+b[2][1], a[2][2]+b[2][2]]
    ]

a = [[1,2,3],
     [4,5,6],
     [7,8,9]]

b = [[9,8,7],
     [6,5,4],
     [3,2,1]]

print(matrix_add_3x3(a, b))


def matrix_trace_3x3(a):
    return a[0][0] + a[1][1] + a[2][2]

a = [[2,0,1],
     [3,5,6],
     [7,8,9]]

print(matrix_trace_3x3(a))


def matrix_max_4x4(a):
    v = a[0][0]

    if a[0][1] > v: v = a[0][1]
    if a[0][2] > v: v = a[0][2]
    if a[0][3] > v: v = a[0][3]

    if a[1][0] > v: v = a[1][0]
    if a[1][1] > v: v = a[1][1]
    if a[1][2] > v: v = a[1][2]
    if a[1][3] > v: v = a[1][3]

    if a[2][0] > v: v = a[2][0]
    if a[2][1] > v: v = a[2][1]
    if a[2][2] > v: v = a[2][2]
    if a[2][3] > v: v = a[2][3]

    if a[3][0] > v: v = a[3][0]
    if a[3][1] > v: v = a[3][1]
    if a[3][2] > v: v = a[3][2]
    if a[3][3] > v: v = a[3][3]

    return v

a = [[1,2,3,4],
     [5,6,7,8],
     [9,10,11,12],
     [13,14,15,16]]

print(matrix_max_4x4(a))



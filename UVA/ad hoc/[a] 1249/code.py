def parallelogram_area(x1, y1, x2, y2, x3, y3, x4, y4):
    # Using the cross product formula to find the area
    # Area = |(x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1)|
    area = abs((x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1))
    return area

def parallelogram_area_shoelace(x1, y1, x2, y2, x3, y3, x4, y4):
    # Applying Shoelace Theorem formula
    area = 0.5 * abs(x1 * y2 + x2 * y3 + x3 * y4 + x4 * y1 - (y1 * x2 + y2 * x3 + y3 * x4 + y4 * x1))
    return area

while True:
    ax, ay, bx, by, cx, cy, dx, dy, ex, ey, fx, fy = map(float, input().split())
    if ax == ay == bx == by == cx == cy == dx == dy == ex == ey == fx == fy == 0:
        break
    area = parallelogram_area(dx, dy, ex, ey, fx, fy, None, None)/2
    # if cx == ax:
    #     hx = cx
    #     hy = area/abs(bx - ax) + ay
    # elif cy == ay:
    #     hy = cy
    #     hx = area/abs(by - ay) + ax
    # else:
    left = 0
    right = 100000
    k = (right + left) / 2
    hx, hy = ax + k * (cx - ax), ay + k * (cy - ay)
    area2 = parallelogram_area(ax, ay, bx, by, hx, hy, None, None)
    tolerance = 0.00001
    # import time
    while abs(area2 - area) > tolerance:
        # print("k:", k)
        # print("h:", hx, hy)
        # print("area:", area2, area)
        # time.sleep(1)
        if area2 > area:
            right = k
        else:
            left = k
        k = (right + left) / 2
        hx, hy = ax + k * (cx - ax), ay + k * (cy - ay)
        area2 = parallelogram_area(ax, ay, bx, by, hx, hy, None, None)
        # ac and ah are the same line
        # assert(abs((cy - ay) / (cx - ax) - (hy - ay) / (hx - ax)) < tolerance)
        area2 = parallelogram_area(ax, ay, bx, by, hx, hy, None, None)
    gx = bx - ax + hx 
    gy = by - ay + hy

    # # ac and ah are the same line
    # tolerance = 0.00001
    # if(cx != ax):
    #     assert(abs((cy - ay) / (cx - ax) - (hy - ay) / (hx - ax)) < tolerance)

    gx = bx - ax + hx 
    gy = by - ay + hy
    # abgh is a parallelogram
    # assert(abs(area - parallelogram_area_shoelace(ax, ay, bx, by, gx, gy, hx, hy)) < tolerance)
    print("{:.3f} {:.3f} {:.3f} {:.3f}". format(gx, gy, hx, hy))
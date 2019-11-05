import queue
n = eval(input())
m = 0
q = queue.Queue()
while True:
    strings = input().split()
    if strings[0] == "#":
        break
    elif strings[0] == "In":
        if m < n:
            m = m + 1
            q.put(strings[1])
            print("{} joined. Total:{}".format(strings[1], m))
        else:
            print("{} rejected.".format(strings[1]))
    elif strings[0] == "Calling":
        if q.empty():
            print("No one!")
        else:
            m = m - 1
            a = q.get()
            print("{} called. Total:{}".format(a, m))



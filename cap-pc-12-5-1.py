from random import randint

va = [randint(0, 100) for i in range(10)]
vb = [randint(0, 100) for i in range(10)]
vres = [None] * 10

i = 0
while i < 10:
    vres[i] = va[i] + vb[i]
    print("{} + {} = {}".format(va[i], vb[i], vres[i]))
    i += 1

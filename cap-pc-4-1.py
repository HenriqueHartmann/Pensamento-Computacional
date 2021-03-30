import math

pA = {"x": 10, "y": 20}
pB = {"x": 30, "y": 45}

rx = pow((pB["x"] - pA["x"]), 2)
ry = pow((pB["y"] - pA["y"]), 2)
r = math.sqrt(rx + ry)

print("Resultado: {}".format(r))

import math
import numpy as np
from decimal import *
import matplotlib.pyplot as plt
getcontext().prec = 12


def ex1_bank():
    i = Decimal(1)
    final = Decimal(math.exp(1))-Decimal(1)
    print("0 = ", final)
    while i <= 25:
        final = final*i - Decimal(1)
        print(i, " = ", final)
        i += Decimal(1)


def f(x):
    return (x+1)**(1/2) - x**(1/2)


def g(x):
    return 1 / ((x+1)**(1/2) + x**(1/2))


def graph():
    t1 = np.arange(-100.0, 100.0)
    plt.plot(t1, f(t1)-g(t1))
    plt.show()


ex1_bank()
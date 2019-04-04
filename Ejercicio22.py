import os
import numpy as np
import matplotlib.pyplot as plt


a = os.system("g++ OscarOchoa_Ejercicio22.cpp -o OscarOchoa_Ejercicio22.x")
a = os.system("./OscarOchoa_Ejercicio22.x > OscarOchoa_Ejercicio22.dat")

plt.figure()
data = np.loadtxt("OscarOchoa_Ejercicio.dat")
plt.hist(data[:,0], data[:,1])
plt.savefig("histogramita.png")

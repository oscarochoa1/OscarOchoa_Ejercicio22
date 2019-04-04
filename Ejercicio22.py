import os
import numpy as np
import matplotlib.pyplot as plt


a = os.system("g++ OscarOchoa_Ejercicio.cpp -o OscarOchoa_Ejercicio.x")
a = os.system("./OscarOchoa_Ejercicio.x > OscarOchoa_Ejercicio.dat")

plt.figure()
data = np.loadtxt("OscarOchoa_Ejercicio.dat")
plt.hist(data[:,0], data[:,1])

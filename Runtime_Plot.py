
import matplotlib.pyplot as plt


#data from c++ program

sizes = [500, 600, 700, 900, 1500, 2000, 5000]
times = [1, 1, 1, 2, 3, 4, 11]

plt.figure(figsize=(12, 9))
plt.plot(sizes, times, marker='o', color='green', linestyle='-')

plt.title("Runtime of Reverse Algorithm")
plt.xlabel("Input Size (n)")
plt.ylabel("Runtime(microseconds)")
plt.grid(True)
plt.tight_layout()

plt.savefig('Runtime_Plot.png')

plt.show()
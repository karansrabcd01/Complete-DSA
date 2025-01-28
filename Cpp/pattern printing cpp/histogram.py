import matplotlib.pyplot as plt
import numpy as np

# Data for the histogram
data = [22, 87, 5, 43, 56, 73, 55, 54, 11, 20, 51, 5, 79, 31, 27, 54, 92, 30, 72, 80]

# Create the histogram
plt.hist(data, bins=8, color='skyblue', edgecolor='black')

# Add title and labels
plt.title('Histogram Example')
plt.xlabel('Value Ranges')
plt.ylabel('Frequency')

# Show the chart
plt.show()

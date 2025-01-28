import matplotlib.pyplot as plt

# Data for the bar chart
categories = ['Category A', 'Category B', 'Category C', 'Category D']
values = [23, 45, 56, 78]

# Create the bar chart
plt.bar(categories, values, color='skyblue')

# Add title and labels
plt.title('Bar Chart Example')
plt.xlabel('Categories')
plt.ylabel('Values')

# Show the chart
plt.show()

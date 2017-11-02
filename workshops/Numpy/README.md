# NumPy Exercises

## Exercise 1 - Your First NumPy Array
A list `baseball` has already been defined in the Python script, representing the height of some baseball players in centimeters. Can you add some code here and there to create a `numpy` array from it?

### Instructions

* Import the `numpy` package as `np`, so that you can refer to `numpy` with `np`.
* Use [`np.array()`](http://docs.scipy.org/doc/numpy-1.10.0/glossary.html#term-array) to create a `numpy` array from `baseball`. Name this array `np_baseball`.
* Print out the type of `np_baseball` to check that you got it right.

### Sample code

```python
# Create list baseball
baseball = [180, 215, 210, 210, 188, 176, 209, 200]

# Import the numpy package as np


# Create a numpy array from baseball: np_baseball


# Print out type of np_baseball

```

## Exercise 2 - Baseball players' height
You are a huge baseball fan. You decide to call the MLB (Major League Baseball) and ask around for some more statistics on the height of the main players. They pass along data on more than a thousand players, which is stored as a regular Python list: `height`. The height is expressed in inches. Can you make a `numpy` array out of it and convert the units to meters?

`height` is already available and the `numpy` package is loaded, so you can start straight away (Source: [stat.ucla.edu](http://wiki.stat.ucla.edu/socr/index.php/SOCR_Data_MLB_HeightsWeights)).

### Instructions
* Create a `numpy` array from `height`. Name this new array `np_height`.
* Print `np_height`.
* Multiply `np_height` with `0.0254` to convert all height measurements from inches to meters. Store the new values in a new array, `np_height_m`.
* Print out `np_height_m` and check if the output makes sense.

### Sample code
```python
# Importing height as a regular list
import pandas as pd
mlb = pd.read_csv("http://s3.amazonaws.com/assets.datacamp.com/course/intro_to_python/baseball.csv")
height = mlb['Height'].tolist()

# Import numpy


# Create a numpy array from height: np_height


# Print out np_height


# Convert np_height to m: np_height_m


# Print np_height_m

```

## Exercise 3 - Baseball player's BMI
The MLB also offers to let you analyze their weight data. Again, both are available as regular Python lists: `height` and `weight`. `height` is in inches and `weight` is in pounds.

It's now possible to calculate the BMI of each baseball player. Python code to convert `height` to a `numpy` array with the correct units is already available in the code sample. Follow the instructions step by step and finish the game!

### Instructions
* Create a `numpy` array from the `weight` list with the correct units. Multiply by `0.453592` to go from pounds to kilograms. Store the resulting `numpy` array as `np_weight_kg`.
* Use `np_height_m` and `np_weight_kg` to calculate the BMI of each player. Use the following equation: $$ \mathrm{BMI} = \frac{\mathrm{weight (kg)}}{\mathrm{height (m)}^2}$$ Save the resulting `numpy` array as `bmi`.
* Print out `bmi`.

### Sample code
```python
# Importing height and weight arrays
import pandas as pd
mlb = pd.read_csv("http://s3.amazonaws.com/assets.datacamp.com/course/intro_to_python/baseball.csv")
height = mlb['Height'].tolist()
weight = mlb['Weight'].tolist()

# Import numpy
import numpy as np

# Create array from height with correct units: np_height_m
np_height_m = np.array(height) * 0.0254

# Create array from weight with correct units: np_weight_kg


# Calculate the BMI: bmi


# Print out bmi

```

## Exercise 4 - Lightweight baseball players
To subset both regular Python lists and `numpy` arrays, you can use square brackets:

```python
x = [4 , 9 , 6, 3, 1]
x[1]
import numpy as np
y = np.array(x)
y[1]
```

For `numpy` specifically, you can also use boolean `numpy` arrays:

```python
high = y > 5
y[high]
```

The code that calculates the BMI of all baseball players is already included. Follow the instructions and reveal interesting things from the data!

### Instructions
* Create a boolean `numpy` array: the element of the array should be `True` if the corresponding baseball player's BMI is below 21. You can use the `<` operator for this. Name the array `light`.
* Print the array `light`.
* Print out a `numpy` array with the BMIs of all baseball players whose BMI is below 21. Use `light` inside square brackets to do a selection on the `bmi` array.

### Sample code
```python
# importing height and weight as regular lists
import pandas as pd
mlb = pd.read_csv("http://s3.amazonaws.com/assets.datacamp.com/course/intro_to_python/baseball.csv")
height = mlb['Height'].tolist()
weight = mlb['Weight'].tolist()

# Import numpy
import numpy as np

# Calculate the BMI: bmi
np_height_m = np.array(height) * 0.0254
np_weight_kg = np.array(weight) * 0.453592
bmi = np_weight_kg / np_height_m ** 2

# Create the light array


# Print out light


# Print out BMIs of all baseball players whose BMI is below 21

```

## Exercise 5 - NumPy Side Effects
`numpy` is great for doing vector arithmetic. If you compare its functionality with regular Python lists, however, some things have changed.

First of all, `numpy` arrays cannot contain elements with different types. If you try to build such a list, some of the elements' types are changed to end up with a homogeneous list. This is known as _type coercion_.

Second, the typical arithmetic operators, such as `+`, `-`, `*` and `/` have a different meaning for regular Python lists and `numpy` arrays.

Have a look at this line of code:

```python
np.array([True, 1, 2]) + np.array([3, 4, False])
```

Can you tell which code chunk builds the exact same Python object?

A) `np.array([True, 1, 2, 3, 4, False])`
B) `np.array([4, 3, 0]) + np.array([0, 2, 2])`
C) `np.array([1, 1, 2]) + np.array([3, 4, -1])`
D) `np.array([0, 1, 2, 3, 4, 5])`

## Excercise 6 - Subsetting NumPy Arrays
You've seen it with your own eyes: Python lists and `numpy` arrays sometimes behave differently. Luckily, there are still certainties in this world. For example, subsetting (using the square bracket notation on lists or arrays) works exactly the same. To see this for yourself, try the following lines of code in the Python Shell:

```python
x = ["a", "b", "c"]
x[1]

np_x = np.array(x)
np_x[1]
```

The sample code already contains code that imports `numpy` as `np`, and stores both the height and weight of the MLB players as `numpy` arrays.

### Instructions
* Subset `np_weight`: print out the element at index 50.
* Print out a sub-array of `np_height`: It contains the elements at index 100 up to **and including** index 110

### Sample code
```python
# Importing height and weight as regular lists
import pandas as pd
mlb = pd.read_csv("http://s3.amazonaws.com/assets.datacamp.com/course/intro_to_python/baseball.csv")
height = mlb['Height'].tolist()
weight = mlb['Weight'].tolist()

# Import numpy
import numpy as np

# Store weight and height lists as numpy arrays
np_weight = np.array(weight)
np_height = np.array(height)

# Print out the weight at index 50


# Print out sub-array of np_height: index 100 up to and including index 110

```
## Exercise 7 - Your First 2D NumPy Array

Before working on the actual MLB data, let's try to create a 2D `numpy` array from a small list of lists.

In this exercise, `baseball` is a list of lists. The main list contains 4 elements. Each of these elements is a list containing the height and the weight of 4 baseball players, in this order. `baseball` is already coded for you in the script.

### Instructions
* Use [`np.array()`](http://docs.scipy.org/doc/numpy-1.10.0/glossary.html#term-array) to create a 2D `numpy` array from `baseball`. Name it `np_baseball`.
* Print out the type of `np_baseball`.
* Print out the `shape` attribute of `np_baseball`. Use `np_baseball.shape`.

### Sample code
```python
# Create baseball, a list of lists
baseball = [[180, 78.4],
            [215, 102.7],
            [210, 98.5],
            [188, 75.2]]

# Import numpy
import numpy as np

# Create a 2D numpy array from baseball: np_baseball


# Print out the type of np_baseball


# Print out the shape of np_baseball

```

## Exercise 8 - Baseball data in 2D form
You have another look at the MLB data and realize that it makes more sense to restructure all this information in a 2D `numpy` array. This array should have 1015 rows, corresponding to the 1015 baseball players you have information on, and 2 columns (for height and weight).

The MLB was, again, very helpful and passed you the data in a different structure, a Python list of lists. In this list of lists, each sublist represents the height and weight of a single baseball player. The name of this embedded list is `baseball`.

Can you store the data as a 2D array to unlock `numpy`'s extra functionality?

### Instructions
* Use [`np.array()`](http://docs.scipy.org/doc/numpy-1.10.0/glossary.html#term-array) to create a 2D `numpy` array from `baseball`. Name it `np_baseball`.
* Print out the `shape` attribute of `np_baseball`.

### Sample Code
```python
#Importing baseball as a regular list of lists
import pandas as pd
baseball = pd.read_csv("http://s3.amazonaws.com/assets.datacamp.com/course/intro_to_python/baseball.csv")[['Height', 'Weight']].as_matrix().tolist()

# Import numpy package
import numpy as np

# Create a 2D numpy array from baseball: np_baseball


# Print out the shape of np_baseball

```

## Exercise 9 - Subsetting 2D NumPy Arrays
If your 2D `numpy` array has a regular structure, i.e. each row and column has a fixed number of values, complicated ways of subsetting become very easy. Have a look at the code below where the elements `"a"` and `"c"` are extracted from a list of lists.

```python
# regular list of lists
x = [["a", "b"], ["c", "d"]]
[x[0][0], x[1][0]]

# numpy
import numpy as np
np_x = np.array(x)
np_x[:,0]
```

For regular Python lists, this is a real pain. For 2D `numpy` arrays, however, it's pretty intuitive! The indexes before the comma refer to the rows, while those after the comma refer to the columns. The `:` is for slicing; in this example, it tells Python to include all rows.

The code that converts the pre-loaded `baseball` list to a 2D `numpy` array is already in the sample code. The first column contains the players' height in inches and the second column holds player weight, in pounds. Add some lines to make the correct selections. Remember that in Python, the first element is at index 0!

### Instructions
* Print out the 50th row of `np_baseball`.
* Make a new variable, `np_weight`, containing the entire second column of `np_baseball`.
* Select the height (first column) of the 124th baseball player in `np_baseball` and print it out.

### Sample code
```python
# Import baseball as a regular list of lists
import pandas as pd
baseball = pd.read_csv("http://s3.amazonaws.com/assets.datacamp.com/course/intro_to_python/baseball.csv")[['Height', 'Weight']].as_matrix().tolist()

# Import numpy package
import numpy as np

# Create np_baseball (2 cols)
np_baseball = np.array(baseball)

# Print out the 50th row of np_baseball


# Select the entire second column of np_baseball: np_weight


# Print out height of 124th player

```

## Exercise 10 - Average versus median

You now know how to use `numpy` functions to get a better feeling for your data. It basically comes down to importing `numpy` and then calling several simple functions on the `numpy` arrays:

```python
import numpy as np
x = [1, 4, 8, 10, 12]
np.mean(x)
np.median(x)
```

The baseball data is available as a 2D `numpy` array with 3 columns (height, weight, age) and 1015 rows. The name of this `numpy` array is `np_baseball`. After restructuring the data, however, you notice that some height values are abnormally high. Follow the instructions and discover which summary statistic is best suited if you're dealing with so-called _outliers_.

### Instructions
* Create `numpy` array `np_height` that is equal to first column of `np_baseball`.
* Print out the mean of `np_height`.
* Print out the median of `np_height`.

### Sample code
```python
# Importing np_baseball
import pandas as pd
np_baseball = pd.read_csv("http://s3.amazonaws.com/assets.datacamp.com/course/intro_to_python/baseball.csv")[['Height', 'Weight', 'Age']].as_matrix()
np_baseball[slice(0, 1015, 50), 0] = np_baseball[slice(0, 1015, 50), 0]*1000

# Import numpy
import numpy as np

# Create np_height from np_baseball


# Print out the mean of np_height


# Print out the median of np_height

```

## Exercise 11 - ## Explore the baseball data
Because the mean and median are so far apart, you decide to complain to the MLB. They find the error and send the corrected data over to you. It's again available as a 2D Numpy array `np_baseball`, with three columns

### Instructions
* The code to print out the mean height is already included. Complete the code for the median height. Replace `None` with the correct code.
* Use [`np.std()`](http://docs.scipy.org/doc/numpy-1.10.0/reference/generated/numpy.std.html) on the first column of `np_baseball` to calculate `stddev`. Replace `None` with the correct code.
* Do big players tend to be heavier? Use [`np.corrcoef()`](http://docs.scipy.org/doc/numpy-1.10.0/reference/generated/numpy.corrcoef.html) to store the correlation between the first and second column of `np_baseball` in `corr`. Replace `None` with the correct code.

### Sample code
```python
# Importing np_baseball
import pandas as pd
np_baseball = pd.read_csv("http://s3.amazonaws.com/assets.datacamp.com/course/intro_to_python/baseball.csv")[['Height', 'Weight', 'Age']].as_matrix()

# Import numpy
import numpy as np

# Print mean height (first column)
avg = np.mean(np_baseball[:,0])
print("Average: " + str(avg))

# Print median height. Replace 'None'
med = None
print("Median: " + str(med))

# Print out the standard deviation on height. Replace 'None'
stddev = None
print("Standard Deviation: " + str(stddev))

# Print out correlation between first and second column. Replace 'None'
corr = None
print("Correlation: " + str(corr))

```

## Exercise 12 - Blend it all together
In the last few exercises you've learned everything there is to know about heights and weights of baseball players. Now it's time to dive into another sport: soccer.

You've contacted FIFA for some data and they handed you two lists. The lists are the following:
```python
positions = ['GK', 'M', 'A', 'D', ...]
heights = [191, 184, 185, 180, ...]
```
Each element in the lists corresponds to a player. The first list, `positions`, contains strings representing each player's position. The possible positions are: `'GK'` (goalkeeper), `'M'` (midfield), `'A'` (attack) and `'D'` (defense). The second list, `heights`, contains integers representing the height of the player in cm. The first player in the lists is a goalkeeper and is pretty tall (191 cm).

You're fairly confident that the median height of goalkeepers is higher than that of other players on the soccer field. Some of your friends don't believe you, so you are determined to show them using the data you received from FIFA.

### Instructions
* Convert `heights` and `positions`, which are regular lists, to numpy arrays. Call them `np_heights` and `np_positions`.
* Extract all the heights of the goalkeepers. You can use a little trick here: use `np_positions == 'GK'` as an index for `np_heights`. Assign the result to `gk_heights`.
* Extract all the heights of all the other players. This time use `np_positions != 'GK'` as an index for `np_heights`. Assign the result to `other_heights`.
* Print out the median height of the goalkeepers using [`np.median()`](http://docs.scipy.org/doc/numpy-1.10.0/reference/generated/numpy.median.html). Replace `None` with the correct code.
* Do the same for the other players. Print out their median height. Replace `None` with the correct code.

### Sample code
```python
# Importing heights and positions as lists
import pandas as pd
fifa =  pd.read_csv("http://s3.amazonaws.com/assets.datacamp.com/course/intro_to_python/fifa.csv", skipinitialspace=True, usecols=['position', 'height'])
positions = list(fifa.position)
heights = list(fifa.height)

# Import numpy
import numpy as np

# Convert positions and heights to numpy arrays: np_positions, np_heights


# Heights of the goalkeepers: gk_heights


# Heights of the other players: other_heights


# Print out the median height of goalkeepers. Replace 'None'
print("Median height of goalkeepers: " + str(None))

# Print out the median height of other players. Replace 'None'
print("Median height of other players: " + str(None))
```

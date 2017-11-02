# Numpy Exercises

## Exercise 1
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

## Exercise 2
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

## Exercise 3
The MLB also offers to let you analyze their weight data. Again, both are available as regular Python lists: `height` and `weight`. `height` is in inches and `weight` is in pounds.

It's now possible to calculate the BMI of each baseball player. Python code to convert `height` to a `numpy` array with the correct units is already available in the code sample. Follow the instructions step by step and finish the game!

### Instructions
* Create a `numpy` array from the `weight` list with the correct units. Multiply by `0.453592` to go from pounds to kilograms. Store the resulting `numpy` array as `np_weight_kg`.
* Use `np_height_m` and `np_weight_kg` to calculate the BMI of each player. Use the following equation: $$ \mathrm{BMI} = \frac{\mathrm{weight (kg)}}{\mathrm{height (m)}^2}$$ Save the resulting `numpy` array as `bmi`.
* Print out `bmi`.

### Sample code
```{python}
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

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


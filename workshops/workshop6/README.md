# Workshop 6

Implementing Fauxtoshop

## Menu Option 1: Scatter

For this filter, your program will take the original image and “scatter” its pixels, making something that looks like a sand drawing that was shaken.
First, ask the user to provide a *“degree of scatter”* for how far we should scatter pixels. The value should be an integer between 1 and 100, inclusive (otherwise reprompt).

Then create a new image Grid that has the same dimensions as the original image Grid. Next, for each pixel in the new image, randomly select a pixel from nearby that row and column in the original image that will provide the color for this pixel in the new image. You will randomly select the pixel by randomly selecting a row that is within radius of the current row, and randomly selecting a column that is within radius of the current column. If the randomly selected row or column is out of bounds of the Grid of the original image, you should randomly select again until you get an in-bounds pixel.

## Menu Option 2: Edge Detection

For this filter, your program will create a new black and white image of the same size as the original, where a given pixel is black if it was an edge in the original image, and white if it was not an edge in the original image.

First, ask the user for a *threshold* that controls how different two adjacent pixels must be from each other to be considered an “edge.” This should be a positive (nonzero) integer value (otherwise re-prompt). Then, loop over each pixel and determine if it is an edge or not.

A pixel is defined as an edge if at least one of its neighbors has a difference of greater than threshold from it. The neighbors are the 9 pixels (including self) immediately adjacent or diagonal from the current “self” row/column of the Grid. So if my distances to my neighbors are: 9, 8, 5, 3, 3, 0 (self), 4, 7, 8, 7, then it would only be considered an edge if the threshold were less than 9 (the greatest difference between me and one of my neighbors). Remember that pixels near edges and corners may not have all 9 neighbors, so take care not to go out of bounds. The Grid class has an **inBounds** method that will be helpful.


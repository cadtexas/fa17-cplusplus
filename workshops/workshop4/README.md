# Workshop 4

## Fauxtoshop - Scatter
Discussed the alogrithm of the scatter function in Fauxtoshop:

```C++
/*This functions takes a GBufferedImage and GWindow and “scatters” its pixels,
  making something that looks like a sand drawing that was shaken.
  The function prompts the user to provide a “degree of scatter”
  for how far we should scatter pixels.
  The value should be an integer between 1 and 100, inclusive (otherwise it reprompts).*/

void scatterImage(GBufferedImage& img)
{
    // Get degree of scatter from user
    int degree;
    cout << "Enter degree of scatter: ";
    cin >> degree;

    // Convert image to Grid
    Grid<int> imageGrid = img.toGrid();

    // Loop through each pixel in image
    for (int r = 0; r < imageGrid.numRows(); r++) {
       for (int c = 0; c < imageGrid.numCols(); c++) {
            // find a randomColumn within degree of scatter
            int randCol = randomInteger(...);
            // find a randomColumn within degree of scatter
            int randRow = randomInteger(...);
           //move random pixel into current one
           imageGrid[r][c] = imageGrid[randRow][randCol];
       }
    }

    //convert imageGrid back to image
    img.fromGrid(imageGrid);

}
```

// This is the CPP file you will edit and turn in.
// Also remove these comments here and add your own.
// TODO: rewrite this comment

#include <iostream>
#include "console.h"
#include "gwindow.h"
#include "grid.h"
#include "simpio.h"
#include "strlib.h"
#include "gbufferedimage.h"
#include "gevents.h"
#include "math.h" //for sqrt and exp in the optional Gaussian kernel
#include "gmath.h" // for sinDegrees(), cosDegrees(), PI
using namespace std;

static const int    WHITE = 0xFFFFFF;
static const int    BLACK = 0x000000;
static const int    GREEN = 0x00FF00;

struct pixel{
    int row;
    int col;
};

void     doFauxtoshop(GWindow &gw, GBufferedImage &img);

void scatterImage(GBufferedImage &img);
int valuePrompt(string & prompt, int lowerBound, int upperBound);
pixel getRandomPixel(int row, int col, int radius, GBufferedImage &img);

bool     openImageFromFilename(GBufferedImage& img, string filename);
bool 	 saveImageToFilename(const GBufferedImage &img, string filename);
void     getMouseClickLocation(int &row, int &col);

Vector<double> gaussKernelForRadius(int radius);

/* STARTER CODE FUNCTION - DO NOT EDIT
 *
 * This main simply declares a GWindow and a GBufferedImage for use
 * throughout the program. By asking you not to edit this function,
 * we are enforcing that the GWindow have a lifespan that spans the
 * entire duration of execution (trying to have more than one GWindow,
 * and/or GWindow(s) that go in and out of scope, can cause program
 * crashes).
 */
int main() {
    GWindow gw;
    gw.setTitle("Fauxtoshop");
    gw.setVisible(true);
    GBufferedImage img;
    doFauxtoshop(gw, img);
    return 0;
}

/* This is yours to edit. Depending on how you approach your problem
 * decomposition, you will want to rewrite some of these lines, move
 * them inside loops, or move them inside helper functions, etc.
 *
 * TODO: rewrite this comment.
 */
void doFauxtoshop(GWindow &gw, GBufferedImage &img) {

    cout << "Welcome to Fauxtoshop!" << endl;
    cout << "Enter an image name: ";
    std::string imageName;
    cin >> imageName;
    openImageFromFilename(img, imageName);
    gw.setCanvasSize(img.getWidth(), img.getHeight());
    gw.add(&img,0,0);
    scatterImage(img);
}

/************** SCATTER IMAGE *****************/

/*This functions takes a GBufferedImage and GWindow and “scatters” its pixels,
 * making something that looks like a sand drawing that was shaken.
The function prompts the user to provide a “degree of scatter”
for how far we should scatter pixels.
The value should be an integer between 1 and 100, inclusive (otherwise it reprompts).*/
void scatterImage(GBufferedImage &img)
{

}


/* Prompts the user to enter a number between a lowerBound and upperBound (inclusive) specified
 Function returns the user's choice if a correct input is given, otherwise user is reprompted */
int valuePrompt(string & prompt, int lowerBound, int upperBound)
{
    int choice;
    do{
        cout << prompt << " ";
        cin >> choice;
    }while(choice < lowerBound || choice > upperBound);
    return choice;
}

/*Returns a randomly selected pixelexisting within the image bounds.
 The pixelis returned by randomly selecting a row within radius
 of the center pixel's row, and randomly selecting a column within radius of
 the center pixel's column.*/
pixel getRandomPixel(int row, int col, int radius, GBufferedImage &img)
{
   int rRow, rCol; //random row and column
   do{
       rRow = randomInteger(row - radius, row + radius);
       rCol = randomInteger(col - radius, col + radius);
   }while(rRow < 0 || rRow > img.getHeight() - 1 || rCol < 0 || rCol > img.getWidth() - 1);
   pixel randomP = {rRow, rCol};
   return randomP;
}



/* STARTER CODE HELPER FUNCTION - DO NOT EDIT
 *
 * Attempts to open the image file 'filename'.
 *
 * This function returns true when the image file was successfully
 * opened and the 'img' object now contains that image, otherwise it
 * returns false.
 */
bool openImageFromFilename(GBufferedImage& img, string filename) {
    try { img.load(filename); }
    catch (...) { return false; }
    return true;
}

/* STARTER CODE HELPER FUNCTION - DO NOT EDIT
 *
 * Attempts to save the image file to 'filename'.
 *
 * This function returns true when the image was successfully saved
 * to the file specified, otherwise it returns false.
 */
bool saveImageToFilename(const GBufferedImage &img, string filename) {
    try { img.save(filename); }
    catch (...) { return false; }
    return true;
}

/* STARTER CODE HELPER FUNCTION - DO NOT EDIT
 *
 * Waits for a mouse click in the GWindow and reports click location.
 *
 * When this function returns, row and col are set to the row and
 * column where a mouse click was detected.
 */
void getMouseClickLocation(int &row, int &col) {
    GMouseEvent me;
    do {
        me = getNextEvent(MOUSE_EVENT);
    } while (me.getEventType() != MOUSE_CLICKED);
    row = me.getY();
    col = me.getX();
}

/* HELPER FUNCTION
 *
 * This is a helper function for the Gaussian blur option.
 *
 * The function takes a radius and computes a 1-dimensional Gaussian blur kernel
 * with that radius. The 1-dimensional kernel can be applied to a
 * 2-dimensional image in two separate passes: first pass goes over
 * each row and does the horizontal convolutions, second pass goes
 * over each column and does the vertical convolutions. This is more
 * efficient than creating a 2-dimensional kernel and applying it in
 * one convolution pass.
 *
 * This code is based on the C# code posted by Stack Overflow user
 * "Cecil has a name" at this link:
 * http://stackoverflow.com/questions/1696113/how-do-i-gaussian-blur-an-image-without-using-any-in-built-gaussian-functions
 *
 */
Vector<double> gaussKernelForRadius(int radius) {
    if (radius < 1) {
        Vector<double> empty;
        return empty;
    }
    Vector<double> kernel(radius * 2 + 1);
    double magic1 = 1.0 / (2.0 * radius * radius);
    double magic2 = 1.0 / (sqrt(2.0 * PI) * radius);
    int r = -radius;
    double div = 0.0;
    for (int i = 0; i < kernel.size(); i++) {
        double x = r * r;
        kernel[i] = magic2 * exp(-x * magic1);
        r++;
        div += kernel[i];
    }
    for (int i = 0; i < kernel.size(); i++) {
        kernel[i] /= div;
    }
    return kernel;
}

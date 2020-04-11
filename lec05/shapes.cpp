#include "shapes.h"

// implementation of shape drawing functions


// define drawSquare
string drawSquare(int n) {
    string result = ""; // keep adding up character into this string

    // draw an n * n square of '*' characters
    // this outer loops makes sure to print n lines of (n stars)
    for (int i = 0; i < n; i++) { // iterate n times the outer loop
        // this inner loop worries about printing a single line of n stars
        for (int j = 0; j < n; j++) { // iterate n times the inner loop
            result = result + "* ";
        }
        result += '\n';
    }

    return result;
}

string drawTriangle(int width) {
    string result = ""; // keep adding up character into this string

    // if width is not odd or if it's < 1, then return empty string
    if (width % 2 == 0 || width < 1) {
        return "";
    }

    // if we didn't return yet, we have a valid width value!
    // we draw two more stars with each line
    for (int starsToDraw = 1; starsToDraw <= width; starsToDraw += 2) {
        // to know how many spaces we have on the left and right,
        // we subtract from our width the number of stars we're drawing
        // on our current line
        int spacesOnEachSide = (width - starsToDraw) / 2;

        for (int i = 0; i < spacesOnEachSide; i++) {
            result += ' ';
        }

        // add `starsToDraw` stars to our result variable
        for (int i = 0; i < starsToDraw; i++) {
            result += '*';
        }

        for (int i = 0; i < spacesOnEachSide; i++) {
            result += ' ';
        }

        // add a \n too
        result += '\n';
    }

    return result;
}

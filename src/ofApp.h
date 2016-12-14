#pragma once

#include "ofMain.h"
// This is a comment about comment


/*
 is the most recent release. It's a minor version, with bugfixes only, so it is fully compatible with projects developed for 0.9.0 or any newer version. Please see the changelog to get an overview of the differences between versions.
 To use openFrameworks you will need an IDE, and the setup guide for your platform can walk you through this. Please post any bugs on the issues page, and post to the forum if you have any other questions. openFrameworks is distributed under the MIT License.
 */

/*

void drawParallelogram(float x, float y,float x1, float w, float h) {
    
    ofDrawLine(x, y, x+w,y);
    ofDrawLine(x, y, x1,y+h);
    ofDrawLine(x1, y, x1+w,y+h);
    ofDrawLine(x1+w, y+h, x+w,y);
    
    
    
    
}
*/





class ofApp : public ofBaseApp
{
    
public:
    void setup();
    void update();
    void draw();
//    void drawParallelogram(float x, float y,float x1, float w, float h);
//    
    
//    int position = 0;
//    
//    float velocity = 6;
//    
//    int i=50;
//    
//
    
//    void drawParallelogram(float x, float y,float x1, float w, float h);
    
};


/*
void drawParallelogram(float x, float y,float x1, float w, float h) {
    void draw();
    
    ofDrawLine(x, y, x+w,y);
    ofDrawLine(x, y, x1,y+h);
    ofDrawLine(x1, y, x1+w,y+h);
    ofDrawLine(x1+w, y+h, x+w,y);
}
 */



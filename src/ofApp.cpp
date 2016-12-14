#include "ofApp.h"


void ofApp::setup(){
    ofBackground(0);
    
}



void ofApp::update(){
    
    
}


void ofApp::draw(){
    // things that show up on screen
    
    
    // draw paralell line

    int width =  ofGetWidth() / 2;
    int height = ofGetHeight() /2;
    int i = 165;
    int j = 195;
    for (i =165; i>=0; i=i-15){
        ofDrawLine(width+50, height-i, width+200, height-i);
        ofDrawLine(width+50, height+i, width+200, height+i);
    }
    for (j=195;j>=0; j=j-15){
        ofDrawLine(width-j, height-165, width-j, height+165);
    }
   
 

   // draw ping_xing_si_bian_xing
    ofNoFill();
    ofSetPolyMode(OF_POLY_WINDING_NONZERO);
    ofBeginShape();
    ofVertex(width+100,height-100);
    ofVertex(width+200,height-100);
    ofVertex(width+150,height+100);
    ofVertex(width+50,height+100);
    ofEndShape();
    
    //draw circle
    
    ofDrawCircle(width-100, height, 100);

    
    
    
    
    
}




   
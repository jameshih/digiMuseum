#pragma once

#include "ofMain.h"
#include "ofxFirstPersonCamera.h"
#include "imgLoader.h"
#include "text.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void drawText();
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(ofMouseEventArgs &mouse);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    //camera 
    ofxFirstPersonCamera cam;
    
    //variables
    bool trippy = false;
    float r,g,b,r2,g2,b2,counter;
    int interval = 1;
    int limNum = 700;
    
    
    //class
    imgLoader imgload;
    text drawtext;
};

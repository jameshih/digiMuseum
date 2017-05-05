#pragma once

#include "ofMain.h"
#include "ofxFirstPersonCamera.h"
#include "ofxCsv.h"
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
    
    //addon
    ofxFirstPersonCamera cam;
     ofxCsv csv;
        
    //variables
    bool trippy = false;
    bool fullScreen = true;
    float r,g,b,r2,g2,b2,counter;
    int interval = 1;
    int limNum = 700;
    
    
    std::array<string,11669>artistArr;
    std::array<string,11669>titleArr;
    std::array<string,11669>dateArr;
    std::array<string,11669>mediumArr;
    std::array<string,11669>dimensionArr;
    std::array<string,11669>creditArr;
    std::array<string,11669>accessionArr;
    std::array<string,11669>copyrightArr;
    
    
    //class
    imgLoader imgload;
    text drawtext;
    
};

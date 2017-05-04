//
//  imgLoader.h
//  img_nav_test
//
//  Created by James Shih on 4/24/17.
//
//

#ifndef imgLoader_h
#define imgLoader_h

#include "ofMain.h"

#endif /* imgLoader_h */

class imgLoader{
public:
    void setup();
    void update();
    void draw();
    
    //variables
    int maxNum = 18154;
    int setNum = 18154;
    int size =20;
    //float xArr[18154];
    //float zArr[18154];
    std::array<float,18154>xArr;
    std::array<float,18154>zArr;
    //std::array<ofVec3f,7000>posArr;
    
   // ofVec3f posArr[7000];
    ofPath path;
    ofImage img[18154];
    //18154
    ofFbo fbo;

    
    
};

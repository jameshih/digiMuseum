#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    
    drawtext.setup();
    ofEnableDepthTest();
    ofSetVerticalSync(true);
    imgload.setup();

    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    counter = 128 + 127 * cos(0.25 * PI/interval * (interval - ofGetElapsedTimef()*1000));
    //counter = ofGetElapsedTimef()*0.1;
    r = ofMap(counter, 0, 255,234,162);
    g = ofMap(counter, 0, 255,162,254);
    b = ofMap(counter, 0, 255,254,255);
    r2 = ofMap(counter, 0, 255,162,234);
    g2 = ofMap(counter, 0, 255,254,162);
    b2 = ofMap(counter, 0, 255,255,254);
    
    //debug
    cout << counter <<endl;

}

//--------------------------------------------------------------
void ofApp::draw(){
    

    imgload.draw();
    if(trippy == true){
        ofColor colorOne(r, g, b);
        ofColor colorTwo(r2, g2, b2);
        ofBackgroundGradient(colorOne, colorTwo, OF_GRADIENT_BAR);
    }else if(trippy == false){
        ofColor colorOne(255, 255, 255);
        ofColor colorTwo(255, 255, 255);
        ofBackgroundGradient(colorOne, colorTwo, OF_GRADIENT_BAR);
    }
    
    cam.begin();
    
    for(int i =1; i <imgload.setNum; i++){
        
        if(imgload.zArr[i]>= cam.pos.z-limNum
           && imgload.zArr[i] <= cam.pos.z+limNum
           && imgload.xArr[i]>= cam.pos.x-limNum
           && imgload.xArr[i] <= cam.pos.x+limNum){
            
            if(trippy==true)ofRotateZ(ofGetElapsedTimef()*0.1);
            imgload.img[i].draw(imgload.xArr[i],0,imgload.zArr[i],imgload.size,imgload.size);

        }
    }
    
    
    //debug
    //cout << cam.pos <<endl;
    
    cam.end();
    
    drawtext.draw();
    
    
   
  
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if(key == OF_KEY_SHIFT){
        if(trippy == true)trippy = false;
        else if (trippy == false) trippy = true;
    }
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(ofMouseEventArgs &mouse){
    
    cam.toggleControl();
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}

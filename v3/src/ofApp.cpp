#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetLogLevel("ofxCsv", OF_LOG_VERBOSE);
    // Load a CSV File.
    if(csv.load("data.csv")) {
        //csv.trim(); // Trim leading/trailing whitespace from non-quoted fields.
        
        // Like with C++ vectors, the index operator is a quick way to grab row
        // & col data, however this will cause a crash if the row or col doesn't
        // exist, ie. the file didn't load.
        for(int i = 0; i <11669;i++){
            
            artistArr[i] = csv[i][2];
            titleArr[i] = csv[i][3];
            dateArr[i] = csv[i][4];
            mediumArr[i] = csv[i][5];
            dimensionArr[i] = csv[i][6];
            creditArr[i] = csv[i][7];
            accessionArr[i]= csv[i][8];
            copyrightArr[i]= csv[i][9];
            
            //debug
            //ofLog() << artistArr[i];
        }
        
    }
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
    //cout << counter <<endl;
    
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
    
    for(int i =0; i <imgload.setNum; i++){
        
        if(imgload.zArr[i]>= cam.pos.z-limNum
           && imgload.zArr[i] <= cam.pos.z+limNum
           && imgload.xArr[i]>= cam.pos.x-limNum
           && imgload.xArr[i] <= cam.pos.x+limNum){
            
            if(trippy==true)ofRotateZ(ofGetElapsedTimef()*0.1);
            if(imgload.zArr[i]>= cam.pos.z-50
               && imgload.zArr[i] <= cam.pos.z+50
               && imgload.xArr[i]>= cam.pos.x-50
               && imgload.xArr[i] <= cam.pos.x+50 && trippy==false){
            ofSetColor(0);
            ofDrawBitmapString(artistArr[i], imgload.xArr[i], -2, imgload.zArr[i]);
            ofDrawBitmapString(titleArr[i], imgload.xArr[i], -3, imgload.zArr[i]);
            ofDrawBitmapString(dateArr[i], imgload.xArr[i], -4, imgload.zArr[i]);
            ofDrawBitmapString(mediumArr[i], imgload.xArr[i], -5, imgload.zArr[i]);
            //ofDrawBitmapString(dimensionArr[i], imgload.xArr[i], -6, imgload.zArr[i]);
            //ofDrawBitmapString(creditArr[i], imgload.xArr[i], -7, imgload.zArr[i]);
            //ofDrawBitmapString(accessionArr[i], imgload.xArr[i], -8, imgload.zArr[i]);
            //ofDrawBitmapString(copyrightArr[i], imgload.xArr[i], -9, imgload.zArr[i]);
            ofSetColor(255);
            }
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

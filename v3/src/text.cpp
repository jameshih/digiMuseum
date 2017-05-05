//
//  text.cpp
//  digiMuseum
//
//  Created by James Shih on 5/5/17.
//
//

#include "text.h"


void text::setup(){
    
}

void text::update(){
    
    
}



void text::draw(){
    
    ofSetColor(colorNum);
    ofDrawBitmapString("Control", 50, 50);
    ofDrawBitmapString("W - forward", 52, 65);
    ofDrawBitmapString("S - backward", 52, 80);
    ofDrawBitmapString("D - right", 52, 95);
    ofDrawBitmapString("A - left", 52, 110);
    ofDrawBitmapString("Space - fly/lock position", 52, 125);
    ofDrawBitmapString("Shift - toggle trippy mode", 52, 140);
    ofSetColor(255);
    
}

//
//  imgLoader.cpp
//  digiMuseum
//
//  Created by James Shih on 5/5/17.
//
//

#include "imgLoader.h"

void imgLoader::setup(){
    
    
    
    for(int i =0; i <maxNum; i++){
        
        //xArr[i]=((i*size)%6000)*ofRandomf();
        
        xArr[i]=ofRandom(-2200,2200);
        zArr[i]=ofRandom(-4700,4700);
        
        
        img[i].load("asset/"+ofToString(indexArr[i]) + ".jpg");
        fbo.allocate(100,100,GL_COLOR_BUFFER_BIT); //or GL_RED if you are using the programmable renderer
        fbo.begin();
        path.draw();
        fbo.end();
        
        img[i].getTexture().setAlphaMask(fbo.getTexture());
    }
    
}


void imgLoader::update(){
    
    
}

void imgLoader::draw(){
    
    
    
    //debug
    //cout << var << endl;
    
}



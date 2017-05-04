//
//  imgLoader.cpp
//  img_nav_test
//
//  Created by James Shih on 4/24/17.
//
//

#include "imgLoader.h"

void imgLoader::setup(){
    
    
    
    for(int i =0; i <maxNum; i++){
        
        //xArr[i]=((i*size)%6000)*ofRandomf();
        
        xArr[i]=ofRandom(-2000,2000);
        zArr[i]=ofRandom(-4500,4500);
        

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


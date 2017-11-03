#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetLogLevel(OF_LOG_ERROR);
	ofSetLogLevel("ofThread", OF_LOG_SILENT);
    
    camera.setup(0,0,1280,720);
}

//--------------------------------------------------------------
void ofApp::update(){

    
}

//--------------------------------------------------------------
void ofApp::draw(){
	

}

//--------------------------------------------------------------
void ofApp::keyPressed  (int key){
	if(key == 'f'){
		camera.videoPreview.videoPosition(100,0,1280,720);
	}else if(key == 'd'){
		camera.videoPreview.videoPosition(0,0,1280,720);
	}

    cout << camera.isReady() << endl;
}

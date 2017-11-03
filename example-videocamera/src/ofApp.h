#pragma once

#include "ofMain.h"
#include "VideoCamera.h"


class ofApp : public ofBaseApp{

	public:

		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);

	
		VideoCamera camera;
    	
};


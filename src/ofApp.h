#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    
        ofSoundPlayer  sound0;
		ofSoundPlayer  sound1;
        ofSoundPlayer  sound2;
		ofSoundPlayer  sound3;
        ofSoundPlayer  sound4;
        ofSoundPlayer  sound5;
        ofSoundPlayer  sound6;
        ofSoundPlayer  sound7;
    
    

		ofTrueTypeFont	font;
		float 			synthPosition;
		
};


#pragma once

#include "ofMain.h"
#include "ofxOsc.h"

#define PORT 6999

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
    
        ofxOscReceiver receiver;
    
        int rxButton1, rxButton2, rxButton3, rxButton4, rxButton5, rxButton6, rxButton7;
    
        bool somethingIsPlaying;

		ofTrueTypeFont	font;
};


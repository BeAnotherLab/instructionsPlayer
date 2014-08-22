#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //change paths to select new sounds
    
	sound0.loadSound("sounds/fab10.mp3");
    sound1.loadSound("sounds/Welcome.mp3");
	sound2.loadSound("sounds/Legs.mp3");
	sound3.loadSound("sounds/Part2.mp3");
    sound4.loadSound("sounds/Slowly.mp3");
	sound5.loadSound("sounds/CloseEyes.mp3");
	sound6.loadSound("sounds/Part3.mp3");
    sound7.loadSound("sounds/Goodbye.mp3");
    
	font.loadFont("luximb.ttf", 12);
    
    sound0.play(); //initialize music
}

//--------------------------------------------------------------
void ofApp::update(){

	ofBackground(255,255,255);

	// update the sound playing system:
	ofSoundUpdate();

}

//--------------------------------------------------------------
void ofApp::draw(){

	// draw the background colors:
	float widthDiv = ofGetWidth() / 3.0f;
    float heightDiv = ofGetHeight() / 7.0f;
    bool voiceIsPlaying;
    
    //buttons
	ofSetHexColor(0xeeeeee);
	ofRect(0,0,ofGetWidth(),heightDiv);
	ofSetHexColor(0xdddddd);
	ofRect(0,heightDiv,ofGetWidth(),heightDiv);
	ofSetHexColor(0xeeeeee);
	ofRect(0,heightDiv*2,ofGetWidth(),heightDiv);
    ofSetHexColor(0xdddddd);
	ofRect(0,heightDiv*3,ofGetWidth(),heightDiv);
	ofSetHexColor(0xeeeeee);
	ofRect(0,heightDiv*4,ofGetWidth(),heightDiv);
    ofSetHexColor(0xdddddd);
    ofRect(0,heightDiv*5,ofGetWidth(),heightDiv);
    ofSetHexColor(0xeeeeee);
	ofRect(0,heightDiv*6,ofGetWidth(),heightDiv);


	if (sound1.getIsPlaying()) {
        ofSetHexColor(0xFF0000); //text color
        voiceIsPlaying;
    } else {
        ofSetHexColor(0x000000);
        voiceIsPlaying == false;
    }
        font.drawString("sound 1", 20,40);

    
	if (sound2.getIsPlaying()) {
        ofSetHexColor(0xFF0000);
        voiceIsPlaying;
    } else {
        ofSetHexColor(0x000000);
        voiceIsPlaying == false;
    }
        font.drawString("sound 2", 20,heightDiv+40);
        

	if (sound3.getIsPlaying()){
        ofSetHexColor(0xFF0000);
        voiceIsPlaying;
    } else {
        ofSetHexColor(0x000000);
        voiceIsPlaying == false;
    }
        font.drawString("sound 3", 20,heightDiv*2+40);
    
    if (sound4.getIsPlaying()){
        ofSetHexColor(0xFF0000);
        voiceIsPlaying;
	} else {
        ofSetHexColor(0x000000);
        voiceIsPlaying == false;
    }
        font.drawString("sound 4", 20,heightDiv*3+40);
    
    
    if (sound5.getIsPlaying()) {
        ofSetHexColor(0xFF0000);
        voiceIsPlaying;
	} else {
        ofSetHexColor(0x000000);
        voiceIsPlaying == false;
    }
        font.drawString("sound 5", 20,heightDiv*4+40);
    
    
    if (sound6.getIsPlaying()){
        ofSetHexColor(0xFF0000);
        voiceIsPlaying;
	} else {
        ofSetHexColor(0x000000);
        voiceIsPlaying == false;
    }
        font.drawString("sound 6", 20,heightDiv*5+40);
    
    
    if (sound7.getIsPlaying()) {
        ofSetHexColor(0xFF0000);
        voiceIsPlaying;
	} else {
        ofSetHexColor(0x000000);
        voiceIsPlaying == false;
    }
        font.drawString("sound 7", 20,heightDiv*6+40);
    
    
    if (voiceIsPlaying)
        sound0.setVolume(0.5); //sidechain gate
    

}

//--------------------------------------------------------------
void ofApp::keyPressed  (int key){
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
void ofApp::mousePressed(int x, int y, int button){
    
	float heightStep = ofGetHeight() / 7.0f;
    
	if (y < heightStep && !sound1.getIsPlaying()){
		sound1.play();
	} else if (y >= heightStep && y < heightStep*2 && !sound2.getIsPlaying()){
		sound2.play();
	} else if (y >= heightStep*2 && y < heightStep*3 && !sound3.getIsPlaying()){
		sound3.play();
    } else if (y >= heightStep*3 && y < heightStep*4 && !sound4.getIsPlaying()){
		sound4.play();
    } else if (y >= heightStep*4 && y < heightStep*5 && !sound5.getIsPlaying()){
		sound5.play();
    } else if (y >= heightStep*5 && y < heightStep*6 && !sound6.getIsPlaying()){
		sound6.play();
    } else if (y >= heightStep*6 && y < heightStep*7 && !sound7.getIsPlaying()){
		sound7.play();
    }
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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

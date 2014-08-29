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
    
    receiver.setup(PORT);
    cout << "listening for osc messages on port " << PORT << "\n";
    
    sound0.play(); //initialize music
}

//--------------------------------------------------------------
void ofApp::update(){

	ofBackground(255,255,255);

	// update the sound playing system:
	ofSoundUpdate();
    
    //OSC receiver
    while(receiver.hasWaitingMessages()){
        ofxOscMessage m;
        receiver.getNextMessage(&m);
        
        //had to add independent buttons for each separator
        
        if(m.getAddress() == "/btn1"){
            rxButton1 = m.getArgAsInt32(0);
        }
        
        if(m.getAddress() == "/btn2"){
            rxButton2 = m.getArgAsInt32(0);
        }
        
        if(m.getAddress() == "/btn3"){
            rxButton3 = m.getArgAsInt32(0);
        }
        
        if(m.getAddress() == "/btn4"){
            rxButton4 = m.getArgAsInt32(0);
        }
        
        if(m.getAddress() == "/btn5"){
            rxButton5 = m.getArgAsInt32(0);
        }
        
        if(m.getAddress() == "/btn6"){
            rxButton6 = m.getArgAsInt32(0);
         }
        
        if(m.getAddress() == "/btn7"){
            rxButton7 = m.getArgAsInt32(0);
        }
        
    }
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
    
    cout << rxButton1 << " osc \n";
    
    ofSetHexColor(0x000000);
    font.drawString((ofToString(rxButton1)), 5,15);
    
    if (sound1.getIsPlaying() || sound2.getIsPlaying() || sound3.getIsPlaying() || sound4.getIsPlaying() || sound5.getIsPlaying() || sound6.getIsPlaying() || sound7.getIsPlaying()) {
        somethingIsPlaying = true;
    }
    
    else somethingIsPlaying = false;

    //play tracks through OSC buttons
    if (rxButton1 == 1 && !somethingIsPlaying){ //&& !sound1.getIsPlaying()
		sound1.play();
	}
    
    else if (rxButton2 == 1 && !somethingIsPlaying){
		sound2.play();
	}
    
    else if (rxButton3 == 1 && !somethingIsPlaying){
		sound3.play();
    }
    
    else if (rxButton4 == 1 && !somethingIsPlaying){
		sound4.play();
    }
    
    else if (rxButton5 == 1 && !somethingIsPlaying){
		sound5.play();
    }
    
    else if (rxButton6 == 1 && !somethingIsPlaying){
		sound6.play();
    }
    
    else if (rxButton7 == 1 && !somethingIsPlaying){
		sound7.play();
    }
    
    
    
	if (sound1.getIsPlaying()) {
        ofSetHexColor(0xFF0000); //text color
        voiceIsPlaying;
    } else {
        ofSetHexColor(0x000000);
        voiceIsPlaying == false;
    }
        font.drawString("sound 1", 15,40);

    
	if (sound2.getIsPlaying()) {
        ofSetHexColor(0xFF0000);
        voiceIsPlaying;
    } else {
        ofSetHexColor(0x000000);
        voiceIsPlaying == false;
    }
        font.drawString("sound 2", 15,heightDiv+40);
        

	if (sound3.getIsPlaying()){
        ofSetHexColor(0xFF0000);
        voiceIsPlaying;
    } else {
        ofSetHexColor(0x000000);
        voiceIsPlaying == false;
    }
        font.drawString("sound 3", 15,heightDiv*2+40);
    
    if (sound4.getIsPlaying()){
        ofSetHexColor(0xFF0000);
        voiceIsPlaying;
	} else {
        ofSetHexColor(0x000000);
        voiceIsPlaying == false;
    }
        font.drawString("sound 4", 15,heightDiv*3+40);
    
    
    if (sound5.getIsPlaying()) {
        ofSetHexColor(0xFF0000);
        voiceIsPlaying;
	} else {
        ofSetHexColor(0x000000);
        voiceIsPlaying == false;
    }
        font.drawString("sound 5", 15,heightDiv*4+40);
    
    
    if (sound6.getIsPlaying()){
        ofSetHexColor(0xFF0000);
        voiceIsPlaying;
	} else {
        ofSetHexColor(0x000000);
        voiceIsPlaying == false;
    }
        font.drawString("sound 6", 15,heightDiv*5+40);
    
    
    if (sound7.getIsPlaying()) {
        ofSetHexColor(0xFF0000);
        voiceIsPlaying;
	} else {
        ofSetHexColor(0x000000);
        voiceIsPlaying == false;
    }
        font.drawString("sound 7", 15,heightDiv*6+40);
    
    
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

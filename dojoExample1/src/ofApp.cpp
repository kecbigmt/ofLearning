#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(600, 400);
    ofSetFrameRate(30);
    ofSetBackgroundAuto(false);
    ofSetBackgroundColor(255, 255, 255);
    ofSetCircleResolution(64);

    rad = 0.0;
}

//--------------------------------------------------------------
void ofApp::update(){
    rad += 0.05;
    posX = 300 + 150 * cos(rad * 5);
    posY = 200 + 150 * sin(rad * 6);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(215, 19, 69);
    ofDrawCircle(posX, posY, 20);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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

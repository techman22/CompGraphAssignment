#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	using namespace glm;
	ofDisableArbTex();

	partMesh.addVertex(vec3(-1, -1, 0));
	partMesh.addVertex(vec3(-1, 1, 0));
	partMesh.addVertex(vec3(1, 1, 0));
	partMesh.addVertex(vec3(1, -1, 0));

	partMesh.addTexCoord(vec2(0, 0));
	partMesh.addTexCoord(vec2(0, 1));
	partMesh.addTexCoord(vec2(1, 1));
	partMesh.addTexCoord(vec2(1, 0));

	partMesh.addColor(ofDefaultColorType(1, 0, 0, 1));
	partMesh.addColor(ofDefaultColorType(0, 1, 0, 1));
	partMesh.addColor(ofDefaultColorType(0, 0, 1, 1));
	partMesh.addColor(ofDefaultColorType(1, 1, 1, 1));

	ofIndexType indices[6] = { 0, 1, 2, 2, 3, 0 };
	partMesh.addIndices(indices, 6);

	shader.load("Shaders/ParticleVert.vert", "Shaders/ParticleFrag.frag");
	img.load("textures/star_01.png");

	
}

//--------------------------------------------------------------
void ofApp::update()
{
	particleSystem.update(ofGetLastFrameTime());
}

//--------------------------------------------------------------
void ofApp::draw()
{
	shader.begin();
	//template given by intro vid
	for (const SimpleParticle& p : particleSystem)
	{
		shader.setUniformTexture("particleTex", img, 0);
		if (p.getLife() > 0) {
			partMesh.draw();
		}
		//partMesh.draw();
	}
	shader.end();
	//shader.setUniformTexture("particleTex", img, 0);
	
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

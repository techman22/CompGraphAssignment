#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	using namespace glm;
	ofDisableArbTex();
	ofDisableDepthTest();

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

	quad.addVertex(vec3(-1, -1, 0));
	quad.addVertex(vec3(-1, 1, 0));
	quad.addVertex(vec3(1, 1, 0));
	quad.addVertex(vec3(1, -1, 0));

	shader.load("Shaders/ParticleVert.vert", "Shaders/ParticleFrag.frag");
	img.load("textures/star_01.png");
	img2.load("textures/star_07.png");
	img3.load("textures/star_08.png");
}

//--------------------------------------------------------------
void ofApp::update()
{
	particleSystem.update(ofGetLastFrameTime());
	//particleSystem2.update(ofGetLastFrameTime());
}

//--------------------------------------------------------------
void ofApp::draw()
{
	//background
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);

	shader.begin();

	//template given by intro vid
	for (const SimpleParticle& p : particleSystem)
	{
		if (p.getParticleType() == 0) { shader.setUniformTexture("particleTex", img, 0); }
		else if (p.getParticleType() == 1) { shader.setUniformTexture("particleTex", img2, 0); }
		else if (p.getParticleType() == 2) { shader.setUniformTexture("particleTex", img, 0); }
		//shader.setUniformTexture("particleTex", img, 0);
		if (p.getLife() > 0) {
			shader.setUniform3f("translation", p.getRandomizePosition());
			partMesh.draw();
		}
		//partMesh.draw();
	}
	/*
	for (const SimpleParticle2& p : particleSystem2)
	{
		int randImg = rand() % 4;
		if (randImg == 0) { shader.setUniformTexture("particleTex", cometImg, 0); }
		else if (randImg == 1) { shader.setUniformTexture("particleTex", cometImg2, 0); }
		else if (randImg == 2) { shader.setUniformTexture("particleTex", cometImg3, 0); }
		else if (randImg == 3) { shader.setUniformTexture("particleTex", cometImg4, 0); }
		else if (randImg == 4) { shader.setUniformTexture("particleTex", cometImg5, 0); }
		if (p.getLife() > 0) {
			shader.setUniform3f("translation", p.getRandomizePosition());
			partMesh.draw();
		}
	}*/
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

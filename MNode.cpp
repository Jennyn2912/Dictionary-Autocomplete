#include "MNode.hpp"

MNode::MNode() {
	key = false;
	freq = 0;

	int i;
	for (i = 0 ; i < 27; i++) {
		this->array[i] = NULL;
	}
}

MNode::~MNode() {
	delete this; 
}


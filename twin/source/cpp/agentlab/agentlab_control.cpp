#include <XTL.h>
#include <stl.h>
#include <instance_ctx\instance_node_abstract.h>
#include "agentlab_control.h"


LayerControl::LayerControl() {
	g2 = g2 & 0xFC;
	g3 = -1;
	a = 0;
	b = 0;
	c = 0;
	elseControl = 0.0f;
	time = 0;
}

LayerControl::~LayerControl() {
	
}

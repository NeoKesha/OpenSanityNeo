#include <XTL.h>
#include <stl.h>
#include "libtwin.h"
#ifdef DEBUG
#include "..\debug\libdbg.h"
extern char buffer[1024];
#endif


float __cdecl ClampFloat(float val, float min, float max) {
#ifdef DEBUG
	sprintf(buffer, "Clamp %f, %f, %f ", val, min, max);
	Log(buffer);
#endif
	if (val < min || _isnan(val)) { //additional NaN check
#ifdef DEBUG
		sprintf(buffer, "=> min\n");
		Log(buffer);
#endif
		return min;
	}
	if (val > max) {
#ifdef DEBUG
		sprintf(buffer, "=> max\n");
		Log(buffer);
#endif
		return max;
	}
#ifdef DEBUG
	sprintf(buffer, "=> no clamp\n");
	Log(buffer);
#endif
	return val;
}
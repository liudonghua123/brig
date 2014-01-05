#ifndef BRIG_H
#define BRIG_H

#include <node.h>

namespace Brig {

	using namespace v8;
	using namespace node;

	class QObjectWrap;
	class QmlEngineWrap;
	class QmlContextWrap;
	class QmlComponentWrap;
	class QuickViewWrap;
	class QuickWindowWrap;

	typedef enum {
		BRIG_CONTAINER_NATIVE
	} BrigContainerType;
}

#include "qobject.h"
#include "qapplication.h"
#include "qmlengine.h"
#include "qmlcontext.h"
#include "qmlcomponent.h"
#include "quickview.h"
#include "quickwindow.h"

#endif

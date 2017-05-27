#pragma once
#include "afx.h"
#include "GPointF.h"

namespace OldGraphElement {
#include "../CommonFiles/GraphElement.h"
}

class GraphElement : public OldGraphElement::GraphElement {
public:
	GraphElement(Color color = Color::White) : OldGraphElement::GraphElement(color) {}

	virtual void paintPerspective(Graphics &graphics, PointF center, GPointF viewPoint) {};

};
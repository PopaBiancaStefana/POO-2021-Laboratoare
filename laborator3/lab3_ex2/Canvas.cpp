#include "Canvas.h"

Canvas::Canvas(int width, int height)
{
	this->width = width;
	this->height = height;
	Clear();
}

void Canvas::Clear()
{
	memset(m, ' ', sizeof(m));
}
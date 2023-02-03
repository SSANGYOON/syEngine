#include "syComponent.h"


namespace sy
{
	Component::Component(const enums::eComponentType type)
		: mType(type)
		, mOwner(nullptr)
	{
	}
	Component::~Component()
	{
	}
}
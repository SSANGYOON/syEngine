#pragma once
#include "syMath.h"
#include "syEntity.h"


namespace sy
{
	class GameObject;
	class Component : public Entity
	{
	public:
		Component(enums::eComponentType type);
		virtual ~Component();

		virtual void Initalize() = 0;
		virtual void Update() = 0;
		virtual void FixedUpdate() = 0;
		virtual void Render() = 0;

		UINT GetOrder() { return (UINT)mType; };

		GameObject* GetOwner() { return mOwner; }
		void SetOwner(GameObject* owner) { mOwner = owner; }

	private:
		const enums::eComponentType mType;
		GameObject* mOwner;
	};
}
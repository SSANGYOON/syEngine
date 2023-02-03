#pragma once
#include "syEntity.h"
#include "syLayer.h"
#include "syGameObject.h"

namespace sy
{
	using namespace sy::enums;
	class Scene : public Entity
	{
	public:
		Scene();
		virtual ~Scene();

		virtual void Initalize();
		virtual void Update();
		virtual void FixedUpdate();
		virtual void Render();

		void AddGameObject(GameObject* gameObj, const eLayerType type);

	private:
		std::vector<Layer> mLayers;
	};
}

#pragma once

namespace sy::enums
{
	enum class eLayerType
	{
		None,
		Monster,
		Player,
		End = 16
	};
	enum class eComponentType
	{
		None,
		Transform,
		Camera,
		Mesh,
		Collider,
		//Collider2,
		UI,
		Script,
		End,
	};

	enum class eResourceType
	{
		Mesh,
		Texture,
		Material,
		Sound,
		Prefab,
		MeshData,
		GraphicShader,
		ComputeShader,
		End,
	};
}
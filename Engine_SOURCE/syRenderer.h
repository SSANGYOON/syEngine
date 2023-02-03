#pragma once
#include "CommonInclude.h"
#include "syMath.h"
#include "syGraphicDevice_DX11.h"

#include "syMesh.h"
#include "syShader.h"
#include "syConstantBuffer.h"

using namespace sy::math;
using namespace sy::graphics;

namespace sy::renderer
{
	struct Vertex
	{
		Vector3 pos;
		Vector4 color;
	};

	extern Vertex vertexes[4];
	extern Mesh* mesh;
	extern ConstantBuffer* constantBuffers[];
	extern Shader* shader;

	void Initialize();
	void Release();
}
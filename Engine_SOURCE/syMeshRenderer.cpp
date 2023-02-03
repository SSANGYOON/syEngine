#include "syMeshRenderer.h"
#include "syGameObject.h"
#include "syTransform.h"
namespace sy
{
	MeshRenderer::MeshRenderer()
		: Component(enums::eComponentType::Mesh)
	{
	}

	MeshRenderer::~MeshRenderer()
	{
	}

	void MeshRenderer::Initalize()
	{
	}

	void MeshRenderer::Update()
	{
	}

	void MeshRenderer::FixedUpdate()
	{
	}

	void MeshRenderer::Render()
	{
		GetOwner()->GetComponent<Transform>()->SetConstantBuffer();

		mShader->Binds();
		mMesh->BindBuffer();

		mMesh->Render();
	}
}
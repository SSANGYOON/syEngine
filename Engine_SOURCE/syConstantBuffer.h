#pragma once
#include "syGraphics.h"

using namespace sy::enums;
namespace sy::graphics
{
	class ConstantBuffer : GpuBuffer
	{
	public:
		ConstantBuffer();
		virtual ~ConstantBuffer();

		bool Create(size_t size);
		void Bind(void* data);
		void SetPipline(eShaderStage stage);

	private:
		const eCBType mType;
	};
}


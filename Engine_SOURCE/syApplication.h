#pragma once
#include "syEngine.h"
#include "syGraphics.h"
#include "syGraphicDevice_DX11.h"

namespace sy
{
	class Application
	{
	public:
		Application();
		~Application();

		void Run();

		virtual void Initialize();
		virtual void Update();
		virtual void FixedUpdate();
		virtual void Render();

		void SetWindow(HWND hwnd, UINT width, UINT height);

		void SetHwnd(HWND hwnd) { mHwnd = hwnd; }
		HWND GetHwnd() { return mHwnd; }
		UINT GetWidth() { return mWidth; }
		UINT GetHeight() { return mHeight; }

	private:
		bool initialized = false;
		std::unique_ptr<graphics::GraphicDevice_DX11> graphicDevice;

		HWND mHwnd;
		HDC mHdc;
		UINT mHeight;
		UINT mWidth;
	};
}


/*
	ManagedBlendELF
	-----------------------------------------------------------
	 Copyright (C) 2010 Michael Gale

  	This software is provided 'as-is', without any express or implied
  	warranty.  In no event will the authors be held liable for any damages
  	arising from the use of this software.

  	Permission is granted to anyone to use this software for any purpose,
  	including commercial applications, and to alter it and redistribute it
  	freely, subject to the following restrictions:

  	1. The origin of this software must not be misrepresented; you must not
       claim that you wrote the original software. If you use this software
       in a product, an acknowledgment in the product documentation would be
       appreciated but is not required.
  	2. Altered source versions must be plainly marked as such, and must not be
       misrepresented as being the original software.
  	3. This notice may not be removed or altered from any source distribution.
*/

#pragma once

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;

namespace ManagedBlendELF {
	public ref class RenderControl : Control {
	private:
		BlendELF^ elf;
		bool isInitialised;
	public:
		RenderControl()
		{
			this->elf = gcnew BlendELF();
			this->isInitialised = false;
		}

		property BlendELF^ Engine
		{
			BlendELF^ get()
			{
				return this->elf;
			}
		}

		void Initialise()
		{
			if(!this->elf->InitWithHWND(this->Width, this->Height, "", false, (UInt16)this->Handle.ToInt64()))
					throw gcnew BlendELFException("Unable to initialise BlendELF.");

			this->isInitialised = true;
		}

		virtual void OnShown(EventArgs^ args) override
		{
			if(!this->DesignMode)
			{
				/*if(!this->elf->InitWithHWND(this->Width, this->Height, "", false, (UInt16)this->Handle.ToInt64()))
					throw gcnew BlendELFException("Unable to initialise BlendELF.");

				this->isInitialised = true;*/
			}
		}

		virtual void OnPaint(PaintEventArgs^ args) override
		{
			if((!this->DesignMode) && (this->isInitialised))
				this->elf->Run();
		}
	};
}

/*
	End of File
*/

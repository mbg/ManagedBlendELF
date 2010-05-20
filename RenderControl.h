
#pragma once

using namespace System::Windows::Forms;

namespace ManagedBlendELF {
	public ref class RenderControl : Control {
	private:
		BlendELF^ elf;
	public:
		RenderControl()
		{
			this->elf = gcnew BlendELF();
		}

		property BlendELF^ Engine
		{
			BlendELF^ get()
			{
				return this->elf;
			}
		}
	};
}
#include "stdafx.h"
#include "ManagedBlendELF.h"

using namespace ManagedBlendELF;

bool BlendELF::InitWithHWND(int width, int height, String^ title, bool fullscreen, unsigned int hwnd) {
	try {
		return elfInitWithHWND(width, height, toUnmanagedString(title), fullscreen, (HWND)hwnd);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

unsigned int BlendELF::GetWindowHWND() {
	try {
		return (unsigned int)elfGetWindowHWND();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::IsObject(EngineHandle^ obj) {
	try {
		return elfIsObject(*obj->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

ObjectType BlendELF::GetObjectType(EngineHandle^ obj) {
	try {
		return (ObjectType)elfGetObjectType(*obj->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetObjectRefCount(EngineHandle^ obj) {
	try {
		return elfGetObjectRefCount(*obj->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetGlobalRefCount() {
	try {
		return elfGetGlobalRefCount();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetGlobalObjCount() {
	try {
		return elfGetGlobalObjCount();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::IsActor(EngineHandle^ obj) {
	try {
		return elfIsActor(*obj->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::IsGuiObject(EngineHandle^ obj) {
	try {
		return elfIsGuiObject(*obj->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::CreateList() {
	try {
		elf_handle* result = new elf_handle();
		*result = elfCreateList();
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetListLength(EngineHandle^ list) {
	try {
		return elfGetListLength(*list->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::InsertToList(EngineHandle^ list, int idx, EngineHandle^ obj) {
	try {
		elfInsertToList(*list->GetHandle(), idx, *obj->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::AppendToList(EngineHandle^ list, EngineHandle^ obj) {
	try {
		elfAppendToList(*list->GetHandle(), *obj->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::RemoveFromList(EngineHandle^ list, EngineHandle^ obj) {
	try {
		return elfRemoveFromList(*list->GetHandle(), *obj->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetItemFromList(EngineHandle^ list, int idx) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetItemFromList(*list->GetHandle(), idx);
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::BeginList(EngineHandle^ list) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfBeginList(*list->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::NextInList(EngineHandle^ list) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfNextInList(*list->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::RbeginList(EngineHandle^ list) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfRbeginList(*list->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::RnextInList(EngineHandle^ list) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfRnextInList(*list->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SeekList(EngineHandle^ list, EngineHandle^ ptr) {
	try {
		elfSeekList(*list->GetHandle(), *ptr->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::RseekList(EngineHandle^ list, EngineHandle^ ptr) {
	try {
		elfRseekList(*list->GetHandle(), *ptr->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetTitle(String^ title) {
	try {
		elfSetTitle(toUnmanagedString(title));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetWindowWidth() {
	try {
		return elfGetWindowWidth();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetWindowHeight() {
	try {
		return elfGetWindowHeight();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::IsFullscreen() {
	try {
		return elfIsFullscreen();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

String^ BlendELF::GetTitle() {
	try {
		return gcnew String(elfGetTitle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetMultisamples() {
	try {
		return elfGetMultisamples();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

double BlendELF::GetTime() {
	try {
		return elfGetTime();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::IsWindowOpened() {
	try {
		return elfIsWindowOpened();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector2i^ BlendELF::GetMousePosition() {
	try {
		elf_vec2i* result = new elf_vec2i();
		*result = elfGetMousePosition();
		return gcnew Vector2i(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector2i^ BlendELF::GetMouseForce() {
	try {
		elf_vec2i* result = new elf_vec2i();
		*result = elfGetMouseForce();
		return gcnew Vector2i(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetMousePosition(int x, int y) {
	try {
		elfSetMousePosition(x, y);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::HideMouse(bool hide) {
	try {
		elfHideMouse(hide);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::IsMouseHidden() {
	try {
		return elfIsMouseHidden();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetMouseWheel() {
	try {
		return elfGetMouseWheel();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineButtonState BlendELF::GetMouseButtonState(MouseButton button) {
	try {
		return (EngineButtonState)elfGetMouseButtonState((int)button);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineKeyState BlendELF::GetKeyState(EngineKey key) {
	try {
		return (EngineKeyState)elfGetKeyState((int)key);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::GetJoystickPresent(int joy) {
	try {
		return elfGetJoystickPresent(joy);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector2f^ BlendELF::GetJoystickAxis(int joy) {
	try {
		elf_vec2f* result = new elf_vec2f();
		*result = elfGetJoystickAxis(joy);
		return gcnew Vector2f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetJoystickButtonState(int joy, int but) {
	try {
		return elfGetJoystickButtonState(joy, but);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetEventCount() {
	try {
		return elfGetEventCount();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetEvent(int idx) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetEvent(idx);
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::ReadGameConfig(String^ file_path) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfReadGameConfig(toUnmanagedString(file_path));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetGameConfigWindowWidth(EngineHandle^ config) {
	try {
		return elfGetGameConfigWindowWidth(*config->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetGameConfigWindowHeight(EngineHandle^ config) {
	try {
		return elfGetGameConfigWindowHeight(*config->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::GetGameConfigFullscreen(EngineHandle^ config) {
	try {
		return elfGetGameConfigFullscreen(*config->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetGameConfigTextureAnisotropy(EngineHandle^ config) {
	try {
		return elfGetGameConfigTextureAnisotropy(*config->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetGameConfigShadowMapSize(EngineHandle^ config) {
	try {
		return elfGetGameConfigShadowMapSize(*config->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

String^ BlendELF::GetGameConfigStart(EngineHandle^ config) {
	try {
		return gcnew String(elfGetGameConfigStart(*config->GetHandle()));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::Init(int width, int height, String^ title, bool fullscreen) {
	try {
		return elfInit(width, height, toUnmanagedString(title), fullscreen);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::InitWithConfig(String^ file_path) {
	try {
		return elfInitWithConfig(toUnmanagedString(file_path));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetVersionMajor() {
	try {
		return elfGetVersionMajor();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetVersionMinor() {
	try {
		return elfGetVersionMinor();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

String^ BlendELF::GetVersionRelease() {
	try {
		return gcnew String(elfGetVersionRelease());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

String^ BlendELF::GetVersion() {
	try {
		return gcnew String(elfGetVersion());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::Run() {
	try {
		return elfRun();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::Quit() {
	try {
		elfQuit();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetF10Exit(bool exit) {
	try {
		elfSetF10Exit(exit);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::GetF10Exit() {
	try {
		return elfGetF10Exit();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::LoadScene(String^ file_path) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfLoadScene(toUnmanagedString(file_path));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetScene(EngineHandle^ scene) {
	try {
		elfSetScene(*scene->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetScene() {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetScene();
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetGui(EngineHandle^ gui) {
	try {
		elfSetGui(*gui->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetGui() {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetGui();
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetSync() {
	try {
		return elfGetSync();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetFps() {
	try {
		return elfGetFps();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::SaveScreenShot(String^ file_path) {
	try {
		return elfSaveScreenShot(toUnmanagedString(file_path));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetFpsLimit(int fps_limit) {
	try {
		elfSetFpsLimit(fps_limit);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetFpsLimit() {
	try {
		return elfGetFpsLimit();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetTickRate(float tick_rate) {
	try {
		elfSetTickRate(tick_rate);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetTickRate() {
	try {
		return elfGetTickRate();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetSpeed(float speed) {
	try {
		elfSetSpeed(speed);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetSpeed() {
	try {
		return elfGetSpeed();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetTextureAnisotropy(float anisotropy) {
	try {
		elfSetTextureAnisotropy(anisotropy);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetTextureAnisotropy() {
	try {
		return elfGetTextureAnisotropy();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetShadowMapSize(int size) {
	try {
		elfSetShadowMapSize(size);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetShadowMapSize() {
	try {
		return elfGetShadowMapSize();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetPolygonsRendered() {
	try {
		return elfGetPolygonsRendered();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetBloom(float threshold) {
	try {
		elfSetBloom(threshold);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::DisableBloom() {
	try {
		elfDisableBloom();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetBloomThreshold() {
	try {
		return elfGetBloomThreshold();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetDof(float focal_range, float focal_distance) {
	try {
		elfSetDof(focal_range, focal_distance);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::DisableDof() {
	try {
		elfDisableDof();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetDofFocalRange() {
	try {
		return elfGetDofFocalRange();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetDofFocalDistance() {
	try {
		return elfGetDofFocalDistance();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetSsao(float amount) {
	try {
		elfSetSsao(amount);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::DisableSsao() {
	try {
		elfDisableSsao();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetSsaoAmount() {
	try {
		return elfGetSsaoAmount();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetLightShafts(float intensity) {
	try {
		elfSetLightShafts(intensity);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::DisableLightShafts() {
	try {
		elfDisableLightShafts();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetLightShaftsInteisity() {
	try {
		return elfGetLightShaftsInteisity();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::IsBloom() {
	try {
		return elfIsBloom();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::IsSsao() {
	try {
		return elfIsSsao();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::IsDof() {
	try {
		return elfIsDof();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::IsLightShafts() {
	try {
		return elfIsLightShafts();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetOcclusionCulling(bool cull) {
	try {
		elfSetOcclusionCulling(cull);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::IsOcclusionCulling() {
	try {
		return elfIsOcclusionCulling();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetDebugDraw(bool debug_draw) {
	try {
		elfSetDebugDraw(debug_draw);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::IsDebugDraw() {
	try {
		return elfIsDebugDraw();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetActor() {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetActor();
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::CreateVec3f() {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfCreateVec3f();
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::CreateVec3fFromValues(float x, float y, float z) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfCreateVec3fFromValues(x, y, z);
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector4f^ BlendELF::CreateQua() {
	try {
		elf_vec4f* result = new elf_vec4f();
		*result = elfCreateQua();
		return gcnew Vector4f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector4f^ BlendELF::CreateQuaFromEuler(float x, float y, float z) {
	try {
		elf_vec4f* result = new elf_vec4f();
		*result = elfCreateQuaFromEuler(x, y, z);
		return gcnew Vector4f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::MulQuaVec3f(Vector4f^ qua, Vector3f^ vec) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfMulQuaVec3f(*qua->GetVector(), *vec->GetVector());
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector4f^ BlendELF::MulQuaQua(Vector4f^ qua1, Vector4f^ qua2) {
	try {
		elf_vec4f* result = new elf_vec4f();
		*result = elfMulQuaQua(*qua1->GetVector(), *qua2->GetVector());
		return gcnew Vector4f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector4f^ BlendELF::GetQuaInverted(Vector4f^ qua) {
	try {
		elf_vec4f* result = new elf_vec4f();
		*result = elfGetQuaInverted(*qua->GetVector());
		return gcnew Vector4f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::SubVec3fVec3f(Vector3f^ vec1, Vector3f^ vec2) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfSubVec3fVec3f(*vec1->GetVector(), *vec2->GetVector());
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::AddVec3fVec3f(Vector3f^ vec1, Vector3f^ vec2) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfAddVec3fVec3f(*vec1->GetVector(), *vec2->GetVector());
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetVec3fLength(Vector3f^ vec) {
	try {
		return elfGetVec3fLength(*vec->GetVector());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::AboutZero(float val) {
	try {
		return elfAboutZero(val);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::FloatAbs(float val) {
	try {
		return elfFloatAbs(val);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::FloatMax(float a, float b) {
	try {
		return elfFloatMax(a, b);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::RandomFloat() {
	try {
		return elfRandomFloat();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::RandomFloatRange(float min, float max) {
	try {
		return elfRandomFloatRange(min, max);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::RandomInt() {
	try {
		return elfRandomInt();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::RandomIntRange(int min, int max) {
	try {
		return elfRandomIntRange(min, max);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::CreateFramePlayer() {
	try {
		elf_handle* result = new elf_handle();
		*result = elfCreateFramePlayer();
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::UpdateFramePlayer(EngineHandle^ player) {
	try {
		elfUpdateFramePlayer(*player->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetFramePlayerFrame(EngineHandle^ player, float frame) {
	try {
		elfSetFramePlayerFrame(*player->GetHandle(), frame);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::PlayFramePlayer(EngineHandle^ player, float start, float end, float speed) {
	try {
		elfPlayFramePlayer(*player->GetHandle(), start, end, speed);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::LoopFramePlayer(EngineHandle^ player, float start, float end, float speed) {
	try {
		elfLoopFramePlayer(*player->GetHandle(), start, end, speed);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::StopFramePlayer(EngineHandle^ player) {
	try {
		elfStopFramePlayer(*player->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::PauseFramePlayer(EngineHandle^ player) {
	try {
		elfPauseFramePlayer(*player->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::ResumeFramePlayer(EngineHandle^ player) {
	try {
		elfResumeFramePlayer(*player->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetFramePlayerStart(EngineHandle^ player) {
	try {
		return elfGetFramePlayerStart(*player->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetFramePlayerEnd(EngineHandle^ player) {
	try {
		return elfGetFramePlayerEnd(*player->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetFramePlayerSpeed(EngineHandle^ player) {
	try {
		return elfGetFramePlayerSpeed(*player->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetFramePlayerFrame(EngineHandle^ player) {
	try {
		return elfGetFramePlayerFrame(*player->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::IsFramePlayerPlaying(EngineHandle^ player) {
	try {
		return elfIsFramePlayerPlaying(*player->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::IsFramePlayerPaused(EngineHandle^ player) {
	try {
		return elfIsFramePlayerPaused(*player->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::CreateTimer() {
	try {
		elf_handle* result = new elf_handle();
		*result = elfCreateTimer();
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::StartTimer(EngineHandle^ timer) {
	try {
		elfStartTimer(*timer->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

double BlendELF::GetElapsedTime(EngineHandle^ timer) {
	try {
		return elfGetElapsedTime(*timer->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::CreateTextureFromFile(String^ file_path) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfCreateTextureFromFile(toUnmanagedString(file_path));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

String^ BlendELF::GetTextureName(EngineHandle^ texture) {
	try {
		return gcnew String(elfGetTextureName(*texture->GetHandle()));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

String^ BlendELF::GetTextureFilePath(EngineHandle^ texture) {
	try {
		return gcnew String(elfGetTextureFilePath(*texture->GetHandle()));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetTextureWidth(EngineHandle^ texture) {
	try {
		return elfGetTextureWidth(*texture->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetTextureHeight(EngineHandle^ texture) {
	try {
		return elfGetTextureHeight(*texture->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

TextureFormat BlendELF::GetTextureFormat(EngineHandle^ texture) {
	try {
		return (TextureFormat)elfGetTextureFormat(*texture->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

TextureDataFormat BlendELF::GetTextureDataFormat(EngineHandle^ texture) {
	try {
		return (TextureDataFormat)elfGetTextureDataFormat(*texture->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::CreateMaterial(String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfCreateMaterial(toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetMaterialTexture(EngineHandle^ material, int slot, EngineHandle^ texture) {
	try {
		elfSetMaterialTexture(*material->GetHandle(), slot, *texture->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetMaterialTextureType(EngineHandle^ material, int slot, TextureType type) {
	try {
		elfSetMaterialTextureType(*material->GetHandle(), slot, (int)type);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetMaterialTextureParallaxScale(EngineHandle^ material, int slot, float scale) {
	try {
		elfSetMaterialTextureParallaxScale(*material->GetHandle(), slot, scale);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetMaterialColor(EngineHandle^ material, float r, float g, float b, float a) {
	try {
		elfSetMaterialColor(*material->GetHandle(), r, g, b, a);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetMaterialSpecularColor(EngineHandle^ material, float r, float g, float b, float a) {
	try {
		elfSetMaterialSpecularColor(*material->GetHandle(), r, g, b, a);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetMaterialAmbientColor(EngineHandle^ material, float r, float g, float b, float a) {
	try {
		elfSetMaterialAmbientColor(*material->GetHandle(), r, g, b, a);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetMaterialSpecularPower(EngineHandle^ material, float power) {
	try {
		elfSetMaterialSpecularPower(*material->GetHandle(), power);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetMaterialLighting(EngineHandle^ material, bool lighting) {
	try {
		elfSetMaterialLighting(*material->GetHandle(), lighting);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

String^ BlendELF::GetMaterialName(EngineHandle^ material) {
	try {
		return gcnew String(elfGetMaterialName(*material->GetHandle()));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

String^ BlendELF::GetMaterialFilePath(EngineHandle^ material) {
	try {
		return gcnew String(elfGetMaterialFilePath(*material->GetHandle()));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetMaterialTexture(EngineHandle^ material, int slot) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetMaterialTexture(*material->GetHandle(), slot);
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

TextureType BlendELF::GetMaterialTextureType(EngineHandle^ material, int slot) {
	try {
		return (TextureType)elfGetMaterialTextureType(*material->GetHandle(), slot);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetMaterialTextureParallaxScale(EngineHandle^ material, int slot) {
	try {
		return elfGetMaterialTextureParallaxScale(*material->GetHandle(), slot);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineColour^ BlendELF::GetMaterialColor(EngineHandle^ material) {
	try {
		elf_color* result = new elf_color();
		*result = elfGetMaterialColor(*material->GetHandle());
		return gcnew EngineColour(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineColour^ BlendELF::GetMaterialSpecularColor(EngineHandle^ material) {
	try {
		elf_color* result = new elf_color();
		*result = elfGetMaterialSpecularColor(*material->GetHandle());
		return gcnew EngineColour(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineColour^ BlendELF::GetMaterialAmbientColor(EngineHandle^ material) {
	try {
		elf_color* result = new elf_color();
		*result = elfGetMaterialAmbientColor(*material->GetHandle());
		return gcnew EngineColour(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetMaterialSpecularPower(EngineHandle^ material) {
	try {
		return elfGetMaterialSpecularPower(*material->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::GetMaterialLighting(EngineHandle^ material) {
	try {
		return elfGetMaterialLighting(*material->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::AddPointToBezierCurve(EngineHandle^ curve, EngineHandle^ point) {
	try {
		elfAddPointToBezierCurve(*curve->GetHandle(), *point->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::AddCurveToIpo(EngineHandle^ ipo, EngineHandle^ curve) {
	try {
		return elfAddCurveToIpo(*ipo->GetHandle(), *curve->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::GetIpoLoc(EngineHandle^ ipo, float x) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfGetIpoLoc(*ipo->GetHandle(), x);
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::GetIpoRot(EngineHandle^ ipo, float x) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfGetIpoRot(*ipo->GetHandle(), x);
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::GetIpoScale(EngineHandle^ ipo, float x) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfGetIpoScale(*ipo->GetHandle(), x);
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector4f^ BlendELF::GetIpoQua(EngineHandle^ ipo, float x) {
	try {
		elf_vec4f* result = new elf_vec4f();
		*result = elfGetIpoQua(*ipo->GetHandle(), x);
		return gcnew Vector4f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

String^ BlendELF::GetActorName(EngineHandle^ actor) {
	try {
		return gcnew String(elfGetActorName(*actor->GetHandle()));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

String^ BlendELF::GetActorFilePath(EngineHandle^ actor) {
	try {
		return gcnew String(elfGetActorFilePath(*actor->GetHandle()));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetActorParent(EngineHandle^ actor) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetActorParent(*actor->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetActorParent(EngineHandle^ actor, EngineHandle^ parent) {
	try {
		elfSetActorParent(*actor->GetHandle(), *parent->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetActorChildCount(EngineHandle^ actor) {
	try {
		return elfGetActorChildCount(*actor->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetActorChildByName(EngineHandle^ actor, String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetActorChildByName(*actor->GetHandle(), toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetActorChildByIndex(EngineHandle^ actor, int idx) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetActorChildByIndex(*actor->GetHandle(), idx);
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::RemoveActorChildren(EngineHandle^ actor) {
	try {
		elfRemoveActorChildren(*actor->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetActorScript(EngineHandle^ actor) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetActorScript(*actor->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetActorScript(EngineHandle^ actor, EngineHandle^ script) {
	try {
		elfSetActorScript(*actor->GetHandle(), *script->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetActorPosition(EngineHandle^ actor, float x, float y, float z) {
	try {
		elfSetActorPosition(*actor->GetHandle(), x, y, z);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetActorRotation(EngineHandle^ actor, float x, float y, float z) {
	try {
		elfSetActorRotation(*actor->GetHandle(), x, y, z);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetActorOrientation(EngineHandle^ actor, float x, float y, float z, float w) {
	try {
		elfSetActorOrientation(*actor->GetHandle(), x, y, z, w);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::RotateActor(EngineHandle^ actor, float x, float y, float z) {
	try {
		elfRotateActor(*actor->GetHandle(), x, y, z);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::RotateActorLocal(EngineHandle^ actor, float x, float y, float z) {
	try {
		elfRotateActorLocal(*actor->GetHandle(), x, y, z);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::MoveActor(EngineHandle^ actor, float x, float y, float z) {
	try {
		elfMoveActor(*actor->GetHandle(), x, y, z);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::MoveActorLocal(EngineHandle^ actor, float x, float y, float z) {
	try {
		elfMoveActorLocal(*actor->GetHandle(), x, y, z);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::GetActorPosition(EngineHandle^ actor) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfGetActorPosition(*actor->GetHandle());
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::GetActorRotation(EngineHandle^ actor) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfGetActorRotation(*actor->GetHandle());
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector4f^ BlendELF::GetActorOrientation(EngineHandle^ actor) {
	try {
		elf_vec4f* result = new elf_vec4f();
		*result = elfGetActorOrientation(*actor->GetHandle());
		return gcnew Vector4f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetActorDamping(EngineHandle^ actor, float lin_damp, float ang_damp) {
	try {
		elfSetActorDamping(*actor->GetHandle(), lin_damp, ang_damp);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetActorSleepThresholds(EngineHandle^ actor, float lin_thrs, float ang_thrs) {
	try {
		elfSetActorSleepThresholds(*actor->GetHandle(), lin_thrs, ang_thrs);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetActorRestitution(EngineHandle^ actor, float restitution) {
	try {
		elfSetActorRestitution(*actor->GetHandle(), restitution);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::AddForceToActor(EngineHandle^ actor, float x, float y, float z) {
	try {
		elfAddForceToActor(*actor->GetHandle(), x, y, z);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::AddTorqueToActor(EngineHandle^ actor, float x, float y, float z) {
	try {
		elfAddTorqueToActor(*actor->GetHandle(), x, y, z);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetActorLinearVelocity(EngineHandle^ actor, float x, float y, float z) {
	try {
		elfSetActorLinearVelocity(*actor->GetHandle(), x, y, z);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetActorAngularVelocity(EngineHandle^ actor, float x, float y, float z) {
	try {
		elfSetActorAngularVelocity(*actor->GetHandle(), x, y, z);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetActorLinearFactor(EngineHandle^ actor, float x, float y, float z) {
	try {
		elfSetActorLinearFactor(*actor->GetHandle(), x, y, z);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetActorAngularFactor(EngineHandle^ actor, float x, float y, float z) {
	try {
		elfSetActorAngularFactor(*actor->GetHandle(), x, y, z);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::GetActorLinearVelocity(EngineHandle^ actor) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfGetActorLinearVelocity(*actor->GetHandle());
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::GetActorAngularVelocity(EngineHandle^ actor) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfGetActorAngularVelocity(*actor->GetHandle());
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::GetActorLinearFactor(EngineHandle^ actor) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfGetActorLinearFactor(*actor->GetHandle());
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::GetActorAngularFactor(EngineHandle^ actor) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfGetActorAngularFactor(*actor->GetHandle());
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetActorLinearDamping(EngineHandle^ actor) {
	try {
		return elfGetActorLinearDamping(*actor->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetActorAngularDamping(EngineHandle^ actor) {
	try {
		return elfGetActorAngularDamping(*actor->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetActorLinearSleepThreshold(EngineHandle^ actor) {
	try {
		return elfGetActorLinearSleepThreshold(*actor->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetActorAngularSleepThreshold(EngineHandle^ actor) {
	try {
		return elfGetActorAngularSleepThreshold(*actor->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetActorRestitution(EngineHandle^ actor) {
	try {
		return elfGetActorRestitution(*actor->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::AddHingeJointToActor(EngineHandle^ actor, EngineHandle^ actor2, String^ name, float px, float py, float pz, float ax, float ay, float az) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfAddHingeJointToActor(*actor->GetHandle(), *actor2->GetHandle(), toUnmanagedString(name), px, py, pz, ax, ay, az);
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::AddBallJointToActor(EngineHandle^ actor, EngineHandle^ actor2, String^ name, float px, float py, float pz) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfAddBallJointToActor(*actor->GetHandle(), *actor2->GetHandle(), toUnmanagedString(name), px, py, pz);
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::AddConeTwistJointToActor(EngineHandle^ actor, EngineHandle^ actor2, String^ name, float px, float py, float pz, float ax, float ay, float az) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfAddConeTwistJointToActor(*actor->GetHandle(), *actor2->GetHandle(), toUnmanagedString(name), px, py, pz, ax, ay, az);
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetActorJointByName(EngineHandle^ actor, String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetActorJointByName(*actor->GetHandle(), toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetActorJointByIndex(EngineHandle^ actor, int idx) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetActorJointByIndex(*actor->GetHandle(), idx);
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::RemoveActorJointByName(EngineHandle^ actor, String^ name) {
	try {
		return elfRemoveActorJointByName(*actor->GetHandle(), toUnmanagedString(name));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::RemoveActorJointByIndex(EngineHandle^ actor, int idx) {
	try {
		return elfRemoveActorJointByIndex(*actor->GetHandle(), idx);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::RemoveActorJointByObject(EngineHandle^ actor, EngineHandle^ joint) {
	try {
		return elfRemoveActorJointByObject(*actor->GetHandle(), *joint->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetActorIpoFrame(EngineHandle^ actor, float frame) {
	try {
		elfSetActorIpoFrame(*actor->GetHandle(), frame);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetActorHierarchyIpoFrame(EngineHandle^ actor, float frame) {
	try {
		elfSetActorHierarchyIpoFrame(*actor->GetHandle(), frame);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::PlayActorIpo(EngineHandle^ actor, float start, float end, float speed) {
	try {
		elfPlayActorIpo(*actor->GetHandle(), start, end, speed);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::LoopActorIpo(EngineHandle^ actor, float start, float end, float speed) {
	try {
		elfLoopActorIpo(*actor->GetHandle(), start, end, speed);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::StopActorIpo(EngineHandle^ actor) {
	try {
		elfStopActorIpo(*actor->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::PauseActorIpo(EngineHandle^ actor) {
	try {
		elfPauseActorIpo(*actor->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::ResumeActorIpo(EngineHandle^ actor) {
	try {
		elfResumeActorIpo(*actor->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetActorIpoStart(EngineHandle^ actor) {
	try {
		return elfGetActorIpoStart(*actor->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetActorIpoEnd(EngineHandle^ actor) {
	try {
		return elfGetActorIpoEnd(*actor->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetActorIpoSpeed(EngineHandle^ actor) {
	try {
		return elfGetActorIpoSpeed(*actor->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetActorIpoFrame(EngineHandle^ actor) {
	try {
		return elfGetActorIpoFrame(*actor->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::IsActorIpoPlaying(EngineHandle^ actor) {
	try {
		return elfIsActorIpoPlaying(*actor->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::IsActorIpoPaused(EngineHandle^ actor) {
	try {
		return elfIsActorIpoPaused(*actor->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetActorCollisionCount(EngineHandle^ actor) {
	try {
		return elfGetActorCollisionCount(*actor->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetActorCollision(EngineHandle^ actor, int idx) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetActorCollision(*actor->GetHandle(), idx);
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetActorSelected(EngineHandle^ actor, bool selected) {
	try {
		elfSetActorSelected(*actor->GetHandle(), selected);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::GetActorSelected(EngineHandle^ actor) {
	try {
		return elfGetActorSelected(*actor->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::CreateCamera(String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfCreateCamera(toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetCameraViewport(EngineHandle^ camera, int x, int y, int width, int height) {
	try {
		elfSetCameraViewport(*camera->GetHandle(), x, y, width, height);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetCameraPerspective(EngineHandle^ camera, float fov, float aspect, float clip_near, float clip_far) {
	try {
		elfSetCameraPerspective(*camera->GetHandle(), fov, aspect, clip_near, clip_far);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetCameraOrthographic(EngineHandle^ camera, int x, int y, int width, int height, float clip_near, float clip_far) {
	try {
		elfSetCameraOrthographic(*camera->GetHandle(), x, y, width, height, clip_near, clip_far);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetCameraFov(EngineHandle^ camera) {
	try {
		return elfGetCameraFov(*camera->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetCameraAspect(EngineHandle^ camera) {
	try {
		return elfGetCameraAspect(*camera->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector2f^ BlendELF::GetCameraClip(EngineHandle^ camera) {
	try {
		elf_vec2f* result = new elf_vec2f();
		*result = elfGetCameraClip(*camera->GetHandle());
		return gcnew Vector2f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector2f^ BlendELF::GetCameraFarPlaneSize(EngineHandle^ camera) {
	try {
		elf_vec2f* result = new elf_vec2f();
		*result = elfGetCameraFarPlaneSize(*camera->GetHandle());
		return gcnew Vector2f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::UnProjectCameraPoint(EngineHandle^ camera, float x, float y, float z) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfUnProjectCameraPoint(*camera->GetHandle(), x, y, z);
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

String^ BlendELF::GetModelName(EngineHandle^ model) {
	try {
		return gcnew String(elfGetModelName(*model->GetHandle()));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

String^ BlendELF::GetModelFilePath(EngineHandle^ model) {
	try {
		return gcnew String(elfGetModelFilePath(*model->GetHandle()));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetModelVerticeCount(EngineHandle^ model) {
	try {
		return elfGetModelVerticeCount(*model->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetModelIndiceCount(EngineHandle^ model) {
	try {
		return elfGetModelIndiceCount(*model->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::GetModelAabbMin(EngineHandle^ model) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfGetModelAabbMin(*model->GetHandle());
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::GetModelAabbMax(EngineHandle^ model) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfGetModelAabbMax(*model->GetHandle());
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::CreateEntity(String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfCreateEntity(toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetEntityScale(EngineHandle^ entity, float x, float y, float z) {
	try {
		elfSetEntityScale(*entity->GetHandle(), x, y, z);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::GetEntityScale(EngineHandle^ entity) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfGetEntityScale(*entity->GetHandle());
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetEntityModel(EngineHandle^ entity, EngineHandle^ model) {
	try {
		elfSetEntityModel(*entity->GetHandle(), *model->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetEntityModel(EngineHandle^ entity) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetEntityModel(*entity->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetEntityMaterialCount(EngineHandle^ entity) {
	try {
		return elfGetEntityMaterialCount(*entity->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::AddEntityMaterial(EngineHandle^ entity, EngineHandle^ material) {
	try {
		elfAddEntityMaterial(*entity->GetHandle(), *material->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetEntityMaterial(EngineHandle^ entity, int idx, EngineHandle^ material) {
	try {
		elfSetEntityMaterial(*entity->GetHandle(), idx, *material->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetEntityMaterial(EngineHandle^ entity, int idx) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetEntityMaterial(*entity->GetHandle(), idx);
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetEntityVisible(EngineHandle^ entity, bool visible) {
	try {
		elfSetEntityVisible(*entity->GetHandle(), visible);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::GetEntityVisible(EngineHandle^ entity) {
	try {
		return elfGetEntityVisible(*entity->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetEntityPhysics(EngineHandle^ entity, CollisionShape type, float mass) {
	try {
		elfSetEntityPhysics(*entity->GetHandle(), (int)type, mass);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::DisableEntityPhysics(EngineHandle^ entity) {
	try {
		elfDisableEntityPhysics(*entity->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetEntityArmature(EngineHandle^ entity, EngineHandle^ armature) {
	try {
		elfSetEntityArmature(*entity->GetHandle(), *armature->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetEntityArmatureFrame(EngineHandle^ entity, float frame) {
	try {
		elfSetEntityArmatureFrame(*entity->GetHandle(), frame);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::PlayEntityArmature(EngineHandle^ entity, float start, float end, float speed) {
	try {
		elfPlayEntityArmature(*entity->GetHandle(), start, end, speed);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::LoopEntityArmature(EngineHandle^ entity, float start, float end, float speed) {
	try {
		elfLoopEntityArmature(*entity->GetHandle(), start, end, speed);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::StopEntityArmature(EngineHandle^ entity) {
	try {
		elfStopEntityArmature(*entity->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::PauseEntityArmature(EngineHandle^ entity) {
	try {
		elfPauseEntityArmature(*entity->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::ResumeEntityArmature(EngineHandle^ entity) {
	try {
		elfResumeEntityArmature(*entity->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetEntityArmatureStart(EngineHandle^ entity) {
	try {
		return elfGetEntityArmatureStart(*entity->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetEntityArmatureEnd(EngineHandle^ entity) {
	try {
		return elfGetEntityArmatureEnd(*entity->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetEntityArmatureSpeed(EngineHandle^ entity) {
	try {
		return elfGetEntityArmatureSpeed(*entity->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetEntityArmatureFrame(EngineHandle^ entity) {
	try {
		return elfGetEntityArmatureFrame(*entity->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::IsEntityArmaturePlaying(EngineHandle^ entity) {
	try {
		return elfIsEntityArmaturePlaying(*entity->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::IsEntityArmaturePaused(EngineHandle^ entity) {
	try {
		return elfIsEntityArmaturePaused(*entity->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetEntityArmature(EngineHandle^ entity) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetEntityArmature(*entity->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::GetEntityChanged(EngineHandle^ entity) {
	try {
		return elfGetEntityChanged(*entity->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::CreateLight(String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfCreateLight(toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

LightType BlendELF::GetLightType(EngineHandle^ light) {
	try {
		return (LightType)elfGetLightType(*light->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineColour^ BlendELF::GetLightColor(EngineHandle^ light) {
	try {
		elf_color* result = new elf_color();
		*result = elfGetLightColor(*light->GetHandle());
		return gcnew EngineColour(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetLightDistance(EngineHandle^ light) {
	try {
		return elfGetLightDistance(*light->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetLightFadeSpeed(EngineHandle^ light) {
	try {
		return elfGetLightFadeSpeed(*light->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::GetLightShadowCaster(EngineHandle^ light) {
	try {
		return elfGetLightShadowCaster(*light->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::GetLightVisible(EngineHandle^ light) {
	try {
		return elfGetLightVisible(*light->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector2f^ BlendELF::GetLightCone(EngineHandle^ light) {
	try {
		elf_vec2f* result = new elf_vec2f();
		*result = elfGetLightCone(*light->GetHandle());
		return gcnew Vector2f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::IsLightShaft(EngineHandle^ light) {
	try {
		return elfIsLightShaft(*light->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetLightShaftSize(EngineHandle^ light) {
	try {
		return elfGetLightShaftSize(*light->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetLightShaftIntensity(EngineHandle^ light) {
	try {
		return elfGetLightShaftIntensity(*light->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetLightShaftFadeOff(EngineHandle^ light) {
	try {
		return elfGetLightShaftFadeOff(*light->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetLightType(EngineHandle^ light, LightType type) {
	try {
		elfSetLightType(*light->GetHandle(), (int)type);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetLightColor(EngineHandle^ light, float r, float g, float b, float a) {
	try {
		elfSetLightColor(*light->GetHandle(), r, g, b, a);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetLightDistance(EngineHandle^ light, float distance) {
	try {
		elfSetLightDistance(*light->GetHandle(), distance);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetLightFadeSpeed(EngineHandle^ light, float fade_speed) {
	try {
		elfSetLightFadeSpeed(*light->GetHandle(), fade_speed);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetLightShadowCaster(EngineHandle^ light, bool shadow_caster) {
	try {
		elfSetLightShadowCaster(*light->GetHandle(), shadow_caster);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetLightVisible(EngineHandle^ light, bool visible) {
	try {
		elfSetLightVisible(*light->GetHandle(), visible);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetLightCone(EngineHandle^ light, float inner_cone, float outer_cone) {
	try {
		elfSetLightCone(*light->GetHandle(), inner_cone, outer_cone);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetLightShaft(EngineHandle^ light, float size, float intensity, float fade_off) {
	try {
		elfSetLightShaft(*light->GetHandle(), size, intensity, fade_off);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::DisableLightShaft(EngineHandle^ light) {
	try {
		elfDisableLightShaft(*light->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::CreateBone(String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfCreateBone(toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetBoneArmature(EngineHandle^ bone) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetBoneArmature(*bone->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::CreateArmature(String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfCreateArmature(toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetBoneFromArmatureByName(String^ name, EngineHandle^ armature) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetBoneFromArmatureByName(toUnmanagedString(name), *armature->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetBoneFromArmatureById(int id, EngineHandle^ armature) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetBoneFromArmatureById(id, *armature->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::AddRootBoneToArmature(EngineHandle^ armature, EngineHandle^ bone) {
	try {
		elfAddRootBoneToArmature(*armature->GetHandle(), *bone->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::CreateParticles(String^ name, int max_count) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfCreateParticles(toUnmanagedString(name), max_count);
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

String^ BlendELF::GetParticlesName(EngineHandle^ particles) {
	try {
		return gcnew String(elfGetParticlesName(*particles->GetHandle()));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

String^ BlendELF::GetParticlesFilePath(EngineHandle^ particles) {
	try {
		return gcnew String(elfGetParticlesFilePath(*particles->GetHandle()));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetParticlesMaxCount(EngineHandle^ particles, int max_count) {
	try {
		elfSetParticlesMaxCount(*particles->GetHandle(), max_count);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetParticlesDrawMode(EngineHandle^ particles, ParticleDrawMode mode) {
	try {
		elfSetParticlesDrawMode(*particles->GetHandle(), (int)mode);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetParticlesTexture(EngineHandle^ particles, EngineHandle^ texture) {
	try {
		elfSetParticlesTexture(*particles->GetHandle(), *texture->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetParticlesModel(EngineHandle^ particles, EngineHandle^ model) {
	try {
		elfSetParticlesModel(*particles->GetHandle(), *model->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetParticlesGravity(EngineHandle^ particles, float x, float y, float z) {
	try {
		elfSetParticlesGravity(*particles->GetHandle(), x, y, z);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetParticlesSpawnDelay(EngineHandle^ particles, float delay) {
	try {
		elfSetParticlesSpawnDelay(*particles->GetHandle(), delay);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetParticlesSize(EngineHandle^ particles, float min, float max) {
	try {
		elfSetParticlesSize(*particles->GetHandle(), min, max);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetParticlesSizeGrowth(EngineHandle^ particles, float min, float max) {
	try {
		elfSetParticlesSizeGrowth(*particles->GetHandle(), min, max);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetParticlesRotation(EngineHandle^ particles, float min, float max) {
	try {
		elfSetParticlesRotation(*particles->GetHandle(), min, max);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetParticlesRotationGrowth(EngineHandle^ particles, float min, float max) {
	try {
		elfSetParticlesRotationGrowth(*particles->GetHandle(), min, max);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetParticlesLifeSpan(EngineHandle^ particles, float min, float max) {
	try {
		elfSetParticlesLifeSpan(*particles->GetHandle(), min, max);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetParticlesFadeSpeed(EngineHandle^ particles, float min, float max) {
	try {
		elfSetParticlesFadeSpeed(*particles->GetHandle(), min, max);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetParticlesPositionMin(EngineHandle^ particles, float x, float y, float z) {
	try {
		elfSetParticlesPositionMin(*particles->GetHandle(), x, y, z);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetParticlesPositionMax(EngineHandle^ particles, float x, float y, float z) {
	try {
		elfSetParticlesPositionMax(*particles->GetHandle(), x, y, z);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetParticlesVelocityMin(EngineHandle^ particles, float x, float y, float z) {
	try {
		elfSetParticlesVelocityMin(*particles->GetHandle(), x, y, z);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetParticlesVelocityMax(EngineHandle^ particles, float x, float y, float z) {
	try {
		elfSetParticlesVelocityMax(*particles->GetHandle(), x, y, z);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetParticlesColorMin(EngineHandle^ particles, float r, float g, float b, float a) {
	try {
		elfSetParticlesColorMin(*particles->GetHandle(), r, g, b, a);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetParticlesColorMax(EngineHandle^ particles, float r, float g, float b, float a) {
	try {
		elfSetParticlesColorMax(*particles->GetHandle(), r, g, b, a);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetParticlesMaxCount(EngineHandle^ particles) {
	try {
		return elfGetParticlesMaxCount(*particles->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetParticlesCount(EngineHandle^ particles) {
	try {
		return elfGetParticlesCount(*particles->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

ParticleDrawMode BlendELF::GetParticlesDrawMode(EngineHandle^ particles) {
	try {
		return (ParticleDrawMode)elfGetParticlesDrawMode(*particles->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetParticlesTexture(EngineHandle^ particles) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetParticlesTexture(*particles->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetParticlesModel(EngineHandle^ particles) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetParticlesModel(*particles->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::GetParticlesGravity(EngineHandle^ particles) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfGetParticlesGravity(*particles->GetHandle());
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetParticlesSpawnDelay(EngineHandle^ particles) {
	try {
		return elfGetParticlesSpawnDelay(*particles->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetParticlesSizeMin(EngineHandle^ particles) {
	try {
		return elfGetParticlesSizeMin(*particles->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetParticlesSizeMax(EngineHandle^ particles) {
	try {
		return elfGetParticlesSizeMax(*particles->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetParticlesSizeGrowthMin(EngineHandle^ particles) {
	try {
		return elfGetParticlesSizeGrowthMin(*particles->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetParticlesSizeGrowthMax(EngineHandle^ particles) {
	try {
		return elfGetParticlesSizeGrowthMax(*particles->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetParticlesRotationMin(EngineHandle^ particles) {
	try {
		return elfGetParticlesRotationMin(*particles->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetParticlesRotationMax(EngineHandle^ particles) {
	try {
		return elfGetParticlesRotationMax(*particles->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetParticlesRotationGrowthMin(EngineHandle^ particles) {
	try {
		return elfGetParticlesRotationGrowthMin(*particles->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetParticlesRotationGrowthMax(EngineHandle^ particles) {
	try {
		return elfGetParticlesRotationGrowthMax(*particles->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetParticlesLifeSpanMin(EngineHandle^ particles) {
	try {
		return elfGetParticlesLifeSpanMin(*particles->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetParticlesLifeSpanMax(EngineHandle^ particles) {
	try {
		return elfGetParticlesLifeSpanMax(*particles->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetParticlesFadeSpeedMin(EngineHandle^ particles) {
	try {
		return elfGetParticlesFadeSpeedMin(*particles->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetParticlesFadeSpeedMax(EngineHandle^ particles) {
	try {
		return elfGetParticlesFadeSpeedMax(*particles->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::GetParticlesPositionMin(EngineHandle^ particles) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfGetParticlesPositionMin(*particles->GetHandle());
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::GetParticlesPositionMax(EngineHandle^ particles) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfGetParticlesPositionMax(*particles->GetHandle());
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::GetParticlesVelocityMin(EngineHandle^ particles) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfGetParticlesVelocityMin(*particles->GetHandle());
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::GetParticlesVelocityMax(EngineHandle^ particles) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfGetParticlesVelocityMax(*particles->GetHandle());
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineColour^ BlendELF::GetParticlesColorMin(EngineHandle^ particles) {
	try {
		elf_color* result = new elf_color();
		*result = elfGetParticlesColorMin(*particles->GetHandle());
		return gcnew EngineColour(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineColour^ BlendELF::GetParticlesColorMax(EngineHandle^ particles) {
	try {
		elf_color* result = new elf_color();
		*result = elfGetParticlesColorMax(*particles->GetHandle());
		return gcnew EngineColour(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::CreateSceneFromFile(String^ file_path) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfCreateSceneFromFile(toUnmanagedString(file_path));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetSceneAmbientColor(EngineHandle^ scene, float r, float g, float b, float a) {
	try {
		elfSetSceneAmbientColor(*scene->GetHandle(), r, g, b, a);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineColour^ BlendELF::GetSceneAmbientColor(EngineHandle^ scene) {
	try {
		elf_color* result = new elf_color();
		*result = elfGetSceneAmbientColor(*scene->GetHandle());
		return gcnew EngineColour(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetSceneGravity(EngineHandle^ scene, float x, float y, float z) {
	try {
		elfSetSceneGravity(*scene->GetHandle(), x, y, z);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::GetSceneGravity(EngineHandle^ scene) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfGetSceneGravity(*scene->GetHandle());
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

String^ BlendELF::GetSceneName(EngineHandle^ scene) {
	try {
		return gcnew String(elfGetSceneName(*scene->GetHandle()));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

String^ BlendELF::GetSceneFilePath(EngineHandle^ scene) {
	try {
		return gcnew String(elfGetSceneFilePath(*scene->GetHandle()));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetSceneCameraCount(EngineHandle^ scene) {
	try {
		return elfGetSceneCameraCount(*scene->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetSceneEntityCount(EngineHandle^ scene) {
	try {
		return elfGetSceneEntityCount(*scene->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetSceneLightCount(EngineHandle^ scene) {
	try {
		return elfGetSceneLightCount(*scene->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetSceneArmatureCount(EngineHandle^ scene) {
	try {
		return elfGetSceneArmatureCount(*scene->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetSceneParticlesCount(EngineHandle^ scene) {
	try {
		return elfGetSceneParticlesCount(*scene->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::AddCameraToScene(EngineHandle^ scene, EngineHandle^ camera) {
	try {
		elfAddCameraToScene(*scene->GetHandle(), *camera->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::AddEntityToScene(EngineHandle^ scene, EngineHandle^ entity) {
	try {
		elfAddEntityToScene(*scene->GetHandle(), *entity->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::AddLightToScene(EngineHandle^ scene, EngineHandle^ light) {
	try {
		elfAddLightToScene(*scene->GetHandle(), *light->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::AddParticlesToScene(EngineHandle^ scene, EngineHandle^ particles) {
	try {
		elfAddParticlesToScene(*scene->GetHandle(), *particles->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetSceneActiveCamera(EngineHandle^ scene, EngineHandle^ camera) {
	try {
		elfSetSceneActiveCamera(*scene->GetHandle(), *camera->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetSceneActiveCamera(EngineHandle^ scene) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetSceneActiveCamera(*scene->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetSceneRayCastResult(EngineHandle^ scene, float x, float y, float z, float dx, float dy, float dz) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetSceneRayCastResult(*scene->GetHandle(), x, y, z, dx, dy, dz);
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetSceneRayCastResults(EngineHandle^ scene, float x, float y, float z, float dx, float dy, float dz) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetSceneRayCastResults(*scene->GetHandle(), x, y, z, dx, dy, dz);
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetDebugSceneRayCastResult(EngineHandle^ scene, float x, float y, float z, float dx, float dy, float dz) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetDebugSceneRayCastResult(*scene->GetHandle(), x, y, z, dx, dy, dz);
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetDebugSceneRayCastResults(EngineHandle^ scene, float x, float y, float z, float dx, float dy, float dz) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetDebugSceneRayCastResults(*scene->GetHandle(), x, y, z, dx, dy, dz);
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetCameraByIndex(EngineHandle^ scene, int idx) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetCameraByIndex(*scene->GetHandle(), idx);
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetEntityByIndex(EngineHandle^ scene, int idx) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetEntityByIndex(*scene->GetHandle(), idx);
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetLightByIndex(EngineHandle^ scene, int idx) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetLightByIndex(*scene->GetHandle(), idx);
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetArmatureByIndex(EngineHandle^ scene, int idx) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetArmatureByIndex(*scene->GetHandle(), idx);
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetParticlesByIndex(EngineHandle^ scene, int idx) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetParticlesByIndex(*scene->GetHandle(), idx);
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetTextureByName(EngineHandle^ scene, String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetTextureByName(*scene->GetHandle(), toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetMaterialByName(EngineHandle^ scene, String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetMaterialByName(*scene->GetHandle(), toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetModelByName(EngineHandle^ scene, String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetModelByName(*scene->GetHandle(), toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetScriptByName(EngineHandle^ scene, String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetScriptByName(*scene->GetHandle(), toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetCameraByName(EngineHandle^ scene, String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetCameraByName(*scene->GetHandle(), toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetEntityByName(EngineHandle^ scene, String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetEntityByName(*scene->GetHandle(), toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetLightByName(EngineHandle^ scene, String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetLightByName(*scene->GetHandle(), toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetArmatureByName(EngineHandle^ scene, String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetArmatureByName(*scene->GetHandle(), toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetParticlesByName(EngineHandle^ scene, String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetParticlesByName(*scene->GetHandle(), toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetActorByName(EngineHandle^ scene, String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetActorByName(*scene->GetHandle(), toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::RemoveCameraByName(EngineHandle^ scene, String^ name) {
	try {
		return elfRemoveCameraByName(*scene->GetHandle(), toUnmanagedString(name));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::RemoveEntityByName(EngineHandle^ scene, String^ name) {
	try {
		return elfRemoveEntityByName(*scene->GetHandle(), toUnmanagedString(name));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::RemoveLightByName(EngineHandle^ scene, String^ name) {
	try {
		return elfRemoveLightByName(*scene->GetHandle(), toUnmanagedString(name));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::RemoveParticlesByName(EngineHandle^ scene, String^ name) {
	try {
		return elfRemoveParticlesByName(*scene->GetHandle(), toUnmanagedString(name));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::RemoveCameraByIndex(EngineHandle^ scene, int idx) {
	try {
		return elfRemoveCameraByIndex(*scene->GetHandle(), idx);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::RemoveEntityByIndex(EngineHandle^ scene, int idx) {
	try {
		return elfRemoveEntityByIndex(*scene->GetHandle(), idx);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::RemoveLightByIndex(EngineHandle^ scene, int idx) {
	try {
		return elfRemoveLightByIndex(*scene->GetHandle(), idx);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::RemoveParticlesByIndex(EngineHandle^ scene, int idx) {
	try {
		return elfRemoveParticlesByIndex(*scene->GetHandle(), idx);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::RemoveCameraByObject(EngineHandle^ scene, EngineHandle^ camera) {
	try {
		return elfRemoveCameraByObject(*scene->GetHandle(), *camera->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::RemoveEntityByObject(EngineHandle^ scene, EngineHandle^ entity) {
	try {
		return elfRemoveEntityByObject(*scene->GetHandle(), *entity->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::RemoveLightByObject(EngineHandle^ scene, EngineHandle^ light) {
	try {
		return elfRemoveLightByObject(*scene->GetHandle(), *light->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::RemoveParticlesByObject(EngineHandle^ scene, EngineHandle^ particles) {
	try {
		return elfRemoveParticlesByObject(*scene->GetHandle(), *particles->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::RemoveActorByObject(EngineHandle^ scene, EngineHandle^ actor) {
	try {
		return elfRemoveActorByObject(*scene->GetHandle(), *actor->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::CreateScript() {
	try {
		elf_handle* result = new elf_handle();
		*result = elfCreateScript();
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::CreateScriptFromFile(String^ file_path) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfCreateScriptFromFile(toUnmanagedString(file_path));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

String^ BlendELF::GetScriptName(EngineHandle^ script) {
	try {
		return gcnew String(elfGetScriptName(*script->GetHandle()));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

String^ BlendELF::GetScriptFilePath(EngineHandle^ script) {
	try {
		return gcnew String(elfGetScriptFilePath(*script->GetHandle()));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetScriptText(EngineHandle^ script, String^ text) {
	try {
		elfSetScriptText(*script->GetHandle(), toUnmanagedString(text));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::RunScript(EngineHandle^ script) {
	try {
		elfRunScript(*script->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::RunString(String^ str) {
	try {
		elfRunString(toUnmanagedString(str));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::IsScriptError(EngineHandle^ script) {
	try {
		return elfIsScriptError(*script->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetAudioVolume(float volume) {
	try {
		elfSetAudioVolume(volume);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetAudioVolume() {
	try {
		return elfGetAudioVolume();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetAudioRolloff(float rolloff) {
	try {
		elfSetAudioRolloff(rolloff);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetAudioRolloff() {
	try {
		return elfGetAudioRolloff();
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::LoadSound(String^ file_path) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfLoadSound(toUnmanagedString(file_path));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::CreateSound() {
	try {
		elf_handle* result = new elf_handle();
		*result = elfCreateSound();
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::DestroySound(EngineHandle^ sound) {
	try {
		elfDestroySound(*sound->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::PlaySound(EngineHandle^ sound, float volume) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfPlaySound(*sound->GetHandle(), volume);
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::PlayEntitySound(EngineHandle^ entity, EngineHandle^ sound, float volume) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfPlayEntitySound(*entity->GetHandle(), *sound->GetHandle(), volume);
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::LoopSound(EngineHandle^ sound, float volume) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfLoopSound(*sound->GetHandle(), volume);
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::LoopEntitySound(EngineHandle^ entity, EngineHandle^ sound, float volume) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfLoopEntitySound(*entity->GetHandle(), *sound->GetHandle(), volume);
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetSoundVolume(EngineHandle^ audio_source, float volume) {
	try {
		elfSetSoundVolume(*audio_source->GetHandle(), volume);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetSoundVolume(EngineHandle^ audio_source) {
	try {
		return elfGetSoundVolume(*audio_source->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::PauseSound(EngineHandle^ audio_source) {
	try {
		elfPauseSound(*audio_source->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::ResumeSound(EngineHandle^ audio_source) {
	try {
		elfResumeSound(*audio_source->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::StopSound(EngineHandle^ audio_source) {
	try {
		elfStopSound(*audio_source->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::IsSoundPlaying(EngineHandle^ audio_source) {
	try {
		return elfIsSoundPlaying(*audio_source->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::IsSoundPaused(EngineHandle^ audio_source) {
	try {
		return elfIsSoundPaused(*audio_source->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetCollisionActor(EngineHandle^ collision) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetCollisionActor(*collision->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::GetCollisionPosition(EngineHandle^ collision) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfGetCollisionPosition(*collision->GetHandle());
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::GetCollisionNormal(EngineHandle^ collision) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfGetCollisionNormal(*collision->GetHandle());
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetCollisionDepth(EngineHandle^ collision) {
	try {
		return elfGetCollisionDepth(*collision->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

String^ BlendELF::GetJointName(EngineHandle^ joint) {
	try {
		return gcnew String(elfGetJointName(*joint->GetHandle()));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

JointType BlendELF::GetJointType(EngineHandle^ joint) {
	try {
		return (JointType)elfGetJointType(*joint->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetJointActorA(EngineHandle^ joint) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetJointActorA(*joint->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetJointActorB(EngineHandle^ joint) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetJointActorB(*joint->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::GetJointPivot(EngineHandle^ joint) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfGetJointPivot(*joint->GetHandle());
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector3f^ BlendELF::GetJointAxis(EngineHandle^ joint) {
	try {
		elf_vec3f* result = new elf_vec3f();
		*result = elfGetJointAxis(*joint->GetHandle());
		return gcnew Vector3f(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::CreateFontFromFile(String^ file_path, int size) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfCreateFontFromFile(toUnmanagedString(file_path), size);
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

String^ BlendELF::GetFontName(EngineHandle^ font) {
	try {
		return gcnew String(elfGetFontName(*font->GetHandle()));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

String^ BlendELF::GetFontFilePath(EngineHandle^ font) {
	try {
		return gcnew String(elfGetFontFilePath(*font->GetHandle()));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetFontSize(EngineHandle^ font) {
	try {
		return elfGetFontSize(*font->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetStringWidth(EngineHandle^ font, String^ str) {
	try {
		return elfGetStringWidth(*font->GetHandle(), toUnmanagedString(str));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetStringHeight(EngineHandle^ font, String^ str) {
	try {
		return elfGetStringHeight(*font->GetHandle(), toUnmanagedString(str));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

String^ BlendELF::GetGuiObjectName(EngineHandle^ object) {
	try {
		return gcnew String(elfGetGuiObjectName(*object->GetHandle()));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector2i^ BlendELF::GetGuiObjectPosition(EngineHandle^ object) {
	try {
		elf_vec2i* result = new elf_vec2i();
		*result = elfGetGuiObjectPosition(*object->GetHandle());
		return gcnew Vector2i(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector2i^ BlendELF::GetGuiObjectSize(EngineHandle^ object) {
	try {
		elf_vec2i* result = new elf_vec2i();
		*result = elfGetGuiObjectSize(*object->GetHandle());
		return gcnew Vector2i(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineColour^ BlendELF::GetGuiObjectColor(EngineHandle^ object) {
	try {
		elf_color* result = new elf_color();
		*result = elfGetGuiObjectColor(*object->GetHandle());
		return gcnew EngineColour(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::GetGuiObjectVisible(EngineHandle^ object) {
	try {
		return elfGetGuiObjectVisible(*object->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetGuiObjectScript(EngineHandle^ object) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetGuiObjectScript(*object->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetGuiObjectEvent(EngineHandle^ object) {
	try {
		return elfGetGuiObjectEvent(*object->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetGuiObjectPosition(EngineHandle^ object, float x, float y) {
	try {
		elfSetGuiObjectPosition(*object->GetHandle(), x, y);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetGuiObjectColor(EngineHandle^ object, float r, float g, float b, float a) {
	try {
		elfSetGuiObjectColor(*object->GetHandle(), r, g, b, a);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetGuiObjectVisible(EngineHandle^ object, bool visible) {
	try {
		elfSetGuiObjectVisible(*object->GetHandle(), visible);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetGuiObjectScript(EngineHandle^ object, EngineHandle^ script) {
	try {
		elfSetGuiObjectScript(*object->GetHandle(), *script->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::CreateLabel(String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfCreateLabel(toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetLabelFont(EngineHandle^ label) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetLabelFont(*label->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

String^ BlendELF::GetLabelText(EngineHandle^ label) {
	try {
		return gcnew String(elfGetLabelText(*label->GetHandle()));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetLabelFont(EngineHandle^ label, EngineHandle^ font) {
	try {
		elfSetLabelFont(*label->GetHandle(), *font->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetLabelText(EngineHandle^ label, String^ text) {
	try {
		elfSetLabelText(*label->GetHandle(), toUnmanagedString(text));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::CreateButton(String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfCreateButton(toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::GetButtonState(EngineHandle^ button) {
	try {
		return elfGetButtonState(*button->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetButtonOffTexture(EngineHandle^ button) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetButtonOffTexture(*button->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetButtonOverTexture(EngineHandle^ button) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetButtonOverTexture(*button->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetButtonOnTexture(EngineHandle^ button) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetButtonOnTexture(*button->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetButtonOffTexture(EngineHandle^ button, EngineHandle^ off) {
	try {
		elfSetButtonOffTexture(*button->GetHandle(), *off->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetButtonOverTexture(EngineHandle^ button, EngineHandle^ over) {
	try {
		elfSetButtonOverTexture(*button->GetHandle(), *over->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetButtonOnTexture(EngineHandle^ button, EngineHandle^ on) {
	try {
		elfSetButtonOnTexture(*button->GetHandle(), *on->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::CreatePicture(String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfCreatePicture(toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetPictureTexture(EngineHandle^ picture) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetPictureTexture(*picture->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetPictureTexture(EngineHandle^ picture, EngineHandle^ texture) {
	try {
		elfSetPictureTexture(*picture->GetHandle(), *texture->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::CreateTextField(String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfCreateTextField(toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetTextFieldTexture(EngineHandle^ text_field) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetTextFieldTexture(*text_field->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetTextFieldFont(EngineHandle^ text_field) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetTextFieldFont(*text_field->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineColour^ BlendELF::GetTextFieldTextColor(EngineHandle^ text_field) {
	try {
		elf_color* result = new elf_color();
		*result = elfGetTextFieldTextColor(*text_field->GetHandle());
		return gcnew EngineColour(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

Vector2i^ BlendELF::GetTextFieldOffset(EngineHandle^ text_field) {
	try {
		elf_vec2i* result = new elf_vec2i();
		*result = elfGetTextFieldOffset(*text_field->GetHandle());
		return gcnew Vector2i(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

String^ BlendELF::GetTextFieldText(EngineHandle^ text_field) {
	try {
		return gcnew String(elfGetTextFieldText(*text_field->GetHandle()));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetTextFieldTexture(EngineHandle^ text_field, EngineHandle^ texture) {
	try {
		elfSetTextFieldTexture(*text_field->GetHandle(), *texture->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetTextFieldFont(EngineHandle^ text_field, EngineHandle^ font) {
	try {
		elfSetTextFieldFont(*text_field->GetHandle(), *font->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetTextFieldTextColor(EngineHandle^ text_field, float r, float g, float b, float a) {
	try {
		elfSetTextFieldTextColor(*text_field->GetHandle(), r, g, b, a);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetTextFieldOffset(EngineHandle^ text_field, int offset_x, int offset_y) {
	try {
		elfSetTextFieldOffset(*text_field->GetHandle(), offset_x, offset_y);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetTextFieldText(EngineHandle^ text_field, String^ text) {
	try {
		elfSetTextFieldText(*text_field->GetHandle(), toUnmanagedString(text));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::CreateSlider(String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfCreateSlider(toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetSliderBackgroundTexture(EngineHandle^ slider) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetSliderBackgroundTexture(*slider->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetSliderSliderTexture(EngineHandle^ slider) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetSliderSliderTexture(*slider->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

float BlendELF::GetSliderValue(EngineHandle^ slider) {
	try {
		return elfGetSliderValue(*slider->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetSliderBackgroundTexture(EngineHandle^ slider, EngineHandle^ background) {
	try {
		elfSetSliderBackgroundTexture(*slider->GetHandle(), *background->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetSliderSliderTexture(EngineHandle^ slider, EngineHandle^ slider_texture) {
	try {
		elfSetSliderSliderTexture(*slider->GetHandle(), *slider_texture->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetSliderValue(EngineHandle^ slider, float value) {
	try {
		elfSetSliderValue(*slider->GetHandle(), value);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::CreateScreen(String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfCreateScreen(toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetScreenTexture(EngineHandle^ screen) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetScreenTexture(*screen->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetScreenTexture(EngineHandle^ screen, EngineHandle^ texture) {
	try {
		elfSetScreenTexture(*screen->GetHandle(), *texture->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::CreateTextList(String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfCreateTextList(toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetTextListFont(EngineHandle^ text_list) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetTextListFont(*text_list->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineColour^ BlendELF::GetTextListSelectionColor(EngineHandle^ text_list) {
	try {
		elf_color* result = new elf_color();
		*result = elfGetTextListSelectionColor(*text_list->GetHandle());
		return gcnew EngineColour(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetTextListRowCount(EngineHandle^ text_list) {
	try {
		return elfGetTextListRowCount(*text_list->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetTextListItemCount(EngineHandle^ text_list) {
	try {
		return elfGetTextListItemCount(*text_list->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetTextListSelectionIndex(EngineHandle^ text_list) {
	try {
		return elfGetTextListSelectionIndex(*text_list->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

int BlendELF::GetTextListOffset(EngineHandle^ text_list) {
	try {
		return elfGetTextListOffset(*text_list->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

String^ BlendELF::GetTextListItem(EngineHandle^ text_list, int idx) {
	try {
		return gcnew String(elfGetTextListItem(*text_list->GetHandle(), idx));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

String^ BlendELF::GetTextListSelectedItem(EngineHandle^ text_list) {
	try {
		return gcnew String(elfGetTextListSelectedItem(*text_list->GetHandle()));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetTextListFont(EngineHandle^ text_list, EngineHandle^ font) {
	try {
		elfSetTextListFont(*text_list->GetHandle(), *font->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetTextListSelectionColor(EngineHandle^ text_list, float r, float g, float b, float a) {
	try {
		elfSetTextListSelectionColor(*text_list->GetHandle(), r, g, b, a);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetTextListSize(EngineHandle^ text_list, int rows, int width) {
	try {
		elfSetTextListSize(*text_list->GetHandle(), rows, width);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::AddTextListItem(EngineHandle^ text_list, String^ text) {
	try {
		elfAddTextListItem(*text_list->GetHandle(), toUnmanagedString(text));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::RemoveTextListItem(EngineHandle^ text_list, int idx) {
	try {
		return elfRemoveTextListItem(*text_list->GetHandle(), idx);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::RemoveTextListItems(EngineHandle^ text_list) {
	try {
		elfRemoveTextListItems(*text_list->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetTextListOffset(EngineHandle^ text_list, int offset) {
	try {
		elfSetTextListOffset(*text_list->GetHandle(), offset);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetTextListSelection(EngineHandle^ text_list, int selection) {
	try {
		elfSetTextListSelection(*text_list->GetHandle(), selection);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::CreateCheckBox(String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfCreateCheckBox(toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::GetCheckBoxState(EngineHandle^ check_box) {
	try {
		return elfGetCheckBoxState(*check_box->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetCheckBoxOffTexture(EngineHandle^ check_box) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetCheckBoxOffTexture(*check_box->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetCheckBoxOnTexture(EngineHandle^ check_box) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetCheckBoxOnTexture(*check_box->GetHandle());
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetCheckBoxOffTexture(EngineHandle^ check_box, EngineHandle^ off) {
	try {
		elfSetCheckBoxOffTexture(*check_box->GetHandle(), *off->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetCheckBoxOnTexture(EngineHandle^ check_box, EngineHandle^ on) {
	try {
		elfSetCheckBoxOnTexture(*check_box->GetHandle(), *on->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::SetCheckBoxState(EngineHandle^ check_box, bool state) {
	try {
		elfSetCheckBoxState(*check_box->GetHandle(), state);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::CreateGui() {
	try {
		elf_handle* result = new elf_handle();
		*result = elfCreateGui();
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::AddGuiObject(EngineHandle^ parent, EngineHandle^ object) {
	try {
		return elfAddGuiObject(*parent->GetHandle(), *object->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetGuiObjectByName(EngineHandle^ parent, String^ name) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetGuiObjectByName(*parent->GetHandle(), toUnmanagedString(name));
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

EngineHandle^ BlendELF::GetGuiObjectByIndex(EngineHandle^ parent, int idx) {
	try {
		elf_handle* result = new elf_handle();
		*result = elfGetGuiObjectByIndex(*parent->GetHandle(), idx);
		return gcnew EngineHandle(result);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::RemoveGuiObjectByName(EngineHandle^ parent, String^ name) {
	try {
		return elfRemoveGuiObjectByName(*parent->GetHandle(), toUnmanagedString(name));
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::RemoveGuiObjectByIndex(EngineHandle^ parent, int idx) {
	try {
		return elfRemoveGuiObjectByIndex(*parent->GetHandle(), idx);
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

bool BlendELF::RemoveGuiObjectByObject(EngineHandle^ parent, EngineHandle^ object) {
	try {
		return elfRemoveGuiObjectByObject(*parent->GetHandle(), *object->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}

void BlendELF::EmptyGui(EngineHandle^ gui) {
	try {
		elfEmptyGui(*gui->GetHandle());
	}
	catch(...) {
		throw gcnew BlendELFException("BlendELF encountered an unhandled exception. Check elf.log for further details."/*toManagedString(elfGetErrorString())*/);
	}
}


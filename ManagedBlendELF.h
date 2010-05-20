#pragma once

using namespace System;

namespace ManagedBlendELF {
	public ref class BlendELF {
		public:
			bool InitWithHWND(int width, int height, String^ title, bool fullscreen, unsigned int hwnd);
			unsigned int GetWindowHWND();
			bool IsObject(EngineHandle^ obj);
			ObjectType GetObjectType(EngineHandle^ obj);
			int GetObjectRefCount(EngineHandle^ obj);
			int GetGlobalRefCount();
			int GetGlobalObjCount();
			bool IsActor(EngineHandle^ obj);
			bool IsGuiObject(EngineHandle^ obj);
			EngineHandle^ CreateList();
			int GetListLength(EngineHandle^ list);
			void InsertToList(EngineHandle^ list, int idx, EngineHandle^ obj);
			void AppendToList(EngineHandle^ list, EngineHandle^ obj);
			bool RemoveFromList(EngineHandle^ list, EngineHandle^ obj);
			EngineHandle^ GetItemFromList(EngineHandle^ list, int idx);
			EngineHandle^ BeginList(EngineHandle^ list);
			EngineHandle^ NextInList(EngineHandle^ list);
			EngineHandle^ RbeginList(EngineHandle^ list);
			EngineHandle^ RnextInList(EngineHandle^ list);
			void SeekList(EngineHandle^ list, EngineHandle^ ptr);
			void RseekList(EngineHandle^ list, EngineHandle^ ptr);
			void SetTitle(String^ title);
			int GetWindowWidth();
			int GetWindowHeight();
			bool IsFullscreen();
			String^ GetTitle();
			int GetMultisamples();
			double GetTime();
			bool IsWindowOpened();
			Vector2i^ GetMousePosition();
			Vector2i^ GetMouseForce();
			void SetMousePosition(int x, int y);
			void HideMouse(bool hide);
			bool IsMouseHidden();
			int GetMouseWheel();
			EngineButtonState GetMouseButtonState(MouseButton button);
			EngineKeyState GetKeyState(EngineKey key);
			bool GetJoystickPresent(int joy);
			Vector2f^ GetJoystickAxis(int joy);
			int GetJoystickButtonState(int joy, int but);
			int GetEventCount();
			EngineHandle^ GetEvent(int idx);
			EngineHandle^ ReadGameConfig(String^ file_path);
			int GetGameConfigWindowWidth(EngineHandle^ config);
			int GetGameConfigWindowHeight(EngineHandle^ config);
			bool GetGameConfigFullscreen(EngineHandle^ config);
			float GetGameConfigTextureAnisotropy(EngineHandle^ config);
			int GetGameConfigShadowMapSize(EngineHandle^ config);
			String^ GetGameConfigStart(EngineHandle^ config);
			bool Init(int width, int height, String^ title, bool fullscreen);
			bool InitWithConfig(String^ file_path);
			int GetVersionMajor();
			int GetVersionMinor();
			String^ GetVersionRelease();
			String^ GetVersion();
			bool Run();
			void Quit();
			void SetF10Exit(bool exit);
			bool GetF10Exit();
			EngineHandle^ LoadScene(String^ file_path);
			void SetScene(EngineHandle^ scene);
			EngineHandle^ GetScene();
			void SetGui(EngineHandle^ gui);
			EngineHandle^ GetGui();
			float GetSync();
			int GetFps();
			bool SaveScreenShot(String^ file_path);
			void SetFpsLimit(int fps_limit);
			int GetFpsLimit();
			void SetTickRate(float tick_rate);
			float GetTickRate();
			void SetSpeed(float speed);
			float GetSpeed();
			void SetTextureAnisotropy(float anisotropy);
			float GetTextureAnisotropy();
			void SetShadowMapSize(int size);
			int GetShadowMapSize();
			int GetPolygonsRendered();
			void SetBloom(float threshold);
			void DisableBloom();
			float GetBloomThreshold();
			void SetDof(float focal_range, float focal_distance);
			void DisableDof();
			float GetDofFocalRange();
			float GetDofFocalDistance();
			void SetSsao(float amount);
			void DisableSsao();
			float GetSsaoAmount();
			void SetLightShafts(float intensity);
			void DisableLightShafts();
			float GetLightShaftsInteisity();
			bool IsBloom();
			bool IsSsao();
			bool IsDof();
			bool IsLightShafts();
			void SetOcclusionCulling(bool cull);
			bool IsOcclusionCulling();
			void SetDebugDraw(bool debug_draw);
			bool IsDebugDraw();
			EngineHandle^ GetActor();
			Vector3f^ CreateVec3f();
			Vector3f^ CreateVec3fFromValues(float x, float y, float z);
			Vector4f^ CreateQua();
			Vector4f^ CreateQuaFromEuler(float x, float y, float z);
			Vector3f^ MulQuaVec3f(Vector4f^ qua, Vector3f^ vec);
			Vector4f^ MulQuaQua(Vector4f^ qua1, Vector4f^ qua2);
			Vector4f^ GetQuaInverted(Vector4f^ qua);
			Vector3f^ SubVec3fVec3f(Vector3f^ vec1, Vector3f^ vec2);
			Vector3f^ AddVec3fVec3f(Vector3f^ vec1, Vector3f^ vec2);
			float GetVec3fLength(Vector3f^ vec);
			bool AboutZero(float val);
			float FloatAbs(float val);
			float FloatMax(float a, float b);
			float RandomFloat();
			float RandomFloatRange(float min, float max);
			int RandomInt();
			int RandomIntRange(int min, int max);
			EngineHandle^ CreateFramePlayer();
			void UpdateFramePlayer(EngineHandle^ player);
			void SetFramePlayerFrame(EngineHandle^ player, float frame);
			void PlayFramePlayer(EngineHandle^ player, float start, float end, float speed);
			void LoopFramePlayer(EngineHandle^ player, float start, float end, float speed);
			void StopFramePlayer(EngineHandle^ player);
			void PauseFramePlayer(EngineHandle^ player);
			void ResumeFramePlayer(EngineHandle^ player);
			float GetFramePlayerStart(EngineHandle^ player);
			float GetFramePlayerEnd(EngineHandle^ player);
			float GetFramePlayerSpeed(EngineHandle^ player);
			float GetFramePlayerFrame(EngineHandle^ player);
			bool IsFramePlayerPlaying(EngineHandle^ player);
			bool IsFramePlayerPaused(EngineHandle^ player);
			EngineHandle^ CreateTimer();
			void StartTimer(EngineHandle^ timer);
			double GetElapsedTime(EngineHandle^ timer);
			EngineHandle^ CreateTextureFromFile(String^ file_path);
			String^ GetTextureName(EngineHandle^ texture);
			String^ GetTextureFilePath(EngineHandle^ texture);
			int GetTextureWidth(EngineHandle^ texture);
			int GetTextureHeight(EngineHandle^ texture);
			TextureFormat GetTextureFormat(EngineHandle^ texture);
			TextureDataFormat GetTextureDataFormat(EngineHandle^ texture);
			EngineHandle^ CreateMaterial(String^ name);
			void SetMaterialTexture(EngineHandle^ material, int slot, EngineHandle^ texture);
			void SetMaterialTextureType(EngineHandle^ material, int slot, TextureType type);
			void SetMaterialTextureParallaxScale(EngineHandle^ material, int slot, float scale);
			void SetMaterialColor(EngineHandle^ material, float r, float g, float b, float a);
			void SetMaterialSpecularColor(EngineHandle^ material, float r, float g, float b, float a);
			void SetMaterialAmbientColor(EngineHandle^ material, float r, float g, float b, float a);
			void SetMaterialSpecularPower(EngineHandle^ material, float power);
			void SetMaterialLighting(EngineHandle^ material, bool lighting);
			String^ GetMaterialName(EngineHandle^ material);
			String^ GetMaterialFilePath(EngineHandle^ material);
			EngineHandle^ GetMaterialTexture(EngineHandle^ material, int slot);
			TextureType GetMaterialTextureType(EngineHandle^ material, int slot);
			float GetMaterialTextureParallaxScale(EngineHandle^ material, int slot);
			EngineColour^ GetMaterialColor(EngineHandle^ material);
			EngineColour^ GetMaterialSpecularColor(EngineHandle^ material);
			EngineColour^ GetMaterialAmbientColor(EngineHandle^ material);
			float GetMaterialSpecularPower(EngineHandle^ material);
			bool GetMaterialLighting(EngineHandle^ material);
			void AddPointToBezierCurve(EngineHandle^ curve, EngineHandle^ point);
			bool AddCurveToIpo(EngineHandle^ ipo, EngineHandle^ curve);
			Vector3f^ GetIpoLoc(EngineHandle^ ipo, float x);
			Vector3f^ GetIpoRot(EngineHandle^ ipo, float x);
			Vector3f^ GetIpoScale(EngineHandle^ ipo, float x);
			Vector4f^ GetIpoQua(EngineHandle^ ipo, float x);
			String^ GetActorName(EngineHandle^ actor);
			String^ GetActorFilePath(EngineHandle^ actor);
			EngineHandle^ GetActorParent(EngineHandle^ actor);
			void SetActorParent(EngineHandle^ actor, EngineHandle^ parent);
			int GetActorChildCount(EngineHandle^ actor);
			EngineHandle^ GetActorChildByName(EngineHandle^ actor, String^ name);
			EngineHandle^ GetActorChildByIndex(EngineHandle^ actor, int idx);
			void RemoveActorChildren(EngineHandle^ actor);
			EngineHandle^ GetActorScript(EngineHandle^ actor);
			void SetActorScript(EngineHandle^ actor, EngineHandle^ script);
			void SetActorPosition(EngineHandle^ actor, float x, float y, float z);
			void SetActorRotation(EngineHandle^ actor, float x, float y, float z);
			void SetActorOrientation(EngineHandle^ actor, float x, float y, float z, float w);
			void RotateActor(EngineHandle^ actor, float x, float y, float z);
			void RotateActorLocal(EngineHandle^ actor, float x, float y, float z);
			void MoveActor(EngineHandle^ actor, float x, float y, float z);
			void MoveActorLocal(EngineHandle^ actor, float x, float y, float z);
			Vector3f^ GetActorPosition(EngineHandle^ actor);
			Vector3f^ GetActorRotation(EngineHandle^ actor);
			Vector4f^ GetActorOrientation(EngineHandle^ actor);
			void SetActorDamping(EngineHandle^ actor, float lin_damp, float ang_damp);
			void SetActorSleepThresholds(EngineHandle^ actor, float lin_thrs, float ang_thrs);
			void SetActorRestitution(EngineHandle^ actor, float restitution);
			void AddForceToActor(EngineHandle^ actor, float x, float y, float z);
			void AddTorqueToActor(EngineHandle^ actor, float x, float y, float z);
			void SetActorLinearVelocity(EngineHandle^ actor, float x, float y, float z);
			void SetActorAngularVelocity(EngineHandle^ actor, float x, float y, float z);
			void SetActorLinearFactor(EngineHandle^ actor, float x, float y, float z);
			void SetActorAngularFactor(EngineHandle^ actor, float x, float y, float z);
			Vector3f^ GetActorLinearVelocity(EngineHandle^ actor);
			Vector3f^ GetActorAngularVelocity(EngineHandle^ actor);
			Vector3f^ GetActorLinearFactor(EngineHandle^ actor);
			Vector3f^ GetActorAngularFactor(EngineHandle^ actor);
			float GetActorLinearDamping(EngineHandle^ actor);
			float GetActorAngularDamping(EngineHandle^ actor);
			float GetActorLinearSleepThreshold(EngineHandle^ actor);
			float GetActorAngularSleepThreshold(EngineHandle^ actor);
			float GetActorRestitution(EngineHandle^ actor);
			EngineHandle^ AddHingeJointToActor(EngineHandle^ actor, EngineHandle^ actor2, String^ name, float px, float py, float pz, float ax, float ay, float az);
			EngineHandle^ AddBallJointToActor(EngineHandle^ actor, EngineHandle^ actor2, String^ name, float px, float py, float pz);
			EngineHandle^ AddConeTwistJointToActor(EngineHandle^ actor, EngineHandle^ actor2, String^ name, float px, float py, float pz, float ax, float ay, float az);
			EngineHandle^ GetActorJointByName(EngineHandle^ actor, String^ name);
			EngineHandle^ GetActorJointByIndex(EngineHandle^ actor, int idx);
			bool RemoveActorJointByName(EngineHandle^ actor, String^ name);
			bool RemoveActorJointByIndex(EngineHandle^ actor, int idx);
			bool RemoveActorJointByObject(EngineHandle^ actor, EngineHandle^ joint);
			void SetActorIpoFrame(EngineHandle^ actor, float frame);
			void SetActorHierarchyIpoFrame(EngineHandle^ actor, float frame);
			void PlayActorIpo(EngineHandle^ actor, float start, float end, float speed);
			void LoopActorIpo(EngineHandle^ actor, float start, float end, float speed);
			void StopActorIpo(EngineHandle^ actor);
			void PauseActorIpo(EngineHandle^ actor);
			void ResumeActorIpo(EngineHandle^ actor);
			float GetActorIpoStart(EngineHandle^ actor);
			float GetActorIpoEnd(EngineHandle^ actor);
			float GetActorIpoSpeed(EngineHandle^ actor);
			float GetActorIpoFrame(EngineHandle^ actor);
			bool IsActorIpoPlaying(EngineHandle^ actor);
			bool IsActorIpoPaused(EngineHandle^ actor);
			int GetActorCollisionCount(EngineHandle^ actor);
			EngineHandle^ GetActorCollision(EngineHandle^ actor, int idx);
			void SetActorSelected(EngineHandle^ actor, bool selected);
			bool GetActorSelected(EngineHandle^ actor);
			EngineHandle^ CreateCamera(String^ name);
			void SetCameraViewport(EngineHandle^ camera, int x, int y, int width, int height);
			void SetCameraPerspective(EngineHandle^ camera, float fov, float aspect, float clip_near, float clip_far);
			void SetCameraOrthographic(EngineHandle^ camera, int x, int y, int width, int height, float clip_near, float clip_far);
			float GetCameraFov(EngineHandle^ camera);
			float GetCameraAspect(EngineHandle^ camera);
			Vector2f^ GetCameraClip(EngineHandle^ camera);
			Vector2f^ GetCameraFarPlaneSize(EngineHandle^ camera);
			Vector3f^ UnProjectCameraPoint(EngineHandle^ camera, float x, float y, float z);
			String^ GetModelName(EngineHandle^ model);
			String^ GetModelFilePath(EngineHandle^ model);
			int GetModelVerticeCount(EngineHandle^ model);
			int GetModelIndiceCount(EngineHandle^ model);
			Vector3f^ GetModelAabbMin(EngineHandle^ model);
			Vector3f^ GetModelAabbMax(EngineHandle^ model);
			EngineHandle^ CreateEntity(String^ name);
			void SetEntityScale(EngineHandle^ entity, float x, float y, float z);
			Vector3f^ GetEntityScale(EngineHandle^ entity);
			void SetEntityModel(EngineHandle^ entity, EngineHandle^ model);
			EngineHandle^ GetEntityModel(EngineHandle^ entity);
			int GetEntityMaterialCount(EngineHandle^ entity);
			void AddEntityMaterial(EngineHandle^ entity, EngineHandle^ material);
			void SetEntityMaterial(EngineHandle^ entity, int idx, EngineHandle^ material);
			EngineHandle^ GetEntityMaterial(EngineHandle^ entity, int idx);
			void SetEntityVisible(EngineHandle^ entity, bool visible);
			bool GetEntityVisible(EngineHandle^ entity);
			void SetEntityPhysics(EngineHandle^ entity, CollisionShape type, float mass);
			void DisableEntityPhysics(EngineHandle^ entity);
			void SetEntityArmature(EngineHandle^ entity, EngineHandle^ armature);
			void SetEntityArmatureFrame(EngineHandle^ entity, float frame);
			void PlayEntityArmature(EngineHandle^ entity, float start, float end, float speed);
			void LoopEntityArmature(EngineHandle^ entity, float start, float end, float speed);
			void StopEntityArmature(EngineHandle^ entity);
			void PauseEntityArmature(EngineHandle^ entity);
			void ResumeEntityArmature(EngineHandle^ entity);
			float GetEntityArmatureStart(EngineHandle^ entity);
			float GetEntityArmatureEnd(EngineHandle^ entity);
			float GetEntityArmatureSpeed(EngineHandle^ entity);
			float GetEntityArmatureFrame(EngineHandle^ entity);
			bool IsEntityArmaturePlaying(EngineHandle^ entity);
			bool IsEntityArmaturePaused(EngineHandle^ entity);
			EngineHandle^ GetEntityArmature(EngineHandle^ entity);
			bool GetEntityChanged(EngineHandle^ entity);
			EngineHandle^ CreateLight(String^ name);
			LightType GetLightType(EngineHandle^ light);
			EngineColour^ GetLightColor(EngineHandle^ light);
			float GetLightDistance(EngineHandle^ light);
			float GetLightFadeSpeed(EngineHandle^ light);
			bool GetLightShadowCaster(EngineHandle^ light);
			bool GetLightVisible(EngineHandle^ light);
			Vector2f^ GetLightCone(EngineHandle^ light);
			bool IsLightShaft(EngineHandle^ light);
			float GetLightShaftSize(EngineHandle^ light);
			float GetLightShaftIntensity(EngineHandle^ light);
			float GetLightShaftFadeOff(EngineHandle^ light);
			void SetLightType(EngineHandle^ light, LightType type);
			void SetLightColor(EngineHandle^ light, float r, float g, float b, float a);
			void SetLightDistance(EngineHandle^ light, float distance);
			void SetLightFadeSpeed(EngineHandle^ light, float fade_speed);
			void SetLightShadowCaster(EngineHandle^ light, bool shadow_caster);
			void SetLightVisible(EngineHandle^ light, bool visible);
			void SetLightCone(EngineHandle^ light, float inner_cone, float outer_cone);
			void SetLightShaft(EngineHandle^ light, float size, float intensity, float fade_off);
			void DisableLightShaft(EngineHandle^ light);
			EngineHandle^ CreateBone(String^ name);
			EngineHandle^ GetBoneArmature(EngineHandle^ bone);
			EngineHandle^ CreateArmature(String^ name);
			EngineHandle^ GetBoneFromArmatureByName(String^ name, EngineHandle^ armature);
			EngineHandle^ GetBoneFromArmatureById(int id, EngineHandle^ armature);
			void AddRootBoneToArmature(EngineHandle^ armature, EngineHandle^ bone);
			EngineHandle^ CreateParticles(String^ name, int max_count);
			String^ GetParticlesName(EngineHandle^ particles);
			String^ GetParticlesFilePath(EngineHandle^ particles);
			void SetParticlesMaxCount(EngineHandle^ particles, int max_count);
			void SetParticlesDrawMode(EngineHandle^ particles, ParticleDrawMode mode);
			void SetParticlesTexture(EngineHandle^ particles, EngineHandle^ texture);
			void SetParticlesModel(EngineHandle^ particles, EngineHandle^ model);
			void SetParticlesGravity(EngineHandle^ particles, float x, float y, float z);
			void SetParticlesSpawnDelay(EngineHandle^ particles, float delay);
			void SetParticlesSize(EngineHandle^ particles, float min, float max);
			void SetParticlesSizeGrowth(EngineHandle^ particles, float min, float max);
			void SetParticlesRotation(EngineHandle^ particles, float min, float max);
			void SetParticlesRotationGrowth(EngineHandle^ particles, float min, float max);
			void SetParticlesLifeSpan(EngineHandle^ particles, float min, float max);
			void SetParticlesFadeSpeed(EngineHandle^ particles, float min, float max);
			void SetParticlesPositionMin(EngineHandle^ particles, float x, float y, float z);
			void SetParticlesPositionMax(EngineHandle^ particles, float x, float y, float z);
			void SetParticlesVelocityMin(EngineHandle^ particles, float x, float y, float z);
			void SetParticlesVelocityMax(EngineHandle^ particles, float x, float y, float z);
			void SetParticlesColorMin(EngineHandle^ particles, float r, float g, float b, float a);
			void SetParticlesColorMax(EngineHandle^ particles, float r, float g, float b, float a);
			int GetParticlesMaxCount(EngineHandle^ particles);
			int GetParticlesCount(EngineHandle^ particles);
			ParticleDrawMode GetParticlesDrawMode(EngineHandle^ particles);
			EngineHandle^ GetParticlesTexture(EngineHandle^ particles);
			EngineHandle^ GetParticlesModel(EngineHandle^ particles);
			Vector3f^ GetParticlesGravity(EngineHandle^ particles);
			float GetParticlesSpawnDelay(EngineHandle^ particles);
			float GetParticlesSizeMin(EngineHandle^ particles);
			float GetParticlesSizeMax(EngineHandle^ particles);
			float GetParticlesSizeGrowthMin(EngineHandle^ particles);
			float GetParticlesSizeGrowthMax(EngineHandle^ particles);
			float GetParticlesRotationMin(EngineHandle^ particles);
			float GetParticlesRotationMax(EngineHandle^ particles);
			float GetParticlesRotationGrowthMin(EngineHandle^ particles);
			float GetParticlesRotationGrowthMax(EngineHandle^ particles);
			float GetParticlesLifeSpanMin(EngineHandle^ particles);
			float GetParticlesLifeSpanMax(EngineHandle^ particles);
			float GetParticlesFadeSpeedMin(EngineHandle^ particles);
			float GetParticlesFadeSpeedMax(EngineHandle^ particles);
			Vector3f^ GetParticlesPositionMin(EngineHandle^ particles);
			Vector3f^ GetParticlesPositionMax(EngineHandle^ particles);
			Vector3f^ GetParticlesVelocityMin(EngineHandle^ particles);
			Vector3f^ GetParticlesVelocityMax(EngineHandle^ particles);
			EngineColour^ GetParticlesColorMin(EngineHandle^ particles);
			EngineColour^ GetParticlesColorMax(EngineHandle^ particles);
			EngineHandle^ CreateSceneFromFile(String^ file_path);
			void SetSceneAmbientColor(EngineHandle^ scene, float r, float g, float b, float a);
			EngineColour^ GetSceneAmbientColor(EngineHandle^ scene);
			void SetSceneGravity(EngineHandle^ scene, float x, float y, float z);
			Vector3f^ GetSceneGravity(EngineHandle^ scene);
			String^ GetSceneName(EngineHandle^ scene);
			String^ GetSceneFilePath(EngineHandle^ scene);
			int GetSceneCameraCount(EngineHandle^ scene);
			int GetSceneEntityCount(EngineHandle^ scene);
			int GetSceneLightCount(EngineHandle^ scene);
			int GetSceneArmatureCount(EngineHandle^ scene);
			int GetSceneParticlesCount(EngineHandle^ scene);
			void AddCameraToScene(EngineHandle^ scene, EngineHandle^ camera);
			void AddEntityToScene(EngineHandle^ scene, EngineHandle^ entity);
			void AddLightToScene(EngineHandle^ scene, EngineHandle^ light);
			void AddParticlesToScene(EngineHandle^ scene, EngineHandle^ particles);
			void SetSceneActiveCamera(EngineHandle^ scene, EngineHandle^ camera);
			EngineHandle^ GetSceneActiveCamera(EngineHandle^ scene);
			EngineHandle^ GetSceneRayCastResult(EngineHandle^ scene, float x, float y, float z, float dx, float dy, float dz);
			EngineHandle^ GetSceneRayCastResults(EngineHandle^ scene, float x, float y, float z, float dx, float dy, float dz);
			EngineHandle^ GetDebugSceneRayCastResult(EngineHandle^ scene, float x, float y, float z, float dx, float dy, float dz);
			EngineHandle^ GetDebugSceneRayCastResults(EngineHandle^ scene, float x, float y, float z, float dx, float dy, float dz);
			EngineHandle^ GetCameraByIndex(EngineHandle^ scene, int idx);
			EngineHandle^ GetEntityByIndex(EngineHandle^ scene, int idx);
			EngineHandle^ GetLightByIndex(EngineHandle^ scene, int idx);
			EngineHandle^ GetArmatureByIndex(EngineHandle^ scene, int idx);
			EngineHandle^ GetParticlesByIndex(EngineHandle^ scene, int idx);
			EngineHandle^ GetTextureByName(EngineHandle^ scene, String^ name);
			EngineHandle^ GetMaterialByName(EngineHandle^ scene, String^ name);
			EngineHandle^ GetModelByName(EngineHandle^ scene, String^ name);
			EngineHandle^ GetScriptByName(EngineHandle^ scene, String^ name);
			EngineHandle^ GetCameraByName(EngineHandle^ scene, String^ name);
			EngineHandle^ GetEntityByName(EngineHandle^ scene, String^ name);
			EngineHandle^ GetLightByName(EngineHandle^ scene, String^ name);
			EngineHandle^ GetArmatureByName(EngineHandle^ scene, String^ name);
			EngineHandle^ GetParticlesByName(EngineHandle^ scene, String^ name);
			EngineHandle^ GetActorByName(EngineHandle^ scene, String^ name);
			bool RemoveCameraByName(EngineHandle^ scene, String^ name);
			bool RemoveEntityByName(EngineHandle^ scene, String^ name);
			bool RemoveLightByName(EngineHandle^ scene, String^ name);
			bool RemoveParticlesByName(EngineHandle^ scene, String^ name);
			bool RemoveCameraByIndex(EngineHandle^ scene, int idx);
			bool RemoveEntityByIndex(EngineHandle^ scene, int idx);
			bool RemoveLightByIndex(EngineHandle^ scene, int idx);
			bool RemoveParticlesByIndex(EngineHandle^ scene, int idx);
			bool RemoveCameraByObject(EngineHandle^ scene, EngineHandle^ camera);
			bool RemoveEntityByObject(EngineHandle^ scene, EngineHandle^ entity);
			bool RemoveLightByObject(EngineHandle^ scene, EngineHandle^ light);
			bool RemoveParticlesByObject(EngineHandle^ scene, EngineHandle^ particles);
			bool RemoveActorByObject(EngineHandle^ scene, EngineHandle^ actor);
			EngineHandle^ CreateScript();
			EngineHandle^ CreateScriptFromFile(String^ file_path);
			String^ GetScriptName(EngineHandle^ script);
			String^ GetScriptFilePath(EngineHandle^ script);
			void SetScriptText(EngineHandle^ script, String^ text);
			void RunScript(EngineHandle^ script);
			void RunString(String^ str);
			bool IsScriptError(EngineHandle^ script);
			void SetAudioVolume(float volume);
			float GetAudioVolume();
			void SetAudioRolloff(float rolloff);
			float GetAudioRolloff();
			EngineHandle^ LoadSound(String^ file_path);
			EngineHandle^ CreateSound();
			void DestroySound(EngineHandle^ sound);
			EngineHandle^ PlaySound(EngineHandle^ sound, float volume);
			EngineHandle^ PlayEntitySound(EngineHandle^ entity, EngineHandle^ sound, float volume);
			EngineHandle^ LoopSound(EngineHandle^ sound, float volume);
			EngineHandle^ LoopEntitySound(EngineHandle^ entity, EngineHandle^ sound, float volume);
			void SetSoundVolume(EngineHandle^ audio_source, float volume);
			float GetSoundVolume(EngineHandle^ audio_source);
			void PauseSound(EngineHandle^ audio_source);
			void ResumeSound(EngineHandle^ audio_source);
			void StopSound(EngineHandle^ audio_source);
			bool IsSoundPlaying(EngineHandle^ audio_source);
			bool IsSoundPaused(EngineHandle^ audio_source);
			EngineHandle^ GetCollisionActor(EngineHandle^ collision);
			Vector3f^ GetCollisionPosition(EngineHandle^ collision);
			Vector3f^ GetCollisionNormal(EngineHandle^ collision);
			float GetCollisionDepth(EngineHandle^ collision);
			String^ GetJointName(EngineHandle^ joint);
			JointType GetJointType(EngineHandle^ joint);
			EngineHandle^ GetJointActorA(EngineHandle^ joint);
			EngineHandle^ GetJointActorB(EngineHandle^ joint);
			Vector3f^ GetJointPivot(EngineHandle^ joint);
			Vector3f^ GetJointAxis(EngineHandle^ joint);
			EngineHandle^ CreateFontFromFile(String^ file_path, int size);
			String^ GetFontName(EngineHandle^ font);
			String^ GetFontFilePath(EngineHandle^ font);
			int GetFontSize(EngineHandle^ font);
			int GetStringWidth(EngineHandle^ font, String^ str);
			int GetStringHeight(EngineHandle^ font, String^ str);
			String^ GetGuiObjectName(EngineHandle^ object);
			Vector2i^ GetGuiObjectPosition(EngineHandle^ object);
			Vector2i^ GetGuiObjectSize(EngineHandle^ object);
			EngineColour^ GetGuiObjectColor(EngineHandle^ object);
			bool GetGuiObjectVisible(EngineHandle^ object);
			EngineHandle^ GetGuiObjectScript(EngineHandle^ object);
			int GetGuiObjectEvent(EngineHandle^ object);
			void SetGuiObjectPosition(EngineHandle^ object, float x, float y);
			void SetGuiObjectColor(EngineHandle^ object, float r, float g, float b, float a);
			void SetGuiObjectVisible(EngineHandle^ object, bool visible);
			void SetGuiObjectScript(EngineHandle^ object, EngineHandle^ script);
			EngineHandle^ CreateLabel(String^ name);
			EngineHandle^ GetLabelFont(EngineHandle^ label);
			String^ GetLabelText(EngineHandle^ label);
			void SetLabelFont(EngineHandle^ label, EngineHandle^ font);
			void SetLabelText(EngineHandle^ label, String^ text);
			EngineHandle^ CreateButton(String^ name);
			bool GetButtonState(EngineHandle^ button);
			EngineHandle^ GetButtonOffTexture(EngineHandle^ button);
			EngineHandle^ GetButtonOverTexture(EngineHandle^ button);
			EngineHandle^ GetButtonOnTexture(EngineHandle^ button);
			void SetButtonOffTexture(EngineHandle^ button, EngineHandle^ off);
			void SetButtonOverTexture(EngineHandle^ button, EngineHandle^ over);
			void SetButtonOnTexture(EngineHandle^ button, EngineHandle^ on);
			EngineHandle^ CreatePicture(String^ name);
			EngineHandle^ GetPictureTexture(EngineHandle^ picture);
			void SetPictureTexture(EngineHandle^ picture, EngineHandle^ texture);
			EngineHandle^ CreateTextField(String^ name);
			EngineHandle^ GetTextFieldTexture(EngineHandle^ text_field);
			EngineHandle^ GetTextFieldFont(EngineHandle^ text_field);
			EngineColour^ GetTextFieldTextColor(EngineHandle^ text_field);
			Vector2i^ GetTextFieldOffset(EngineHandle^ text_field);
			String^ GetTextFieldText(EngineHandle^ text_field);
			void SetTextFieldTexture(EngineHandle^ text_field, EngineHandle^ texture);
			void SetTextFieldFont(EngineHandle^ text_field, EngineHandle^ font);
			void SetTextFieldTextColor(EngineHandle^ text_field, float r, float g, float b, float a);
			void SetTextFieldOffset(EngineHandle^ text_field, int offset_x, int offset_y);
			void SetTextFieldText(EngineHandle^ text_field, String^ text);
			EngineHandle^ CreateSlider(String^ name);
			EngineHandle^ GetSliderBackgroundTexture(EngineHandle^ slider);
			EngineHandle^ GetSliderSliderTexture(EngineHandle^ slider);
			float GetSliderValue(EngineHandle^ slider);
			void SetSliderBackgroundTexture(EngineHandle^ slider, EngineHandle^ background);
			void SetSliderSliderTexture(EngineHandle^ slider, EngineHandle^ slider_texture);
			void SetSliderValue(EngineHandle^ slider, float value);
			EngineHandle^ CreateScreen(String^ name);
			EngineHandle^ GetScreenTexture(EngineHandle^ screen);
			void SetScreenTexture(EngineHandle^ screen, EngineHandle^ texture);
			EngineHandle^ CreateTextList(String^ name);
			EngineHandle^ GetTextListFont(EngineHandle^ text_list);
			EngineColour^ GetTextListSelectionColor(EngineHandle^ text_list);
			int GetTextListRowCount(EngineHandle^ text_list);
			int GetTextListItemCount(EngineHandle^ text_list);
			int GetTextListSelectionIndex(EngineHandle^ text_list);
			int GetTextListOffset(EngineHandle^ text_list);
			String^ GetTextListItem(EngineHandle^ text_list, int idx);
			String^ GetTextListSelectedItem(EngineHandle^ text_list);
			void SetTextListFont(EngineHandle^ text_list, EngineHandle^ font);
			void SetTextListSelectionColor(EngineHandle^ text_list, float r, float g, float b, float a);
			void SetTextListSize(EngineHandle^ text_list, int rows, int width);
			void AddTextListItem(EngineHandle^ text_list, String^ text);
			bool RemoveTextListItem(EngineHandle^ text_list, int idx);
			void RemoveTextListItems(EngineHandle^ text_list);
			void SetTextListOffset(EngineHandle^ text_list, int offset);
			void SetTextListSelection(EngineHandle^ text_list, int selection);
			EngineHandle^ CreateCheckBox(String^ name);
			bool GetCheckBoxState(EngineHandle^ check_box);
			EngineHandle^ GetCheckBoxOffTexture(EngineHandle^ check_box);
			EngineHandle^ GetCheckBoxOnTexture(EngineHandle^ check_box);
			void SetCheckBoxOffTexture(EngineHandle^ check_box, EngineHandle^ off);
			void SetCheckBoxOnTexture(EngineHandle^ check_box, EngineHandle^ on);
			void SetCheckBoxState(EngineHandle^ check_box, bool state);
			EngineHandle^ CreateGui();
			bool AddGuiObject(EngineHandle^ parent, EngineHandle^ object);
			EngineHandle^ GetGuiObjectByName(EngineHandle^ parent, String^ name);
			EngineHandle^ GetGuiObjectByIndex(EngineHandle^ parent, int idx);
			bool RemoveGuiObjectByName(EngineHandle^ parent, String^ name);
			bool RemoveGuiObjectByIndex(EngineHandle^ parent, int idx);
			bool RemoveGuiObjectByObject(EngineHandle^ parent, EngineHandle^ object);
			void EmptyGui(EngineHandle^ gui);
	};
}

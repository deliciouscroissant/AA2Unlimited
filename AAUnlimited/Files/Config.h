#pragma once
#include "defs.h"
#include <string>
#include "Script/ScriptLua.h"

extern class Config
{
public:;
	int screenshotFormat;
	std::string sPoserHotKeys;
	int legacyMode;
	bool bSaveFileBackup;
	bool bSaveFileAutoRemove;
	int savedFileUsage;
	int savedEyeTextureUsage;
	bool bHAiOnNoPromptH;
	bool bUseDialoguePoser;
	bool bUseClothesPoser;
	bool bEnableHPosButtonReorder;
	bool bEnableFacecam;
	bool bUseShadowing;
	bool bUseHAi;
	bool bUsePPeX;
	bool bUsePP2;
	bool bTriggers;
	int PP2Cache;
	int PP2AudioCache;

	inline auto operator[](const char *name) const {
		return g_Lua[LUA_CONFIG_TABLE][name];
	}

	static inline void bindLua() {
#define LUA_CLASS Config
		LUA_EXTCLASS(Config,
			LUA_FIELD(screenshotFormat),
			LUA_FIELD(sPoserHotKeys),
			LUA_FIELD(bSaveFileBackup),
			LUA_FIELD(bSaveFileAutoRemove),
			LUA_FIELD(savedFileUsage),
			LUA_FIELD(savedEyeTextureUsage),
			LUA_FIELD(bHAiOnNoPromptH),
			LUA_FIELD(bUseDialoguePoser),
			LUA_FIELD(bUseClothesPoser),
			LUA_FIELD(bEnableHPosButtonReorder),
			LUA_FIELD(bEnableFacecam),
			LUA_FIELD(bUseShadowing),
			LUA_FIELD(bUseHAi),
			LUA_FIELD(bUsePPeX),
			LUA_FIELD(bUsePP2),
			LUA_FIELD(bTriggers),
			LUA_FIELD(PP2Cache),
			LUA_FIELD(PP2AudioCache),
			LUA_FIELD(legacyMode)
		);
#undef LUA_CLASS
		g_Lua[LUA_BINDING_TABLE]["Config"] = &g_Config;
	}
} g_Config;



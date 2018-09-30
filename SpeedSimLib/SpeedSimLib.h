// SpeedSimLib.h - Contains declarations of SpeedSim functions
#pragma once

#ifdef SPEEDSIMLIB_EXPORTS
#define SPEEDSIMLIB_API __declspec(dllexport)
#else
#define SPEEDSIMLIB_API __declspec(dllimport)
#endif

extern "C" SPEEDSIMLIB_API bool HelloTest();

extern "C" SPEEDSIMLIB_API bool SetFleetInt(vector<int> Attacker, vector<int> Defender);
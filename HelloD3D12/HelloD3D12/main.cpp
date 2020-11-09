#include <stdio.h>

// DirectX 12 specific headers.
#include <d3d12.h>
#include <dxgi1_6.h>
#include <d3dcompiler.h>
#include <DirectXMath.h>

#if !defined(NDEBUG) && !defined(_DEBUG)
#error "Define at least one."
#elif defined(NDEBUG) && defined(_DEBUG)
#error "Define at most one."
#endif

#if defined(_WIN64)
#if defined(_DEBUG)
#pragma comment (lib, "lib/64/SDL2-staticd")
#else
#pragma comment (lib, "lib/64/SDL2-static")
#endif
#else
#if defined(_DEBUG)
#pragma comment (lib, "lib/32/SDL2-staticd")
#else
#pragma comment (lib, "lib/32/SDL2-static")
#endif
#endif

#pragma comment (lib, "Imm32")
#pragma comment (lib, "Setupapi")
#pragma comment (lib, "Version")
#pragma comment (lib, "Winmm")

#define _CRT_SECURE_NO_WARNINGS 1

#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#define SDL_MAIN_HANDLED
#include "SDL2/SDL.h"

#include <cstdio>
#include <algorithm>

//#define WIN32_LEAN_AND_MEAN
//#include <Windows.h>        // GetModuleHandle()

#if defined(_DEBUG)
#define ENABLE_VALIDATION
#endif

int main () {
    // SDL_Init
    SDL_Init(SDL_INIT_VIDEO);

    ::printf("HelloD3D12");
    return 0;
}
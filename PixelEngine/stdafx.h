#pragma once

#ifdef __cplusplus
#define DEVELOPMENT_BUILD
#define ALPHA_BUILD

#define VERSION "0.1.0"

#include <future>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm> 
#include <unordered_map>
#include <vector>
#include <deque>
#include <iterator>
#define _SILENCE_EXPERIMENTAL_FILESYSTEM_DEPRECATION_WARNING
#include <experimental/filesystem>
namespace std {
    namespace filesystem = experimental::filesystem;
}
#include <regex> 
#include <memory>

#include "SDL2/SDL.h"
#undef M_PI
#include "SDL2/SDL_ttf.h"
#include "SDL2/SDL_image.h"
#include "SDL_gpu.h"
#ifdef _WIN32
#include "SDL_syswm.h"
#include <shobjidl.h>
#undef SendMessage
#endif


#include "box2d/b2_math.h"
#include "box2d/b2_world.h"
#include "box2d/b2_body.h"
#include "box2d/b2_shape.h"
#include "box2d/b2_polygon_shape.h"
#include "box2d/b2_fixture.h"
#include "box2d/b2_distance_joint.h"

#include "lib/AudioAdventure/include/AudioEngine.h"

#include "rapidjson/document.h"
#include "rapidjson/prettywriter.h"
#include "rapidjson/filereadstream.h"

#include "lib/polypartition-master/src/polypartition.h"

#include "lib/FastNoiseSIMD/FastNoiseSIMD.h"
#include "lib/FastNoise/FastNoise.h"
#include "lib/sparsehash/dense_hash_map.h"

#undef min
#undef max
#undef SendMessage
#undef ERROR

#ifndef SPDLOG_FMT_EXTERNAL
#define SPDLOG_FMT_EXTERNAL
#endif
#include "spdlog/common.h"
#undef SPDLOG_ACTIVE_LEVEL
#define SPDLOG_ACTIVE_LEVEL SPDLOG_LEVEL_TRACE
#define SPDLOG_DEBUG_ON
#define SPDLOG_TRACE_ON
#include "spdlog/spdlog.h"

#define logTrace SPDLOG_TRACE
#define logDebug SPDLOG_DEBUG
#define logInfo SPDLOG_INFO
#define logWarn SPDLOG_WARN
#define logError SPDLOG_ERROR
#define logCritical SPDLOG_CRITICAL
#endif

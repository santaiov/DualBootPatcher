/*
 * Copyright (C) 2014  Xiao-Long Chen <chenxiaolong@cxl.epac.to>
 *
 * This file is part of MultiBootPatcher
 *
 * MultiBootPatcher is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * MultiBootPatcher is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with MultiBootPatcher.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef COMMON_H
#define COMMON_H

#include <string>

// Logging
#ifdef __ANDROID_API__

#include <android/log.h>

#define LOG_TAG "syncdaemon"

#define LOG(prio, tag, fmt...) __android_log_print(prio, tag, fmt)
#define LOGD(...) LOG(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOGE(...) LOG(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
#define LOGI(...) LOG(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGV(...) LOG(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)
#define LOGW(...) LOG(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__)

#else

#include <cstdio>

#define LOGD(...) printf(__VA_ARGS__); printf("\n")
#define LOGE(...) printf(__VA_ARGS__); printf("\n")
#define LOGI(...) printf(__VA_ARGS__); printf("\n")
#define LOGV(...) printf(__VA_ARGS__); printf("\n")
#define LOGW(...) printf(__VA_ARGS__); printf("\n")

#endif

static const std::string BUILD_PROP = "build.prop";

static const std::string APP_DIR = "app";
static const std::string APP_LIB_DIR = "app-lib";
static const std::string DEX_CACHE_DIR = "dalvik-cache";
static const std::string DEX_CACHE_PREFIX = "data@app@";

static const std::string SYSTEM = "/system";
static const std::string CACHE = "/cache";
static const std::string DATA = "/data";
static const std::string RAW_SYSTEM = "/raw-system";
static const std::string RAW_CACHE = "/raw-cache";
static const std::string RAW_DATA = "/raw-data";

static const std::string PRIMARY_ID = "primary";
static const std::string SECONDARY_ID = "dual";
static const std::string MULTI_ID_PREFIX = "multi-slot-";

static const std::string SEP = "/";

// Functions
bool exists_directory(std::string path);
bool exists_file(std::string path);
bool is_same_inode(std::string path1, std::string path2);
int recursively_delete(std::string directory);
std::string dirname2(std::string path);
std::string basename2(std::string path);
std::string search_directory(std::string directory, std::string begin);
bool ends_with(std::string const& src, std::string const& suffix);

#endif //COMMON_H
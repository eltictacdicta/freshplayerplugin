/*
 * Copyright © 2013-2015  Rinat Ibragimov
 *
 * This file is part of FreshPlayerPlugin.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "config.h"
#include <stdlib.h>

static
const char *
plugin_path_list[] = {
    "/opt/google/chrome",           // Chrome
    "/opt/google/chrome-beta",      // Chrome beta
    "/opt/google/chrome-unstable",  // Chrome unstable
    NULL
};

const char **
fpp_config_get_plugin_path_list(void)
{
    return plugin_path_list;
}

const char *
fpp_config_get_default_plugin_version(void)
{
    return "1.0.0.0";
}

const char *
fpp_config_get_plugin_name(void)
{
    return "Widevine CDM from Chrome";
}

const char *
fpp_config_get_default_plugin_descr(void)
{
    return "Decrypt Widevine-enabled content";
}

const char *
fpp_config_get_plugin_mime_type(void)
{
    return "application/x-widevinemediaoptimizer::Widevine CDM;"
           "application/x-ppapi-widevine-cdm::Widevine CDM";
}

char *
fpp_config_get_plugin_path(void)
{
    return NULL;
}

const char *
fpp_config_get_plugin_file_name(void)
{
    return "libwidevinecdmadapter.so";
}

uintptr_t
fpp_config_plugin_has_manifest(void)
{
    return 0;
}

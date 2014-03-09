/*
 * Copyright © 2013-2014  Rinat Ibragimov
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

#include "ppb_memory_dev.h"
#include <stdlib.h>
#include "trace.h"


void *
ppb_memory_dev_mem_alloc(uint32_t num_bytes)
{
    return NULL;
}

void
ppb_memory_dev_mem_free(void *ptr)
{
}


// trace wrappers
static
void *
trace_ppb_memory_dev_mem_alloc(uint32_t num_bytes)
{
    trace_info("[PPB] {zilch} %s\n", __func__+6);
    return ppb_memory_dev_mem_alloc(num_bytes);
}

static
void
trace_ppb_memory_dev_mem_free(void *ptr)
{
    trace_info("[PPB] {zilch} %s\n", __func__+6);
    ppb_memory_dev_mem_free(ptr);
}

const struct PPB_Memory_Dev_0_1 ppb_memory_dev_interface_0_1 = {
    .MemAlloc = trace_ppb_memory_dev_mem_alloc,
    .MemFree =  trace_ppb_memory_dev_mem_free,
};

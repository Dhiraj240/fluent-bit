/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*  Fluent Bit
 *  ==========
 *  Copyright (C) 2015-2017 Treasure Data Inc.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef FLB_HASH_H
#define FLB_HASH_H

struct flb_hash_entry {
    char *key;
    size_t key_len;
    char *val;
    size_t val_len;
};

struct flb_hash {
    size_t size;
    struct flb_hash_entry *table;
};

struct flb_hash *flb_hash_create(size_t size);
void flb_hash_destroy(struct flb_hash *h);
int flb_hash_add(struct flb_hash *h, char *key, char *val);
int flb_hash_del(struct flb_hash *h, char *key);

#endif

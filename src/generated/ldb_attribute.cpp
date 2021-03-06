/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * This file is part of EasyRPG.
 *
 * EasyRPG is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EasyRPG is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with EasyRPG Player. If not, see <http: *www.gnu.org/licenses/>.
 */

// Headers
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct.h"

// Read Attribute.

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT Attribute

EASYRPG_STRUCT_FIELDS_BEGIN()
	EASYRPG_STRUCT_TYPED_FIELD(std::string, name),
	EASYRPG_STRUCT_TYPED_FIELD(int, type),
	EASYRPG_STRUCT_TYPED_FIELD(int, a_rate),
	EASYRPG_STRUCT_TYPED_FIELD(int, b_rate),
	EASYRPG_STRUCT_TYPED_FIELD(int, c_rate),
	EASYRPG_STRUCT_TYPED_FIELD(int, d_rate),
	EASYRPG_STRUCT_TYPED_FIELD(int, e_rate),
EASYRPG_STRUCT_FIELDS_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX

/**
 * Autogenerated by TData Compiler (0.0.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "language/language_reader.h"
#include "platform/tlibc_platform.h"
#include <string.h>



TLIBC_ERROR_CODE tlibc_read_EN_TD_LANGUAGE_STRING(TLIBC_ABSTRACT_READER *self, EN_TD_LANGUAGE_STRING *data)
{
	if(tlibc_read_enum_begin(self, "EN_TD_LANGUAGE_STRING") != E_TLIBC_NOERROR) goto ERROR_RET;

	if(tlibc_read_tint32(self, (tint32*)data) != E_TLIBC_NOERROR)
	{
		char name[TDATA_MAX_LENGTH_OF_IDENTIFIER];
		if(tlibc_read_tstring(self, name, TDATA_MAX_LENGTH_OF_IDENTIFIER) != E_TLIBC_NOERROR) goto ERROR_RET;
		if(strcmp(name, "E_LS_UNKNOW") == 0)
		{
			*data = E_LS_UNKNOW;
			goto done;
		}
		if(strcmp(name, "E_LS_CANNOT_USE_RESERVED_LANGUAGE_KEYWORD") == 0)
		{
			*data = E_LS_CANNOT_USE_RESERVED_LANGUAGE_KEYWORD;
			goto done;
		}
		if(strcmp(name, "E_LS_SYNTAX_ERROR") == 0)
		{
			*data = E_LS_SYNTAX_ERROR;
			goto done;
		}
		if(strcmp(name, "E_LS_CANNOT_OPEN_FILE") == 0)
		{
			*data = E_LS_CANNOT_OPEN_FILE;
			goto done;
		}
		if(strcmp(name, "E_LS_OUT_OF_MEMORY") == 0)
		{
			*data = E_LS_OUT_OF_MEMORY;
			goto done;
		}
		if(strcmp(name, "E_LS_CHARACTER_CONSTANT_FORMAT_ERROR") == 0)
		{
			*data = E_LS_CHARACTER_CONSTANT_FORMAT_ERROR;
			goto done;
		}
		if(strcmp(name, "E_LS_STRING_CONSTANT_FORMAT_ERROR") == 0)
		{
			*data = E_LS_STRING_CONSTANT_FORMAT_ERROR;
			goto done;
		}
		if(strcmp(name, "E_LS_NUMBER_ERROR_RANGE") == 0)
		{
			*data = E_LS_NUMBER_ERROR_RANGE;
			goto done;
		}
		if(strcmp(name, "E_LS_IDENTIFIER_LENGTH_ERROR") == 0)
		{
			*data = E_LS_IDENTIFIER_LENGTH_ERROR;
			goto done;
		}
		if(strcmp(name, "E_LS_PACKAGE_NAME_TOO_LONG") == 0)
		{
			*data = E_LS_PACKAGE_NAME_TOO_LONG;
			goto done;
		}
		if(strcmp(name, "E_LS_CAN_NOT_FIND_IDENTIFIER") == 0)
		{
			*data = E_LS_CAN_NOT_FIND_IDENTIFIER;
			goto done;
		}
		if(strcmp(name, "E_LS_NOT_TYPE") == 0)
		{
			*data = E_LS_NOT_TYPE;
			goto done;
		}
		if(strcmp(name, "E_LS_IDENTIFIER_REDEFINITION") == 0)
		{
			*data = E_LS_IDENTIFIER_REDEFINITION;
			goto done;
		}
		if(strcmp(name, "E_LS_CAN_NOT_DEFINE_STRING_LENGTH_HERE") == 0)
		{
			*data = E_LS_CAN_NOT_DEFINE_STRING_LENGTH_HERE;
			goto done;
		}
		if(strcmp(name, "E_LS_CONSTANT_TYPES_DO_NOT_MATCH") == 0)
		{
			*data = E_LS_CONSTANT_TYPES_DO_NOT_MATCH;
			goto done;
		}
		if(strcmp(name, "E_LS_CONSTANT_OVER_THE_RANGE") == 0)
		{
			*data = E_LS_CONSTANT_OVER_THE_RANGE;
			goto done;
		}
		if(strcmp(name, "E_LS_TOO_MANY_MEMBERS") == 0)
		{
			*data = E_LS_TOO_MANY_MEMBERS;
			goto done;
		}
		if(strcmp(name, "E_LS_UNION_PARAMETERS_ERROR") == 0)
		{
			*data = E_LS_UNION_PARAMETERS_ERROR;
			goto done;
		}
		if(strcmp(name, "E_LS_CONST_TYPE_ERROR") == 0)
		{
			*data = E_LS_CONST_TYPE_ERROR;
			goto done;
		}
		if(strcmp(name, "E_LS_ENUM_HAVE_EQUAL_ELEMENTS") == 0)
		{
			*data = E_LS_ENUM_HAVE_EQUAL_ELEMENTS;
			goto done;
		}
		if(strcmp(name, "E_LS_TOO_MANY_PARAMETERS") == 0)
		{
			*data = E_LS_TOO_MANY_PARAMETERS;
			goto done;
		}
		if(strcmp(name, "E_LS_TOO_MANY_ARGUMENTS") == 0)
		{
			*data = E_LS_TOO_MANY_ARGUMENTS;
			goto done;
		}
		if(strcmp(name, "E_LS_IDENTIFIER_NOT_DEFINED") == 0)
		{
			*data = E_LS_IDENTIFIER_NOT_DEFINED;
			goto done;
		}
		if(strcmp(name, "E_LS_IDENTIFIER_NOT_CONSTANCE") == 0)
		{
			*data = E_LS_IDENTIFIER_NOT_CONSTANCE;
			goto done;
		}
		if(strcmp(name, "E_LS_PARAMETER_TYPE_MISMATCH") == 0)
		{
			*data = E_LS_PARAMETER_TYPE_MISMATCH;
			goto done;
		}
		if(strcmp(name, "E_LS_STRING_LENGTH_MUST_BE_DEFINED") == 0)
		{
			*data = E_LS_STRING_LENGTH_MUST_BE_DEFINED;
			goto done;
		}
		if(strcmp(name, "E_LS_IDENTIFIER_NOT_TYPE") == 0)
		{
			*data = E_LS_IDENTIFIER_NOT_TYPE;
			goto done;
		}
		if(strcmp(name, "E_LS_IDENTIFIER_NOT_ENUMDEF") == 0)
		{
			*data = E_LS_IDENTIFIER_NOT_ENUMDEF;
			goto done;
		}
		if(strcmp(name, "E_LS_OP0_MUST_BE_INTEGER") == 0)
		{
			*data = E_LS_OP0_MUST_BE_INTEGER;
			goto done;
		}
		if(strcmp(name, "E_LS_OP1_MUST_BE_INTEGER_CONSTANCE") == 0)
		{
			*data = E_LS_OP1_MUST_BE_INTEGER_CONSTANCE;
			goto done;
		}
		if(strcmp(name, "E_LS_IDENTIFIER_NOT_INTEGER") == 0)
		{
			*data = E_LS_IDENTIFIER_NOT_INTEGER;
			goto done;
		}
		if(strcmp(name, "E_LS_STRING_LENGTH_NOT_DEFINED") == 0)
		{
			*data = E_LS_STRING_LENGTH_NOT_DEFINED;
			goto done;
		}
		if(strcmp(name, "E_LS_NOT_INTEGER_VALUE") == 0)
		{
			*data = E_LS_NOT_INTEGER_VALUE;
			goto done;
		}
		if(strcmp(name, "E_LS_NOT_INTEGER_TYPE") == 0)
		{
			*data = E_LS_NOT_INTEGER_TYPE;
			goto done;
		}
		if(strcmp(name, "E_LS_IDENTIFIER_NOT_POSITIVE_INTEGER") == 0)
		{
			*data = E_LS_IDENTIFIER_NOT_POSITIVE_INTEGER;
			goto done;
		}
		if(strcmp(name, "E_LS_ARGUMENT_TYPE_MISMATCH") == 0)
		{
			*data = E_LS_ARGUMENT_TYPE_MISMATCH;
			goto done;
		}

		goto ERROR_RET;
	}


done:
	if(tlibc_read_enum_end(self, "EN_TD_LANGUAGE_STRING") != E_TLIBC_NOERROR) goto ERROR_RET;
	return E_TLIBC_NOERROR;
ERROR_RET:
	return E_TLIBC_ERROR;
}

TLIBC_ERROR_CODE tlibc_read_ST_TD_LANGUAGE_STRING(TLIBC_ABSTRACT_READER *self, ST_TD_LANGUAGE_STRING *data)
{
	if(tlibc_read_struct_begin(self, "ST_TD_LANGUAGE_STRING") != E_TLIBC_NOERROR) goto ERROR_RET;

	
	{
		if(tlibc_read_field_begin(self, "language_string_number") != E_TLIBC_NOERROR) goto ERROR_RET;
		if(tlibc_read_EN_TD_LANGUAGE_STRING(self, &data->language_string_number) != E_TLIBC_NOERROR) goto ERROR_RET;
		if(tlibc_read_field_end(self, "language_string_number") != E_TLIBC_NOERROR) goto ERROR_RET;
	}

	
	{
		if(tlibc_read_field_begin(self, "language_string") != E_TLIBC_NOERROR) goto ERROR_RET;
		if(tlibc_read_tstring(self, data->language_string, TD_MAX_LANGUAGE_STRING_LENGTH) != E_TLIBC_NOERROR) goto ERROR_RET;
		if(tlibc_read_field_end(self, "language_string") != E_TLIBC_NOERROR) goto ERROR_RET;
	}

	if(tlibc_read_struct_end(self, "ST_TD_LANGUAGE_STRING") != E_TLIBC_NOERROR) goto ERROR_RET;

	return E_TLIBC_NOERROR;
ERROR_RET:
	return E_TLIBC_ERROR;
}

TLIBC_ERROR_CODE tlibc_read_ST_TD_LANGUAGE_STRING_LIBRARY(TLIBC_ABSTRACT_READER *self, ST_TD_LANGUAGE_STRING_LIBRARY *data)
{
	if(tlibc_read_struct_begin(self, "ST_TD_LANGUAGE_STRING_LIBRARY") != E_TLIBC_NOERROR) goto ERROR_RET;

	
	{
		tuint32 i;
		if(tlibc_read_vector_begin(self) != E_TLIBC_NOERROR) goto ERROR_RET;
		if(tlibc_read_field_begin(self, "language_string_list_num") != E_TLIBC_NOERROR) goto ERROR_RET;
		if(tlibc_read_tuint16(self, &data->language_string_list_num) != E_TLIBC_NOERROR) goto ERROR_RET;
		if(tlibc_read_field_end(self, "language_string_list_num") != E_TLIBC_NOERROR) goto ERROR_RET;
		for(i = 0; i < TD_LANGUAGE_STRING_NUM; ++i)
		{
			if(i == data->language_string_list_num) break;
			if(tlibc_read_field_begin(self, "language_string_list") != E_TLIBC_NOERROR) goto ERROR_RET;
			if(tlibc_read_ST_TD_LANGUAGE_STRING(self, &data->language_string_list[i]) != E_TLIBC_NOERROR) goto ERROR_RET;
			if(tlibc_read_field_end(self, "language_string_list") != E_TLIBC_NOERROR) goto ERROR_RET;
		}
		if(tlibc_read_vector_end(self) != E_TLIBC_NOERROR) goto ERROR_RET;
	}

	if(tlibc_read_struct_end(self, "ST_TD_LANGUAGE_STRING_LIBRARY") != E_TLIBC_NOERROR) goto ERROR_RET;

	return E_TLIBC_NOERROR;
ERROR_RET:
	return E_TLIBC_ERROR;
}


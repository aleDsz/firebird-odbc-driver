/*
 *
 *     The contents of this file are subject to the Initial
 *     Developer's Public License Version 1.0 (the "License");
 *     you may not use this file except in compliance with the
 *     License. You may obtain a copy of the License at
 *     http://www.ibphoenix.com/idpl.html.
 *
 *     Software distributed under the License is distributed on
 *     an "AS IS" basis, WITHOUT WARRANTY OF ANY KIND, either
 *     express or implied.  See the License for the specific
 *     language governing rights and limitations under the License.
 *
 *
 *  The Original Code was created by James A. Starkey for IBPhoenix.
 *
 *  Copyright (c) 1999, 2000, 2001 James A. Starkey
 *  All Rights Reserved.
 *
 *	2002-10-10	InfoItems.h
 *				Contributed by C. G. Alvarez
 *              Extensive changes to the return types
 *
 */

/***
#define CITEM(item,value)	item, #item, infoString, value,
#define SITEM(item,value)	item, #item, infoShort, (char*) value,
#define NITEM(item,value)	item, #item, infoLong, (char*) value,
#define UITEM(item,value)	item, #item, infoUnsupported, (char*) value,
***/

NITEM (SQL_GETDATA_EXTENSIONS, (SQL_GD_ANY_COLUMN | SQL_GD_ANY_ORDER | SQL_GD_BOUND))
NITEM (SQL_ASYNC_MODE, SQL_AM_STATEMENT)
UITEM (SQL_INFO_SCHEMA_VIEWS, 0)
NITEM (SQL_BATCH_ROW_COUNT, 0)
NITEM (SQL_BATCH_SUPPORT, 0)
CITEM (SQL_DATA_SOURCE_NAME, 0)
NITEM (SQL_MAX_ASYNC_CONCURRENT_STATEMENTS, 0)
NITEM (SQL_DRIVER_HDBC, 0)
SITEM (SQL_MAX_CONCURRENT_ACTIVITIES, 0)
UITEM (SQL_DRIVER_HDESC, 0)
SITEM (SQL_MAX_DRIVER_CONNECTIONS, 0)
NITEM (SQL_DRIVER_HENV, 0)
SITEM (SQL_ODBC_INTERFACE_CONFORMANCE, SQL_OIC_LEVEL1)
UITEM (SQL_DRIVER_HLIB, 0)	// DRIVER MANAGER
//UITEM (SQL_ODBC_STANDARD_CLI_CONFORMANCE, 0)
NITEM(SQL_STANDARD_CLI_CONFORMANCE,0)

UITEM (SQL_DRIVER_HSTMT, 0)
CITEM (SQL_ODBC_VER, ODBC_VERSION_NUMBER)
CITEM (SQL_DRIVER_NAME, DRIVER_NAME)
UITEM (SQL_PARAM_ARRAY_ROW_COUNTS, 0)

CITEM (SQL_DRIVER_ODBC_VER, ODBC_DRIVER_VERSION)
//UITEM (SQL_DRIVER_ODBC_VER, 0)

UITEM (SQL_PARAM_ARRAY_SELECTS, 0)

CITEM (SQL_DRIVER_VER, DRIVER_VERSION)
UITEM (SQL_ROW_UPDATES, 0)

NITEM (SQL_DYNAMIC_CURSOR_ATTRIBUTES1, 0)
NITEM (SQL_DYNAMIC_CURSOR_ATTRIBUTES2, 0)

NITEM (SQL_FORWARD_ONLY_CURSOR_ATTRIBUTES1, (SQL_CA1_NEXT |
									   SQL_CA1_POSITIONED_UPDATE |
									   SQL_CA1_POSITIONED_DELETE |
									   SQL_CA1_SELECT_FOR_UPDATE |
									   SQL_CA1_BULK_ADD
									   ))
NITEM (SQL_FORWARD_ONLY_CURSOR_ATTRIBUTES2, 0)

NITEM (SQL_STATIC_CURSOR_ATTRIBUTES1, (SQL_CA1_NEXT |
									   SQL_CA1_POSITIONED_UPDATE |
									   SQL_CA1_POSITIONED_DELETE |
									   SQL_CA1_SELECT_FOR_UPDATE |
									   SQL_CA1_BULK_ADD
									   ))
NITEM (SQL_STATIC_CURSOR_ATTRIBUTES2, 0)

NITEM (SQL_KEYSET_CURSOR_ATTRIBUTES1, 0)
NITEM (SQL_KEYSET_CURSOR_ATTRIBUTES2, 0)

CITEM (SQL_SEARCH_PATTERN_ESCAPE, "")
CITEM (SQL_SERVER_NAME, 0)
SITEM (SQL_FILE_USAGE, 0)

CITEM (SQL_DATABASE_NAME, "")
CITEM (SQL_DBMS_VER, 0)
CITEM (SQL_DBMS_NAME, 0)

CITEM (SQL_ACCESSIBLE_PROCEDURES, "Y")
CITEM (SQL_MULT_RESULT_SETS, "N")
CITEM (SQL_ACCESSIBLE_TABLES, "Y")
CITEM (SQL_MULTIPLE_ACTIVE_TXN, "Y")
NITEM (SQL_BOOKMARK_PERSISTENCE, 0)
CITEM (SQL_NEED_LONG_DATA_LEN, "Y")
CITEM (SQL_CATALOG_TERM, 0)
UITEM (SQL_NULL_COLLATION, 0)
CITEM (SQL_COLLATION_SEQ, "")
CITEM (SQL_PROCEDURE_TERM, 0)
SITEM (SQL_CONCAT_NULL_BEHAVIOR, SQL_CB_NULL)

CITEM (SQL_SCHEMA_TERM, 0)
SITEM (SQL_CURSOR_COMMIT_BEHAVIOR, 0)
NITEM (SQL_SCROLL_OPTIONS, SQL_SO_STATIC )
SITEM (SQL_CURSOR_ROLLBACK_BEHAVIOR, 0)
CITEM (SQL_TABLE_TERM, "TABLE")
SITEM (SQL_CURSOR_SENSITIVITY, SQL_UNSPECIFIED)
SITEM (SQL_TXN_CAPABLE, SQL_TC_ALL)
CITEM (SQL_DATA_SOURCE_READ_ONLY, "N")
NITEM (SQL_TXN_ISOLATION_OPTION, 0)
NITEM (SQL_DEFAULT_TXN_ISOLATION, 0)
CITEM (SQL_USER_NAME, 0)
CITEM (SQL_DESCRIBE_PARAMETER, "N")

NITEM (SQL_AGGREGATE_FUNCTIONS, SQL_AF_ALL)
NITEM (SQL_DROP_TABLE, SQL_DT_DROP_TABLE)
NITEM (SQL_ALTER_DOMAIN, (SQL_AD_ADD_DOMAIN_CONSTRAINT |
						  SQL_AD_ADD_DOMAIN_DEFAULT |
						  SQL_AD_DROP_DOMAIN_CONSTRAINT |
						  SQL_AD_DROP_DOMAIN_DEFAULT |
						  SQL_AD_ADD_DOMAIN_DEFAULT))
NITEM (SQL_DROP_TRANSLATION, 0)
//UITEM (SQL_ALTER_SCHEMA, 0)
NITEM (SQL_DROP_VIEW, SQL_DV_DROP_VIEW)
NITEM (SQL_ALTER_TABLE, (SQL_AT_ADD_COLUMN_COLLATION |
						 SQL_AT_ADD_COLUMN_DEFAULT |
						 SQL_AT_ADD_COLUMN_SINGLE |
						 SQL_AT_ADD_CONSTRAINT |
						 SQL_AT_ADD_TABLE_CONSTRAINT |
						 SQL_AT_SET_COLUMN_DEFAULT))
CITEM (SQL_EXPRESSIONS_IN_ORDERBY, "")
//UITEM (SQL_ANSI_SQL_DATETIME_LITERALS, 0)
NITEM (SQL_DATETIME_LITERALS, 0)
SITEM (SQL_GROUP_BY, 0)
SITEM (SQL_CATALOG_LOCATION, SQL_CL_START)
SITEM (SQL_IDENTIFIER_CASE, 0)
CITEM (SQL_CATALOG_NAME, "Y")
CITEM (SQL_IDENTIFIER_QUOTE_CHAR, "\"")
CITEM (SQL_CATALOG_NAME_SEPARATOR, "")
UITEM (SQL_INDEX_KEYWORDS, 0)
NITEM (SQL_CATALOG_USAGE, 0)
UITEM (SQL_INSERT_STATEMENT, 0)
CITEM (SQL_COLUMN_ALIAS, "Y")
UITEM (SQL_INTEGRITY, 0)
SITEM (SQL_CORRELATION_NAME, 0)
CITEM (SQL_KEYWORDS, "")
NITEM (SQL_CREATE_ASSERTION, 0)
CITEM (SQL_LIKE_ESCAPE_CLAUSE, "")
NITEM (SQL_CREATE_CHARACTER_SET, 0)
UITEM (SQL_NON_NULLABLE_COLUMNS, 0)
NITEM (SQL_CREATE_COLLATION, 0)
NITEM (SQL_SQL_CONFORMANCE, 0)
NITEM (SQL_CREATE_DOMAIN, 0)
NITEM (SQL_OJ_CAPABILITIES, 0)
NITEM (SQL_CREATE_SCHEMA, 0)
CITEM (SQL_ORDER_BY_COLUMNS_IN_SELECT, "")
NITEM (SQL_CREATE_TABLE, (SQL_CT_CREATE_TABLE))
CITEM (SQL_OUTER_JOINS, "N")
NITEM (SQL_CREATE_VIEW, (SQL_CV_CREATE_VIEW | SQL_CV_CHECK_OPTION))
NITEM (SQL_DDL_INDEX, (SQL_DI_CREATE_INDEX | SQL_DI_DROP_INDEX))
NITEM (SQL_CREATE_TRANSLATION, 0)
CITEM (SQL_PROCEDURES, 0)
SITEM (SQL_QUOTED_IDENTIFIER_CASE, 0)
NITEM (SQL_DROP_ASSERTION, 0)
NITEM (SQL_SCHEMA_USAGE, 0)
NITEM (SQL_DROP_CHARACTER_SET, 0)
CITEM (SQL_SPECIAL_CHARACTERS, "")
NITEM (SQL_DROP_COLLATION, 0)
NITEM (SQL_SUBQUERIES, 0)
NITEM (SQL_DROP_DOMAIN, 0)
NITEM (SQL_UNION, 0)
NITEM (SQL_DROP_SCHEMA, 0)

NITEM (SQL_MAX_BINARY_LITERAL_LEN, 0)
NITEM (SQL_MAX_CHAR_LITERAL_LEN, 0)
SITEM (SQL_MAX_IDENTIFIER_LEN, 0)
SITEM (SQL_MAX_CATALOG_NAME_LEN, 0)
NITEM (SQL_MAX_INDEX_SIZE, 0)
SITEM (SQL_MAX_PROCEDURE_NAME_LEN, 0)
SITEM (SQL_MAX_COLUMN_NAME_LEN, 0)
NITEM (SQL_MAX_ROW_SIZE, 0)
CITEM (SQL_MAX_ROW_SIZE_INCLUDES_LONG, 0)
SITEM (SQL_MAX_SCHEMA_NAME_LEN, 0)
NITEM (SQL_MAX_STATEMENT_LEN, 0)
SITEM (SQL_MAX_TABLE_NAME_LEN, 0)
SITEM (SQL_MAX_COLUMNS_IN_GROUP_BY, 0)
SITEM (SQL_MAX_COLUMNS_IN_ORDER_BY, 0)
SITEM (SQL_MAX_COLUMNS_IN_INDEX, 0)
SITEM (SQL_MAX_COLUMNS_IN_SELECT, 0)
NITEM (SQL_MAX_COLUMNS_IN_TABLE, 0)
SITEM (SQL_MAX_TABLES_IN_SELECT, 0)
SITEM (SQL_MAX_CURSOR_NAME_LEN, 0)
SITEM (SQL_MAX_USER_NAME_LEN, 0)

UITEM (SQL_TIMEDATE_ADD_INTERVALS, 0)
UITEM (SQL_TIMEDATE_DIFF_INTERVALS, 0)
NITEM (SQL_NUMERIC_FUNCTIONS, 0)
NITEM (SQL_CONVERT_FUNCTIONS, 0)
NITEM (SQL_STRING_FUNCTIONS, 0)
NITEM (SQL_TIMEDATE_FUNCTIONS, 0)
NITEM (SQL_SYSTEM_FUNCTIONS, 0)

NITEM (SQL_CONVERT_BIGINT, 0)
NITEM (SQL_CONVERT_LONGVARBINARY, 0)
NITEM (SQL_CONVERT_BINARY, 0)
NITEM (SQL_CONVERT_LONGVARCHAR, 0)
NITEM (SQL_CONVERT_BIT, 0)
NITEM (SQL_CONVERT_NUMERIC, 0)
NITEM (SQL_CONVERT_CHAR, 0)
NITEM (SQL_CONVERT_REAL, 0)
NITEM (SQL_CONVERT_DATE, 0)
NITEM (SQL_CONVERT_SMALLINT, 0)
NITEM (SQL_CONVERT_DECIMAL, 0)
NITEM (SQL_CONVERT_TIME, 0)
NITEM (SQL_CONVERT_DOUBLE, 0)
NITEM (SQL_CONVERT_TIMESTAMP, 0)
NITEM (SQL_CONVERT_FLOAT, 0)
NITEM (SQL_CONVERT_TINYINT, 0)
NITEM (SQL_CONVERT_INTEGER, 0)
NITEM (SQL_CONVERT_VARBINARY, 0)
NITEM (SQL_CONVERT_INTERVAL_YEAR_MONTH, 0)
NITEM (SQL_CONVERT_VARCHAR, 0)
NITEM (SQL_CONVERT_INTERVAL_DAY_TIME, 0)
NITEM (SQL_CONVERT_WCHAR, 0)
NITEM (SQL_CONVERT_WLONGVARCHAR, 0)
NITEM (SQL_CONVERT_WVARCHAR,0)


SITEM (SQL_ACTIVE_ENVIRONMENTS, 0)
//UITEM (SQL_ANSI_SQL_DATETIME_LITERALS, 0)
UITEM (SQL_DM_VER, 0)
UITEM (SQL_XOPEN_CLI_YEAR, 0)


UITEM (SQL_FETCH_DIRECTION, 0)
NITEM (SQL_POS_OPERATIONS, (SQL_POS_ADD | SQL_POS_UPDATE | SQL_POS_DELETE))
NITEM (SQL_LOCK_TYPES, SQL_LCK_NO_CHANGE)
NITEM (SQL_POSITIONED_STATEMENTS, 0)
SITEM (SQL_ODBC_API_CONFORMANCE, SQL_OAC_LEVEL1)
NITEM (SQL_SCROLL_CONCURRENCY, SQL_SCCO_LOCK)
SITEM (SQL_ODBC_SQL_CONFORMANCE, 0)
NITEM (SQL_STATIC_SENSITIVITY, 0)

NITEM (SQL_SQL92_PREDICATES, 0)
NITEM (SQL_SQL92_REVOKE, 0)
NITEM (SQL_SQL92_GRANT, 0)

NITEM (SQL_SQL92_DATETIME_FUNCTIONS, 0)
NITEM (SQL_SQL92_FOREIGN_KEY_DELETE_RULE, 0)
NITEM (SQL_SQL92_FOREIGN_KEY_UPDATE_RULE, 0)
NITEM (SQL_SQL92_NUMERIC_VALUE_FUNCTIONS, 0)
NITEM (SQL_SQL92_RELATIONAL_JOIN_OPERATORS, 0)
NITEM (SQL_SQL92_ROW_VALUE_CONSTRUCTOR, 0)
NITEM (SQL_SQL92_STRING_FUNCTIONS, 0)
NITEM (SQL_SQL92_VALUE_EXPRESSIONS, 0)


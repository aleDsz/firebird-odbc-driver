#ifndef __TYPE_H
#define __TYPE_H

enum Type {
	Null,
	String,			// generic, null terminated
	Char,			// fixed length string, also null terminated
	Varchar,		// variable length, counted string

	Short,
	Long,
	Quad,

	Float,
	Double,

	Date,
	Timestamp,
	TimeType,

	Asciiblob,		// on disk blob
	Binaryblob,		// on disk blob
	BlobPtr,		// pointer to Blob object
	SqlTimestamp,	// 64 bit version
	ClobPtr,
	};

// Type Encoded Record Types

#define TER_ENCODING_INTEL		1	// Intel encoding
#define TER_FORMAT_VERSION_1	1
#define TER_FORMAT				TER_FORMAT_VERSION_1

enum TerType {
	terNull,
	terString,			// 32 bit count followed by string followed by null byte
	terUnicode,			// 32 bit count followed by string followed by null character

	terShort,
	terLong,
	terQuad,

	terFloat,
	terDouble,

	terDate,
	terTimestamp,
	terTime,

	terBinaryBlob,		// 32 bit length followed by blob
	};


struct FieldType {
	Type type;
	int length;
	int scale;
	};


#endif
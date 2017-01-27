/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

typedef struct {
	int field1;
	int field2;
	/*function pointer*/void* field3;
	int field4;
	int field5;
	int field6;
	int field7;
	int field8;
	/*function pointer*/void* field9;
	short field10;
	short field11;
	int field12;
	BOOL field13;
} SCD_Struct_Bi0;

typedef struct {
	int count;
	int capa;
	/*function pointer*/void* items;
	int unusedImageCount;
	int componentCount;
	int componentCapa;
	int bestComponentIndex;
	int bestMapiComponentIndex;
	/*function pointer*/void* components;
	short mapiNodeAddedIndex;
	short mapiNodeRemovedIndex;
	int updateCount;
	BOOL structureIsInconsistent;
} SCD_Struct_Bi1;

typedef struct {
	NSData* imageData;
	unsigned width;
	unsigned height;
} SCD_Struct_Bi2;

typedef struct {
	SCD_Struct_Bi2 nodes[300];
} SCD_Struct_Bi3;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	id field1;
	unsigned field2;
	unsigned field3;
} SCD_Struct_Bi5;

typedef struct {
	short field1;
	short field2;
	short field3;
} SCD_Struct_Bi6;

typedef struct {
	SCD_Struct_Bi6 field1;
	short field2;
	short field3;
} SCD_Struct_Bi7;

typedef struct {
	short field1;
	short field2;
	short field3;
	short field4;
	short field5;
	short field6;
	short field7;
	unsigned char field8[16];
	unsigned char field9[16];
	short field10;
	SCD_Struct_Bi7 field11[300];
	short field12;
	short field13;
	short field14;
	short field15;
	short field16;
	short field17;
} SCD_Struct_Bi8;

typedef struct {
	short field1;
	short field2;
	short field3;
	SCD_Struct_Bi6 field4;
	SCD_Struct_Bi8 field5;
	int field6;
	int field7;
} SCD_Struct_Bi9;

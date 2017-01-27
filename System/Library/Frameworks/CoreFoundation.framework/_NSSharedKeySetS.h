/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _NSSharedKeySetS : NSObject <NSCopying> {

	char* _g;
	unsigned char _select;
	void* _rankTable;
	double _c;
	unsigned _M;
	unsigned _factor;
	unsigned _numKey;
	unsigned* _seeds;
	unsigned short* _keys1[1];
	unsigned short* _keys2[2];
	unsigned short* _keys3[3];
	unsigned char* _ckeys[3];
	_NSSharedKeySetS* _subSharedKeySet;
	unsigned _keyLen;
	unsigned _type;

}

@property (g) char* g;                                              //@synthesize g=_g - In the implementation block
@property (assign) unsigned char select;                            //@synthesize select=_select - In the implementation block
@property (assign) void* rankTable;                                 //@synthesize rankTable=_rankTable - In the implementation block
@property (c) double c;                                             //@synthesize c=_c - In the implementation block
@property (M) unsigned M;                                           //@synthesize M=_M - In the implementation block
@property (assign) unsigned factor;                                 //@synthesize factor=_factor - In the implementation block
@property (assign) unsigned numKey;                                 //@synthesize numKey=_numKey - In the implementation block
@property (assign) unsigned* seeds;                                 //@synthesize seeds=_seeds - In the implementation block
@property (assign) unsigned short* keys1[1];                        //@synthesize keys1=_keys1 - In the implementation block
@property (assign) unsigned short* keys2[2];                        //@synthesize keys2=_keys2 - In the implementation block
@property (assign) unsigned short* keys3[3];                        //@synthesize keys3=_keys3 - In the implementation block
@property (assign) unsigned char* ckeys[3];                         //@synthesize ckeys=_ckeys - In the implementation block
@property (assign) unsigned keyLen;                                 //@synthesize keyLen=_keyLen - In the implementation block
@property (assign) unsigned type;                                   //@synthesize type=_type - In the implementation block
@property (retain) _NSSharedKeySetS * subSharedKeySet;              //@synthesize subSharedKeySet=_subSharedKeySet - In the implementation block
-(id)initWithKeys:(void*)arg1 keyLenghtInBytes:(unsigned)arg2 count:(unsigned)arg3 type:(unsigned)arg4 ;
-(char*)bytesAtIndex:(unsigned long long)arg1 ;
-(unsigned)keyLen;
-(unsigned)keySetCount;
-(id)newKeySetWithKeys:(id)arg1 encoding:(unsigned)arg2 ;
-(void)setG:(char*)arg1 ;
-(void)setSelect:(unsigned char)arg1 ;
-(void*)rankTable;
-(void)setRankTable:(void*)arg1 ;
-(unsigned)M;
-(void)setM:(unsigned)arg1 ;
-(unsigned)numKey;
-(void)setNumKey:(unsigned)arg1 ;
-(unsigned*)seeds;
-(void)setSeeds:(unsigned*)arg1 ;
-(unsigned short*)keys1;
-(void)setKeys1:(unsigned short*)arg1 ;
-(unsigned short*)keys2;
-(void)setKeys2:(unsigned short*)arg1 ;
-(unsigned short*)keys3;
-(void)setKeys3:(unsigned short*)arg1 ;
-(unsigned char*)ckeys;
-(void)setCkeys:(unsigned char*)arg1 ;
-(_NSSharedKeySetS *)subSharedKeySet;
-(void)setSubSharedKeySet:(_NSSharedKeySetS *)arg1 ;
-(void)setKeyLen:(unsigned)arg1 ;
-(unsigned long long)indexForKey:(unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)indexForBytes:(char*)arg1 length:(unsigned long long)arg2 ;
-(unsigned char)select;
-(id)init;
-(void)dealloc;
-(unsigned)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(id)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(unsigned short*)keyAtIndex:(unsigned long long)arg1 ;
-(double)c;
-(void)setC:(double)arg1 ;
-(unsigned)maximumIndex;
-(char*)g;
-(void)setFactor:(unsigned)arg1 ;
-(unsigned)factor;
@end


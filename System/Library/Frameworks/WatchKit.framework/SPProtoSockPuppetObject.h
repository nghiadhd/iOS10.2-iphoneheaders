/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SPProtoCacheMessage, NSString, NSData;

@interface SPProtoSockPuppetObject : PBCodable <NSCopying> {

	double _ndouble;
	long long _nint64;
	unsigned long long _nuint64;
	SPProtoCacheMessage* _cacheMessage;
	NSString* _key;
	float _nfloat;
	int _nint32;
	unsigned _nuint32;
	NSData* _object;
	int _subtype;
	NSString* _text;
	int _type;
	BOOL _nbool;
	SCD_Struct_SP1 _has;

}

@property (assign,nonatomic) int type;                                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasSubtype; 
@property (assign,nonatomic) int subtype;                                     //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,readonly) BOOL hasCacheMessage; 
@property (nonatomic,retain) SPProtoCacheMessage * cacheMessage;              //@synthesize cacheMessage=_cacheMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                  //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasText; 
@property (nonatomic,retain) NSString * text;                                 //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL hasNdouble; 
@property (assign,nonatomic) double ndouble;                                  //@synthesize ndouble=_ndouble - In the implementation block
@property (assign,nonatomic) BOOL hasNfloat; 
@property (assign,nonatomic) float nfloat;                                    //@synthesize nfloat=_nfloat - In the implementation block
@property (assign,nonatomic) BOOL hasNint64; 
@property (assign,nonatomic) long long nint64;                                //@synthesize nint64=_nint64 - In the implementation block
@property (assign,nonatomic) BOOL hasNint32; 
@property (assign,nonatomic) int nint32;                                      //@synthesize nint32=_nint32 - In the implementation block
@property (assign,nonatomic) BOOL hasNuint64; 
@property (assign,nonatomic) unsigned long long nuint64;                      //@synthesize nuint64=_nuint64 - In the implementation block
@property (assign,nonatomic) BOOL hasNuint32; 
@property (assign,nonatomic) unsigned nuint32;                                //@synthesize nuint32=_nuint32 - In the implementation block
@property (assign,nonatomic) BOOL hasNbool; 
@property (assign,nonatomic) BOOL nbool;                                      //@synthesize nbool=_nbool - In the implementation block
@property (nonatomic,readonly) BOOL hasObject; 
@property (nonatomic,retain) NSData * object;                                 //@synthesize object=_object - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)key;
-(void)setType:(int)arg1 ;
-(int)type;
-(int)subtype;
-(NSData *)object;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setSubtype:(int)arg1 ;
-(BOOL)hasText;
-(void)setObject:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)hasKey;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setCacheMessage:(SPProtoCacheMessage *)arg1 ;
-(void)setHasSubtype:(BOOL)arg1 ;
-(BOOL)hasCacheMessage;
-(void)setNdouble:(double)arg1 ;
-(void)setHasNdouble:(BOOL)arg1 ;
-(BOOL)hasNdouble;
-(void)setNfloat:(float)arg1 ;
-(void)setHasNfloat:(BOOL)arg1 ;
-(BOOL)hasNfloat;
-(void)setNint64:(long long)arg1 ;
-(void)setHasNint64:(BOOL)arg1 ;
-(BOOL)hasNint64;
-(void)setNint32:(int)arg1 ;
-(void)setHasNint32:(BOOL)arg1 ;
-(BOOL)hasNint32;
-(void)setNuint64:(unsigned long long)arg1 ;
-(void)setHasNuint64:(BOOL)arg1 ;
-(BOOL)hasNuint64;
-(void)setNuint32:(unsigned)arg1 ;
-(void)setHasNuint32:(BOOL)arg1 ;
-(BOOL)hasNuint32;
-(void)setNbool:(BOOL)arg1 ;
-(void)setHasNbool:(BOOL)arg1 ;
-(BOOL)hasNbool;
-(SPProtoCacheMessage *)cacheMessage;
-(double)ndouble;
-(float)nfloat;
-(long long)nint64;
-(int)nint32;
-(unsigned long long)nuint64;
-(unsigned)nuint32;
-(BOOL)nbool;
-(BOOL)hasObject;
-(BOOL)hasSubtype;
@end


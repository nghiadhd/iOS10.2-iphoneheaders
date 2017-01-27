/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface AWDNFCTSMStartEvent : PBCodable <NSCopying> {

	unsigned long long _timeDeltaFromReference;
	unsigned long long _timestamp;
	unsigned _idxTableAvail;
	unsigned _persistentAvail;
	unsigned _transientDeselectAvail;
	unsigned _transientResetAvail;
	NSString* _url;
	NSData* _uuidReference;
	SCD_Struct_AW6 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTransientDeselectAvail; 
@property (assign,nonatomic) unsigned transientDeselectAvail;                        //@synthesize transientDeselectAvail=_transientDeselectAvail - In the implementation block
@property (assign,nonatomic) BOOL hasTransientResetAvail; 
@property (assign,nonatomic) unsigned transientResetAvail;                           //@synthesize transientResetAvail=_transientResetAvail - In the implementation block
@property (assign,nonatomic) BOOL hasPersistentAvail; 
@property (assign,nonatomic) unsigned persistentAvail;                               //@synthesize persistentAvail=_persistentAvail - In the implementation block
@property (assign,nonatomic) BOOL hasIdxTableAvail; 
@property (assign,nonatomic) unsigned idxTableAvail;                                 //@synthesize idxTableAvail=_idxTableAvail - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                                 //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) BOOL hasTimeDeltaFromReference; 
@property (assign,nonatomic) unsigned long long timeDeltaFromReference;              //@synthesize timeDeltaFromReference=_timeDeltaFromReference - In the implementation block
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url;                                         //@synthesize url=_url - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(NSString *)url;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasUrl;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(void)setTimeDeltaFromReference:(unsigned long long)arg1 ;
-(void)setHasTimeDeltaFromReference:(BOOL)arg1 ;
-(BOOL)hasTimeDeltaFromReference;
-(NSData *)uuidReference;
-(unsigned long long)timeDeltaFromReference;
-(void)setTransientDeselectAvail:(unsigned)arg1 ;
-(void)setHasTransientDeselectAvail:(BOOL)arg1 ;
-(BOOL)hasTransientDeselectAvail;
-(void)setTransientResetAvail:(unsigned)arg1 ;
-(void)setHasTransientResetAvail:(BOOL)arg1 ;
-(BOOL)hasTransientResetAvail;
-(void)setPersistentAvail:(unsigned)arg1 ;
-(void)setHasPersistentAvail:(BOOL)arg1 ;
-(BOOL)hasPersistentAvail;
-(void)setIdxTableAvail:(unsigned)arg1 ;
-(void)setHasIdxTableAvail:(BOOL)arg1 ;
-(BOOL)hasIdxTableAvail;
-(unsigned)transientDeselectAvail;
-(unsigned)transientResetAvail;
-(unsigned)persistentAvail;
-(unsigned)idxTableAvail;
@end


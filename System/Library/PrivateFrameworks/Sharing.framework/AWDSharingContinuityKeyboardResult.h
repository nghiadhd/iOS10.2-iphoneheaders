/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSharingContinuityKeyboardResult : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _bannerVisibleMs;
	unsigned _beginEditingCount;
	unsigned _closeAction;
	unsigned _endEditingCount;
	unsigned _mainUIVisibleMs;
	unsigned _openAction;
	NSString* _sessionUUID;
	BOOL _directInput;
	BOOL _externalInput;
	BOOL _secureInput;
	SCD_Struct_AW14 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                    //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasOpenAction; 
@property (assign,nonatomic) unsigned openAction;                       //@synthesize openAction=_openAction - In the implementation block
@property (assign,nonatomic) BOOL hasCloseAction; 
@property (assign,nonatomic) unsigned closeAction;                      //@synthesize closeAction=_closeAction - In the implementation block
@property (assign,nonatomic) BOOL hasBeginEditingCount; 
@property (assign,nonatomic) unsigned beginEditingCount;                //@synthesize beginEditingCount=_beginEditingCount - In the implementation block
@property (assign,nonatomic) BOOL hasEndEditingCount; 
@property (assign,nonatomic) unsigned endEditingCount;                  //@synthesize endEditingCount=_endEditingCount - In the implementation block
@property (assign,nonatomic) BOOL hasSecureInput; 
@property (assign,nonatomic) BOOL secureInput;                          //@synthesize secureInput=_secureInput - In the implementation block
@property (assign,nonatomic) BOOL hasDirectInput; 
@property (assign,nonatomic) BOOL directInput;                          //@synthesize directInput=_directInput - In the implementation block
@property (assign,nonatomic) BOOL hasExternalInput; 
@property (assign,nonatomic) BOOL externalInput;                        //@synthesize externalInput=_externalInput - In the implementation block
@property (assign,nonatomic) BOOL hasBannerVisibleMs; 
@property (assign,nonatomic) unsigned bannerVisibleMs;                  //@synthesize bannerVisibleMs=_bannerVisibleMs - In the implementation block
@property (assign,nonatomic) BOOL hasMainUIVisibleMs; 
@property (assign,nonatomic) unsigned mainUIVisibleMs;                  //@synthesize mainUIVisibleMs=_mainUIVisibleMs - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setOpenAction:(unsigned)arg1 ;
-(void)setHasOpenAction:(BOOL)arg1 ;
-(BOOL)hasOpenAction;
-(void)setHasCloseAction:(BOOL)arg1 ;
-(BOOL)hasCloseAction;
-(void)setBeginEditingCount:(unsigned)arg1 ;
-(void)setHasBeginEditingCount:(BOOL)arg1 ;
-(BOOL)hasBeginEditingCount;
-(void)setEndEditingCount:(unsigned)arg1 ;
-(void)setHasEndEditingCount:(BOOL)arg1 ;
-(BOOL)hasEndEditingCount;
-(void)setSecureInput:(BOOL)arg1 ;
-(void)setHasSecureInput:(BOOL)arg1 ;
-(BOOL)hasSecureInput;
-(void)setDirectInput:(BOOL)arg1 ;
-(void)setHasDirectInput:(BOOL)arg1 ;
-(BOOL)hasDirectInput;
-(void)setExternalInput:(BOOL)arg1 ;
-(void)setHasExternalInput:(BOOL)arg1 ;
-(BOOL)hasExternalInput;
-(void)setBannerVisibleMs:(unsigned)arg1 ;
-(void)setHasBannerVisibleMs:(BOOL)arg1 ;
-(BOOL)hasBannerVisibleMs;
-(void)setMainUIVisibleMs:(unsigned)arg1 ;
-(void)setHasMainUIVisibleMs:(BOOL)arg1 ;
-(BOOL)hasMainUIVisibleMs;
-(unsigned)openAction;
-(unsigned)beginEditingCount;
-(unsigned)endEditingCount;
-(BOOL)secureInput;
-(BOOL)directInput;
-(BOOL)externalInput;
-(unsigned)bannerVisibleMs;
-(unsigned)mainUIVisibleMs;
-(NSString *)sessionUUID;
-(void)setSessionUUID:(NSString *)arg1 ;
-(BOOL)hasSessionUUID;
-(unsigned)closeAction;
-(void)setCloseAction:(unsigned)arg1 ;
@end


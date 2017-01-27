/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface DaemonPBFuseItemPreference : PBCodable <NSCopying> {

	long long _adamId;
	long long _createdOffsetMillis;
	NSString* _externalId;
	int _preference;
	int _preferenceType;
	SCD_Struct_Da9 _has;

}

@property (assign,nonatomic) int preference;                             //@synthesize preference=_preference - In the implementation block
@property (assign,nonatomic) BOOL hasAdamId; 
@property (assign,nonatomic) long long adamId;                           //@synthesize adamId=_adamId - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalId; 
@property (nonatomic,retain) NSString * externalId;                      //@synthesize externalId=_externalId - In the implementation block
@property (assign,nonatomic) BOOL hasCreatedOffsetMillis; 
@property (assign,nonatomic) long long createdOffsetMillis;              //@synthesize createdOffsetMillis=_createdOffsetMillis - In the implementation block
@property (assign,nonatomic) BOOL hasPreferenceType; 
@property (assign,nonatomic) int preferenceType;                         //@synthesize preferenceType=_preferenceType - In the implementation block
-(void)setPreference:(int)arg1 ;
-(void)setPreferenceType:(int)arg1 ;
-(void)setCreatedOffsetMillis:(long long)arg1 ;
-(int)preferenceType;
-(BOOL)hasExternalId;
-(int)preference;
-(void)setHasAdamId:(BOOL)arg1 ;
-(BOOL)hasAdamId;
-(void)setHasCreatedOffsetMillis:(BOOL)arg1 ;
-(BOOL)hasCreatedOffsetMillis;
-(void)setHasPreferenceType:(BOOL)arg1 ;
-(BOOL)hasPreferenceType;
-(long long)createdOffsetMillis;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setAdamId:(long long)arg1 ;
-(NSString *)externalId;
-(void)setExternalId:(NSString *)arg1 ;
-(long long)adamId;
@end


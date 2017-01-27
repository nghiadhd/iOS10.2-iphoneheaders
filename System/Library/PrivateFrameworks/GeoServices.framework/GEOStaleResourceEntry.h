/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOStaleResourceEntry : PBCodable <NSCopying> {

	int _ageInSeconds;
	NSString* _canonicalName;
	NSString* _desiredName;
	NSString* _storedName;
	SCD_Struct_GE15 _has;

}

@property (nonatomic,readonly) BOOL hasCanonicalName; 
@property (nonatomic,retain) NSString * canonicalName;              //@synthesize canonicalName=_canonicalName - In the implementation block
@property (nonatomic,readonly) BOOL hasStoredName; 
@property (nonatomic,retain) NSString * storedName;                 //@synthesize storedName=_storedName - In the implementation block
@property (nonatomic,readonly) BOOL hasDesiredName; 
@property (nonatomic,retain) NSString * desiredName;                //@synthesize desiredName=_desiredName - In the implementation block
@property (assign,nonatomic) BOOL hasAgeInSeconds; 
@property (assign,nonatomic) int ageInSeconds;                      //@synthesize ageInSeconds=_ageInSeconds - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)canonicalName;
-(void)setCanonicalName:(NSString *)arg1 ;
-(BOOL)hasCanonicalName;
-(BOOL)hasStoredName;
-(BOOL)hasDesiredName;
-(void)setAgeInSeconds:(int)arg1 ;
-(void)setHasAgeInSeconds:(BOOL)arg1 ;
-(BOOL)hasAgeInSeconds;
-(NSString *)storedName;
-(void)setStoredName:(NSString *)arg1 ;
-(NSString *)desiredName;
-(void)setDesiredName:(NSString *)arg1 ;
-(int)ageInSeconds;
@end


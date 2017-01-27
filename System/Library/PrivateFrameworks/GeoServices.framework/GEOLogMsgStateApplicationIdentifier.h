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

@interface GEOLogMsgStateApplicationIdentifier : PBCodable <NSCopying> {

	NSString* _appIdentifier;
	NSString* _appMajorVersion;
	NSString* _appMinorVersion;

}

@property (nonatomic,readonly) BOOL hasAppIdentifier; 
@property (nonatomic,retain) NSString * appIdentifier;                //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAppMajorVersion; 
@property (nonatomic,retain) NSString * appMajorVersion;              //@synthesize appMajorVersion=_appMajorVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasAppMinorVersion; 
@property (nonatomic,retain) NSString * appMinorVersion;              //@synthesize appMinorVersion=_appMinorVersion - In the implementation block
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
-(BOOL)hasAppMajorVersion;
-(BOOL)hasAppMinorVersion;
-(NSString *)appMajorVersion;
-(void)setAppMajorVersion:(NSString *)arg1 ;
-(NSString *)appMinorVersion;
-(void)setAppMinorVersion:(NSString *)arg1 ;
-(BOOL)hasAppIdentifier;
-(NSString *)appIdentifier;
-(void)setAppIdentifier:(NSString *)arg1 ;
@end


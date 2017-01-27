/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NPKProtoRemoteAdminPerformRequest : PBRequest <NSCopying> {

	NSString* _command;
	NSData* _infoDictionary;
	NSString* _seid;
	NSData* _url;

}

@property (nonatomic,retain) NSData * url;                          //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * seid;                       //@synthesize seid=_seid - In the implementation block
@property (nonatomic,retain) NSString * command;                    //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) BOOL hasInfoDictionary; 
@property (nonatomic,retain) NSData * infoDictionary;               //@synthesize infoDictionary=_infoDictionary - In the implementation block
-(void)setInfoDictionary:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSData *)infoDictionary;
-(NSData *)url;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUrl:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setCommand:(NSString *)arg1 ;
-(NSString *)command;
-(NSString *)seid;
-(void)setSeid:(NSString *)arg1 ;
-(BOOL)hasInfoDictionary;
@end


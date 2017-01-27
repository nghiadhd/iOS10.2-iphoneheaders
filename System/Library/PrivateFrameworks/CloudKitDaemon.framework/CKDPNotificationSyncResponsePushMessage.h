/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface CKDPNotificationSyncResponsePushMessage : PBCodable <NSCopying> {

	int _badgeCount;
	NSString* _category;
	NSString* _dialog;
	NSData* _payload;
	NSString* _sound;
	int _source;
	NSString* _uuid;
	BOOL _isRead;
	SCD_Struct_CK10 _has;

}

@property (assign,nonatomic) BOOL hasIsRead; 
@property (assign,nonatomic) BOOL isRead;                      //@synthesize isRead=_isRead - In the implementation block
@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSString * uuid;                  //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) BOOL hasDialog; 
@property (nonatomic,retain) NSString * dialog;                //@synthesize dialog=_dialog - In the implementation block
@property (nonatomic,readonly) BOOL hasSound; 
@property (nonatomic,retain) NSString * sound;                 //@synthesize sound=_sound - In the implementation block
@property (assign,nonatomic) BOOL hasBadgeCount; 
@property (assign,nonatomic) int badgeCount;                   //@synthesize badgeCount=_badgeCount - In the implementation block
@property (nonatomic,readonly) BOOL hasPayload; 
@property (nonatomic,retain) NSData * payload;                 //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;              //@synthesize category=_category - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(NSData *)payload;
-(void)setSource:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSound:(NSString *)arg1 ;
-(NSString *)sound;
-(int)source;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(void)setPayload:(NSData *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasCategory;
-(BOOL)hasSource;
-(void)setHasSource:(BOOL)arg1 ;
-(id)sourceAsString:(int)arg1 ;
-(int)StringAsSource:(id)arg1 ;
-(NSString *)dialog;
-(BOOL)isRead;
-(void)setBadgeCount:(int)arg1 ;
-(void)setHasBadgeCount:(BOOL)arg1 ;
-(BOOL)hasBadgeCount;
-(BOOL)hasDialog;
-(BOOL)hasIsRead;
-(void)setDialog:(NSString *)arg1 ;
-(void)setIsRead:(BOOL)arg1 ;
-(void)setHasIsRead:(BOOL)arg1 ;
-(BOOL)hasSound;
-(BOOL)hasUuid;
-(int)badgeCount;
-(BOOL)hasPayload;
@end


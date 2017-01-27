/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FTServices/FTServices-Structs.h>
#import <FTServices/IDSFaceTimeMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSNumber;

@interface IDSRejectMessage : IDSFaceTimeMessage <NSCopying> {

	NSData* _selfPushToken;
	NSData* _peerPushToken;
	NSString* _peerID;
	NSNumber* _reason;

}

@property (copy) NSData * peerPushToken;              //@synthesize peerPushToken=_peerPushToken - In the implementation block
@property (copy) NSData * selfPushToken;              //@synthesize selfPushToken=_selfPushToken - In the implementation block
@property (copy) NSString * peerID;                   //@synthesize peerID=_peerID - In the implementation block
@property (copy) NSNumber * reason;                   //@synthesize reason=_reason - In the implementation block
-(id)messageBody;
-(NSString *)peerID;
-(void)setPeerID:(NSString *)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)reason;
-(NSData *)selfPushToken;
-(void)setSelfPushToken:(NSData *)arg1 ;
-(id)requiredKeys;
-(void)setReason:(NSNumber *)arg1 ;
-(NSData *)peerPushToken;
-(void)setPeerPushToken:(NSData *)arg1 ;
-(id)bagKey;
@end


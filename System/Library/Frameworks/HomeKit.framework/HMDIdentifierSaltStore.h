/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSData, NSObject;

@interface HMDIdentifierSaltStore : NSObject {

	NSData* _identifierSalt;
	NSData* _assistantIdentifierSalt;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) NSData * identifierSalt;                                   //@synthesize identifierSalt=_identifierSalt - In the implementation block
@property (nonatomic,retain) NSData * assistantIdentifierSalt;                          //@synthesize assistantIdentifierSalt=_assistantIdentifierSalt - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(NSData *)identifierSalt;
-(void)setIdentifierSalt:(NSData *)arg1 ;
-(NSData *)assistantIdentifierSalt;
-(void)setAssistantIdentifierSalt:(NSData *)arg1 ;
@end


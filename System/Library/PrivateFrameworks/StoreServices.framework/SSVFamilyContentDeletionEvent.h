/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SSVFamilyContentDeletionEvent : NSObject {

	NSArray* _deletedAccounts;

}

@property (nonatomic,readonly) NSArray * deletedAccounts;              //@synthesize deletedAccounts=_deletedAccounts - In the implementation block
+(id)notificationPayloadWithAccountPairs:(id)arg1 ;
+(void)postDistributedNotificationWithAccountPairs:(id)arg1 ;
-(id)initWithNotificationUserInfo:(id)arg1 ;
-(id)initWithXPCEventStreamEvent:(id)arg1 ;
-(NSArray *)deletedAccounts;
@end


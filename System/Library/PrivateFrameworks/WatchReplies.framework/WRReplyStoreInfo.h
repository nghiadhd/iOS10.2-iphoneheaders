/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WatchReplies.framework/WatchReplies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WRReplyStoreInfo : NSObject {

	BOOL _supportsSmartReplies;
	unsigned long long _defaultCount;
	NSString* _defaultsDomain;
	NSString* _defaultsKey;
	NSString* _defaultsChangedNotificationName;

}

@property (nonatomic,readonly) unsigned long long defaultCount;                         //@synthesize defaultCount=_defaultCount - In the implementation block
@property (nonatomic,readonly) NSString * defaultsDomain;                               //@synthesize defaultsDomain=_defaultsDomain - In the implementation block
@property (nonatomic,readonly) NSString * defaultsKey;                                  //@synthesize defaultsKey=_defaultsKey - In the implementation block
@property (nonatomic,readonly) NSString * defaultsChangedNotificationName;              //@synthesize defaultsChangedNotificationName=_defaultsChangedNotificationName - In the implementation block
@property (nonatomic,readonly) BOOL supportsSmartReplies;                               //@synthesize supportsSmartReplies=_supportsSmartReplies - In the implementation block
+(id)infoForCategory:(unsigned long long)arg1 ;
-(NSString *)defaultsChangedNotificationName;
-(BOOL)supportsSmartReplies;
-(NSString *)defaultsKey;
-(unsigned long long)defaultCount;
-(NSString *)defaultsDomain;
@end


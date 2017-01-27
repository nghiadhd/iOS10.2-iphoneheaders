/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSURL;

@interface FCSubscription : NSObject {

	BOOL _notificationsEnabled;
	BOOL _canRetry;
	NSString* _subscriptionID;
	unsigned long long _subscriptionType;
	NSDate* _dateAdded;
	NSString* _tagID;
	NSURL* _url;
	NSString* _title;
	NSURL* _pollingURL;
	NSString* _errorMessage;

}

@property (nonatomic,copy,readonly) NSString * subscriptionID;                   //@synthesize subscriptionID=_subscriptionID - In the implementation block
@property (nonatomic,readonly) unsigned long long subscriptionType;              //@synthesize subscriptionType=_subscriptionType - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateAdded;                          //@synthesize dateAdded=_dateAdded - In the implementation block
@property (nonatomic,readonly) BOOL notificationsEnabled;                        //@synthesize notificationsEnabled=_notificationsEnabled - In the implementation block
@property (nonatomic,retain) NSString * tagID;                                   //@synthesize tagID=_tagID - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                      //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSURL * pollingURL;                               //@synthesize pollingURL=_pollingURL - In the implementation block
@property (nonatomic,readonly) NSString * errorMessage;                          //@synthesize errorMessage=_errorMessage - In the implementation block
@property (nonatomic,readonly) BOOL canRetry;                                    //@synthesize canRetry=_canRetry - In the implementation block
+(id)subscriptionWithSubscriptionID:(id)arg1 tagID:(id)arg2 dateAdded:(id)arg3 notificationsEnabled:(BOOL)arg4 ;
+(id)mutedSubscriptionWithSubscriptionID:(id)arg1 tagID:(id)arg2 dateAdded:(id)arg3 ;
+(id)pendingSubscriptionWithSubscriptionID:(id)arg1 url:(id)arg2 title:(id)arg3 pollingURL:(id)arg4 dateAdded:(id)arg5 ;
+(id)subscriptionWithSubscriptionID:(id)arg1 dictionaryRepresentation:(id)arg2 ;
-(NSURL *)url;
-(NSString *)title;
-(id)dictionaryRepresentation;
-(NSDate *)dateAdded;
-(NSString *)errorMessage;
-(NSString *)subscriptionID;
-(NSString *)tagID;
-(void)setTagID:(NSString *)arg1 ;
-(id)initWithSubscriptionID:(id)arg1 tagID:(id)arg2 dateAdded:(id)arg3 subscriptionType:(unsigned long long)arg4 notificationsEnabled:(BOOL)arg5 ;
-(id)initWithSubscriptionID:(id)arg1 url:(id)arg2 title:(id)arg3 pollingURL:(id)arg4 dateAdded:(id)arg5 ;
-(unsigned long long)subscriptionType;
-(BOOL)isTypePending;
-(BOOL)isTypeTag;
-(BOOL)isTypeMutedTag;
-(BOOL)notificationsEnabled;
-(NSURL *)pollingURL;
-(BOOL)canRetry;
@end


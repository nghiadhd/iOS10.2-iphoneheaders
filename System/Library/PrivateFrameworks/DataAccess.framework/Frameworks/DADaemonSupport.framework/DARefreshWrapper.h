/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DADaemonSupport/DATokenRegistrationDelegate.h>

@protocol DARefreshManagerDelegate;
@class NSDate, NSMutableSet;

@interface DARefreshWrapper : NSObject <DATokenRegistrationDelegate> {

	int _pushState;
	int _curStyle;
	int _refreshReason;
	id<DARefreshManagerDelegate> _delegate;
	NSDate* _pushRegistrationTime;
	NSMutableSet* _tokenRegistrations;
	NSMutableSet* _refreshCollections;
	long long _fetchInterval;

}

@property (nonatomic,retain) NSMutableSet * tokenRegistrations;                         //@synthesize tokenRegistrations=_tokenRegistrations - In the implementation block
@property (assign,nonatomic) int refreshReason;                                         //@synthesize refreshReason=_refreshReason - In the implementation block
@property (nonatomic,retain) NSMutableSet * refreshCollections;                         //@synthesize refreshCollections=_refreshCollections - In the implementation block
@property (assign,nonatomic) long long fetchInterval;                                   //@synthesize fetchInterval=_fetchInterval - In the implementation block
@property (assign,nonatomic,__weak) id<DARefreshManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int pushState;                                             //@synthesize pushState=_pushState - In the implementation block
@property (nonatomic,retain) NSDate * pushRegistrationTime;                             //@synthesize pushRegistrationTime=_pushRegistrationTime - In the implementation block
@property (assign,nonatomic) int curStyle;                                              //@synthesize curStyle=_curStyle - In the implementation block
-(id)init;
-(void)setDelegate:(id<DARefreshManagerDelegate>)arg1 ;
-(id)description;
-(id<DARefreshManagerDelegate>)delegate;
-(NSMutableSet *)refreshCollections;
-(NSDate *)pushRegistrationTime;
-(void)performTokenRegistrationRequestsWithToken:(id)arg1 onBehalfOf:(id)arg2 ;
-(void)setPushState:(int)arg1 ;
-(void)startFetchActivityForPush;
-(void)setPushRegistrationTime:(NSDate *)arg1 ;
-(void)startFetchActivityForSystemPCStyle;
-(int)curStyle;
-(BOOL)isSetToSystemFetchInterval;
-(void)setCurStyle:(int)arg1 ;
-(void)refreshCollections:(id)arg1 withReason:(int)arg2 ;
-(void)stopCollectionsRefresh;
-(void)retryCollections:(id)arg1 after:(double)arg2 reason:(int)arg3 ;
-(void)cancelFetchActivity;
-(void)tokenRegistrationRequest:(id)arg1 finishedWithError:(id)arg2 shouldRetry:(BOOL)arg3 ;
-(void)setTokenRegistrations:(NSMutableSet *)arg1 ;
-(void)_dailyRefreshActivityFired;
-(void)cancelRetryActivity;
-(void)cancelDailyRefreshActivity;
-(void)cancelAllTokenRegistrations;
-(const char*)fetchActivityIdentifier;
-(long long)fetchInterval;
-(id)fetchActivityCriteriaWithInterval:(long long)arg1 ;
-(long long)XPCActivityIntervalFromSystemSetting;
-(void)setFetchInterval:(long long)arg1 ;
-(void)startFetchActivityWithInterval:(long long)arg1 ;
-(id)_stringForStyle:(int)arg1 ;
-(NSMutableSet *)tokenRegistrations;
-(void)startDailyRefreshActivity;
-(int)refreshReason;
-(void)setRefreshReason:(int)arg1 ;
-(void)setRefreshCollections:(NSMutableSet *)arg1 ;
-(void)_retryActivityFired;
-(int)pushState;
@end


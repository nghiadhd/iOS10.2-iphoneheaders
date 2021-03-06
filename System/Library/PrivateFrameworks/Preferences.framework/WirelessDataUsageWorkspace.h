/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AnalyticsWorkspace, ProcessAnalytics, NSNumber;

@interface WirelessDataUsageWorkspace : NSObject {

	BOOL _pendingProcessAnalytics;
	AnalyticsWorkspace* _analyticsWorkspace;
	ProcessAnalytics* _processAnalytics;
	NSNumber* _subscriberTag;

}

@property (assign) BOOL pendingProcessAnalytics;                                   //@synthesize pendingProcessAnalytics=_pendingProcessAnalytics - In the implementation block
@property (nonatomic,retain) AnalyticsWorkspace * analyticsWorkspace;              //@synthesize analyticsWorkspace=_analyticsWorkspace - In the implementation block
@property (nonatomic,retain) ProcessAnalytics * processAnalytics;                  //@synthesize processAnalytics=_processAnalytics - In the implementation block
@property (nonatomic,retain) NSNumber * subscriberTag;                             //@synthesize subscriberTag=_subscriberTag - In the implementation block
-(BOOL)valid;
-(AnalyticsWorkspace *)analyticsWorkspace;
-(ProcessAnalytics *)processAnalytics;
-(BOOL)pendingProcessAnalytics;
-(NSNumber *)subscriberTag;
-(void)setAnalyticsWorkspace:(AnalyticsWorkspace *)arg1 ;
-(void)setProcessAnalytics:(ProcessAnalytics *)arg1 ;
-(void)setSubscriberTag:(NSNumber *)arg1 ;
-(void)setPendingProcessAnalytics:(BOOL)arg1 ;
@end


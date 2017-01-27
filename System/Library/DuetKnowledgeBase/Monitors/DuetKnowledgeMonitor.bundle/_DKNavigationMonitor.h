/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/_DKMonitor.h>

@interface _DKNavigationMonitor : _DKMonitor {

	BOOL _enabled;
	BOOL _navigating;
	int _startedToken;
	int _stoppedToken;

}

@property (assign,nonatomic) BOOL enabled;                  //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL navigating;               //@synthesize navigating=_navigating - In the implementation block
@property (assign,nonatomic) int startedToken;              //@synthesize startedToken=_startedToken - In the implementation block
@property (assign,nonatomic) int stoppedToken;              //@synthesize stoppedToken=_stoppedToken - In the implementation block
+(id)eventStream;
+(id)entitlements;
+(void)setIsNavigating:(BOOL)arg1 ;
-(int)startedToken;
-(void)setNavigationStatus:(BOOL)arg1 ;
-(int)stoppedToken;
-(void)setStartedToken:(int)arg1 ;
-(void)setStoppedToken:(int)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)stop;
-(void)start;
-(void)synchronouslyReflectCurrentValue;
-(void)setNavigating:(BOOL)arg1 ;
-(BOOL)navigating;
-(id)loadState;
-(void)saveState;
@end

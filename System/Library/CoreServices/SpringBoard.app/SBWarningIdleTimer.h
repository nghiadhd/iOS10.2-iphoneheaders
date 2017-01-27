/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBCompoundIdleTimerDelegate.h>
#import <SpringBoard/SBIdleTimer.h>

@protocol SBIdleTimerDelegate;
@class SBCompoundIdleTimer, NSString;

@interface SBWarningIdleTimer : NSObject <SBCompoundIdleTimerDelegate, SBIdleTimer> {

	id<SBIdleTimerDelegate> _delegate;
	SBCompoundIdleTimer* _compoundTimer;
	SBCompoundIdleTimer* _originalTimer;
	long long _resetPolicy;
	long long _unwarnPolicy;
	double _unwarnInterval;
	double _transitionedToExpireTimestamp;
	BOOL _isTransitioningToExpire;
	BOOL _inExpireStage;
	BOOL _warnOnly;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBIdleTimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithWarnTimer:(id)arg1 expireTimer:(id)arg2 resetPolicy:(long long)arg3 unwarnPolicy:(long long)arg4 unwarnInterval:(double)arg5 ;
-(BOOL)isEqualToTimer:(id)arg1 ;
-(void)idleTimerDidRefresh:(id)arg1 ;
-(void)idleTimerDidExpire:(id)arg1 ;
-(void)idleTimerDidReceiveUserEvent:(id)arg1 ;
-(void)compoundTimer:(id)arg1 willMoveFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(void)compoundTimer:(id)arg1 didMoveFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(id)initWithCompoundTimer:(id)arg1 warnOnly:(BOOL)arg2 resetPolicy:(long long)arg3 unwarnPolicy:(long long)arg4 unwarnInterval:(double)arg5 ;
-(void)resetToOriginalTimer:(BOOL)arg1 ;
-(id)init;
-(void)setDelegate:(id<SBIdleTimerDelegate>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id<SBIdleTimerDelegate>)delegate;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end


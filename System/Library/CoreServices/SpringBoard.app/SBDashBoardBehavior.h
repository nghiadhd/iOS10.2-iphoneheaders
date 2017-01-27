/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <SpringBoard/SBDashBoardBehaviorProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SBDashBoardBehavior : NSObject <BSDescriptionProviding, SBDashBoardBehaviorProviding, NSCopying> {

	long long _idleTimerDuration;
	long long _idleTimerMode;
	long long _idleWarnMode;
	long long _scrollingStrategy;
	unsigned long long _restrictedCapabilities;
	long long _notificationBehavior;
	long long _proximityDetectionMode;

}

@property (assign,nonatomic) long long idleTimerDuration;                            //@synthesize idleTimerDuration=_idleTimerDuration - In the implementation block
@property (assign,nonatomic) long long idleTimerMode;                                //@synthesize idleTimerMode=_idleTimerMode - In the implementation block
@property (assign,nonatomic) long long idleWarnMode;                                 //@synthesize idleWarnMode=_idleWarnMode - In the implementation block
@property (assign,nonatomic) long long scrollingStrategy;                            //@synthesize scrollingStrategy=_scrollingStrategy - In the implementation block
@property (assign,nonatomic) long long notificationBehavior;                         //@synthesize notificationBehavior=_notificationBehavior - In the implementation block
@property (assign,nonatomic) unsigned long long restrictedCapabilities;              //@synthesize restrictedCapabilities=_restrictedCapabilities - In the implementation block
@property (assign,nonatomic) long long proximityDetectionMode;                       //@synthesize proximityDetectionMode=_proximityDetectionMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)behaviorForProvider:(id)arg1 ;
+(id)behavior;
-(void)unionBehavior:(id)arg1 ;
-(void)setIdleTimerDuration:(long long)arg1 ;
-(void)setIdleWarnMode:(long long)arg1 ;
-(long long)scrollingStrategy;
-(long long)proximityDetectionMode;
-(long long)idleTimerDuration;
-(long long)idleWarnMode;
-(void)addRestrictedCapabilities:(unsigned long long)arg1 ;
-(BOOL)areRestrictedCapabilities:(unsigned long long)arg1 ;
-(void)removeRestrictedCapabilities:(unsigned long long)arg1 ;
-(void)setProximityDetectionMode:(long long)arg1 ;
-(BOOL)isEqualToBehavior:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)idleTimerMode;
-(void)setIdleTimerMode:(long long)arg1 ;
-(unsigned long long)restrictedCapabilities;
-(void)setRestrictedCapabilities:(unsigned long long)arg1 ;
-(long long)notificationBehavior;
-(void)setNotificationBehavior:(long long)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setScrollingStrategy:(long long)arg1 ;
@end


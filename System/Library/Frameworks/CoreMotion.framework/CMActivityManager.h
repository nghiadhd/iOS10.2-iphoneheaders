/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMActivityManager : NSObject {

	id _internal;

}

@property (copy) id activityHandler; 
@property (getter=isActivityAvailable,nonatomic,readonly) BOOL activityAvailable; 
-(id)init;
-(void)dealloc;
-(long long)overrideOscarSideband:(BOOL)arg1 withState:(long long)arg2 ;
-(long long)simulateMotionState:(BOOL)arg1 withState:(long long)arg2 ;
-(id)activityHandler;
-(BOOL)isActivityAvailable;
-(void)setActivityHandler:(id)arg1 ;
@end


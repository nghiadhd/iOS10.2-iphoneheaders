/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDAchievementDefinitionAlertSuppressor.h>

@protocol HDAchievementDefinitionAlertSuppressorDelegate;
@class HDProfile, NSString;

@interface HDCompanionAchievementDefinitionAlertSuppressor : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDAchievementDefinitionAlertSuppressor> {

	HDProfile* _profile;
	BOOL _activityGoalIsSet;
	id<HDAchievementDefinitionAlertSuppressorDelegate> delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HDAchievementDefinitionAlertSuppressorDelegate> delegate; 
-(void)setDelegate:(id<HDAchievementDefinitionAlertSuppressorDelegate>)arg1 ;
-(id<HDAchievementDefinitionAlertSuppressorDelegate>)delegate;
-(void)daemonReady:(id)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(BOOL)alertsAreSuppressed;
-(void)_checkForMoveGoalWithDatabase:(id)arg1 ;
@end


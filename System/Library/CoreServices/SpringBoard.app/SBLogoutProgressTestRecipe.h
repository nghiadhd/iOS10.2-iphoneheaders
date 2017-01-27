/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBLogoutProgressDataSource.h>
#import <SpringBoard/SBTestRecipe.h>

@class NSMutableArray, SBLogoutProgressAlertViewController, NSArray, NSDictionary, NSString;

@interface SBLogoutProgressTestRecipe : NSObject <SBLogoutProgressDataSource, SBTestRecipe> {

	NSMutableArray* _tasks;
	SBLogoutProgressAlertViewController* _logoutProgressAlert;
	NSArray* _remainingApplications;
	NSDictionary* _remainingBlockingTasks;

}

@property (nonatomic,retain) SBLogoutProgressAlertViewController * logoutProgressAlert;              //@synthesize logoutProgressAlert=_logoutProgressAlert - In the implementation block
@property (nonatomic,copy) NSArray * remainingApplications;                                          //@synthesize remainingApplications=_remainingApplications - In the implementation block
@property (nonatomic,retain) NSDictionary * remainingBlockingTasks;                                  //@synthesize remainingBlockingTasks=_remainingBlockingTasks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)title;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(id)pendingApplicationsForLogoutProgressAlertViewController:(id)arg1 ;
-(id)debugBlockingTasksForLogoutProgressAlertViewController:(id)arg1 ;
-(void)setLogoutProgressAlert:(SBLogoutProgressAlertViewController *)arg1 ;
-(id)_defaultPendingApplications;
-(void)setRemainingApplications:(NSArray *)arg1 ;
-(id)_defaultBlockingTasks;
-(void)setRemainingBlockingTasks:(NSDictionary *)arg1 ;
-(SBLogoutProgressAlertViewController *)logoutProgressAlert;
-(NSArray *)remainingApplications;
-(NSDictionary *)remainingBlockingTasks;
@end


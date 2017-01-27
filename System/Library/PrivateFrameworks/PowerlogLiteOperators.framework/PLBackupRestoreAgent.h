/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class MBManager;

@interface PLBackupRestoreAgent : PLAgent {

	BOOL _backupState;
	BOOL _restoreState;
	MBManager* _backupRestoreManager;

}

@property (readonly) MBManager * backupRestoreManager;              //@synthesize backupRestoreManager=_backupRestoreManager - In the implementation block
@property (assign,nonatomic) BOOL backupState;                      //@synthesize backupState=_backupState - In the implementation block
@property (assign,nonatomic) BOOL restoreState;                     //@synthesize restoreState=_restoreState - In the implementation block
+(void)load;
+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)defaults;
-(id)init;
-(void)log;
-(void)initOperatorDependancies;
-(MBManager *)backupRestoreManager;
-(BOOL)backupState;
-(void)setBackupState:(BOOL)arg1 ;
-(void)setRestoreState:(BOOL)arg1 ;
-(void)didChangeEvent:(id)arg1 toState:(BOOL)arg2 ;
-(BOOL)restoreState;
@end


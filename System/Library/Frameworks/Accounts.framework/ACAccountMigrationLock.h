/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupport/CPExclusiveLock.h>

@interface ACAccountMigrationLock : CPExclusiveLock
+(void)signalMigrationFinished;
+(id)_currentSystemVersion;
+(BOOL)migrationFinished;
+(id)createAccountMigrationLock;
+(void)writeMigrationVersionPref;
@end


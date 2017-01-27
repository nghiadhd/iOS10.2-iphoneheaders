/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class UMUser, SBBootDefaults, NSString;

@interface SBInitialRestartState : NSObject <BSDescriptionProviding> {

	BOOL _isAuthenticated;
	BOOL _isInLostMode;
	BOOL _isBlocked;
	BOOL _hasPasscodeSet;
	BOOL _requiresSetup;
	BOOL _shouldNeverLock;
	BOOL _forSimulator;
	UMUser* _currentUser;
	SBBootDefaults* _bootDefaults;

}

@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated;              //@synthesize isAuthenticated=_isAuthenticated - In the implementation block
@property (assign,getter=isInLostMode,nonatomic) BOOL inLostMode;                    //@synthesize isInLostMode=_isInLostMode - In the implementation block
@property (assign,getter=isBlocked,nonatomic) BOOL blocked;                          //@synthesize isBlocked=_isBlocked - In the implementation block
@property (assign,nonatomic) BOOL hasPasscodeSet;                                    //@synthesize hasPasscodeSet=_hasPasscodeSet - In the implementation block
@property (assign,nonatomic) BOOL requiresSetup;                                     //@synthesize requiresSetup=_requiresSetup - In the implementation block
@property (assign,nonatomic) BOOL shouldNeverLock;                                   //@synthesize shouldNeverLock=_shouldNeverLock - In the implementation block
@property (nonatomic,retain) UMUser * currentUser;                                   //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,retain) SBBootDefaults * bootDefaults;                          //@synthesize bootDefaults=_bootDefaults - In the implementation block
@property (assign,getter=isForSimulator,nonatomic) BOOL forSimulator;                //@synthesize forSimulator=_forSimulator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isInLostMode;
-(void)setInLostMode:(BOOL)arg1 ;
-(void)setShouldNeverLock:(BOOL)arg1 ;
-(void)setBootDefaults:(SBBootDefaults *)arg1 ;
-(void)setForSimulator:(BOOL)arg1 ;
-(BOOL)shouldNeverLock;
-(BOOL)isForSimulator;
-(NSString *)description;
-(void)setBlocked:(BOOL)arg1 ;
-(void)setCurrentUser:(UMUser *)arg1 ;
-(BOOL)requiresSetup;
-(void)setRequiresSetup:(BOOL)arg1 ;
-(UMUser *)currentUser;
-(BOOL)hasPasscodeSet;
-(void)setHasPasscodeSet:(BOOL)arg1 ;
-(SBBootDefaults *)bootDefaults;
-(void)setAuthenticated:(BOOL)arg1 ;
-(BOOL)isAuthenticated;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isBlocked;
@end


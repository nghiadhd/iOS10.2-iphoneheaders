/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <profiled/profiled-Structs.h>
#import <profiled/MCProfileHandler.h>

@class NSData;

@interface MCProfileServiceProfileHandler : MCProfileHandler {

	SecIdentityRef _identity;
	NSData* _persistentID;

}
-(BOOL)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2 ;
-(void)setAsideWithInstaller:(id)arg1 ;
-(void)unsetAside;
-(void)_retainDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 forSystem:(BOOL)arg3 user:(BOOL)arg4 ;
-(void)_releaseDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 forSystem:(BOOL)arg3 user:(BOOL)arg4 ;
-(id)_badIdentityError;
-(id)fetchFinalProfileWithClient:(id)arg1 outProfileData:(id*)arg2 outError:(id*)arg3 ;
-(void)dealloc;
-(void)remove;
-(id)initWithProfile:(id)arg1 ;
@end


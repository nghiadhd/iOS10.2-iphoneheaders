/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBUISceneHost.h>

@protocol FBUISceneHost <FBUISceneHostProxy>
@required
-(id)sceneClient;
-(void)registerSceneClient:(id)arg1;
-(void)invalidateSceneClient;

@end

#import <libobjc.A.dylib/FBUISceneUpdater.h>

@protocol FBUISceneClientProxy;
@class FBUISceneIdentity, NSString;

@interface FBUISceneHost : NSObject <FBUISceneHost, FBUISceneUpdater> {

	FBUISceneIdentity* _identity;
	id<FBUISceneClientProxy> _sceneClient;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * sceneIdentifier; 
-(id)contentView;
-(void)dealloc;
-(NSString *)description;
-(void)sendActions:(id)arg1 ;
-(id)initWithIdentity:(id)arg1 ;
-(NSString *)sceneIdentifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)sceneClient;
-(void)registerSceneClient:(id)arg1 ;
-(void)invalidateSceneClient;
-(void)sceneClient:(id)arg1 didAttachLayer:(id)arg2 ;
-(void)sceneClient:(id)arg1 didUpdateLayer:(id)arg2 ;
-(void)sceneClient:(id)arg1 didDetachLayer:(id)arg2 ;
-(void)sceneClient:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneClient:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)didInvalidateSceneClient:(id)arg1 ;
-(void)updateSettings:(id)arg1 withTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
@end


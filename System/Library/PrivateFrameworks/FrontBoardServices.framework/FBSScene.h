/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CADisplay, FBSDisplay, FBSSceneSettings, FBSSceneClientSettings, NSArray;

@interface FBSScene : NSObject

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) CADisplay * display; 
@property (nonatomic,retain,readonly) FBSDisplay * fbsDisplay; 
@property (assign,nonatomic) id<FBSSceneDelegate> delegate; 
@property (nonatomic,retain,readonly) FBSSceneSettings * settings; 
@property (nonatomic,retain,readonly) FBSSceneClientSettings * clientSettings; 
@property (nonatomic,retain,readonly) NSArray * layers; 
@property (nonatomic,retain,readonly) NSArray * contexts; 
-(void)updateUIClientSettingsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)uiCanReceiveDeviceOrientationEvents;
-(id)uiSettings;
-(id)uiClientSettings;
-(void)updateUIClientSettingsWithTransitionBlock:(/*^block*/id)arg1 ;
-(BOOL)_hasAgent;
-(void)_didCreateWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_willDestroyWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)setDelegate:(id<FBSSceneDelegate>)arg1 ;
-(id<FBSSceneDelegate>)delegate;
-(void)invalidate;
-(FBSSceneSettings *)settings;
-(id)_init;
-(NSString *)identifier;
-(FBSDisplay *)fbsDisplay;
-(void)sendActions:(id)arg1 ;
-(CADisplay *)display;
-(BOOL)invalidateSnapshotWithContext:(id)arg1 ;
-(BOOL)performSnapshotWithContext:(id)arg1 ;
-(NSArray *)layers;
-(void)attachLayer:(id)arg1 ;
-(void)detachLayer:(id)arg1 ;
-(id)initWithQueue:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5 ;
-(FBSSceneClientSettings *)clientSettings;
-(void)updateClientSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)updateClientSettingsWithTransitionBlock:(/*^block*/id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)attachSceneContext:(id)arg1 ;
-(void)detachSceneContext:(id)arg1 ;
-(void)attachContext:(id)arg1 ;
-(void)detachContext:(id)arg1 ;
-(id)snapshotRequest;
-(NSArray *)contexts;
@end


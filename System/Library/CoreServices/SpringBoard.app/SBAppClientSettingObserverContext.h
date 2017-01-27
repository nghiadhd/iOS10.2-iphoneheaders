/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBScene, SBApplication, UIApplicationSceneSettings, UIApplicationSceneClientSettings, FBSSceneTransitionContext;

@interface SBAppClientSettingObserverContext : NSObject {

	FBScene* _scene;
	SBApplication* _app;
	UIApplicationSceneSettings* _settings;
	UIApplicationSceneClientSettings* _oldClientSettings;
	UIApplicationSceneClientSettings* _updatedClientSettings;
	FBSSceneTransitionContext* _transition;

}

@property (nonatomic,retain) FBScene * scene;                                                       //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) SBApplication * app;                                                   //@synthesize app=_app - In the implementation block
@property (nonatomic,retain) UIApplicationSceneSettings * settings;                                 //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) UIApplicationSceneClientSettings * oldClientSettings;                  //@synthesize oldClientSettings=_oldClientSettings - In the implementation block
@property (nonatomic,retain) UIApplicationSceneClientSettings * updatedClientSettings;              //@synthesize updatedClientSettings=_updatedClientSettings - In the implementation block
@property (nonatomic,retain) FBSSceneTransitionContext * transition;                                //@synthesize transition=_transition - In the implementation block
-(void)setOldClientSettings:(UIApplicationSceneClientSettings *)arg1 ;
-(void)setUpdatedClientSettings:(UIApplicationSceneClientSettings *)arg1 ;
-(UIApplicationSceneClientSettings *)oldClientSettings;
-(UIApplicationSceneClientSettings *)updatedClientSettings;
-(UIApplicationSceneSettings *)settings;
-(void)setTransition:(FBSSceneTransitionContext *)arg1 ;
-(FBSSceneTransitionContext *)transition;
-(void)setSettings:(UIApplicationSceneSettings *)arg1 ;
-(SBApplication *)app;
-(void)setScene:(FBScene *)arg1 ;
-(FBScene *)scene;
-(void)setApp:(SBApplication *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBSceneManager, SBProximitySensorManager;

@interface SBFaceContactExpectationManager : NSObject {

	SBSceneManager* _sceneManager;
	SBProximitySensorManager* _proximitySensorManager;
	BOOL _faceExpected;

}

@property (assign,setter=_setFaceExpected:,nonatomic) BOOL faceExpected;              //@synthesize faceExpected=_faceExpected - In the implementation block
-(id)initWithSceneManager:(id)arg1 ;
-(void)updateFaceContactExpectation;
-(id)initWithSceneManager:(id)arg1 proximitySensorManager:(id)arg2 ;
-(BOOL)_frontmostSceneExpectsFaceContact;
-(void)_setFaceExpected:(BOOL)arg1 ;
-(id)_proximitySensorClientID;
-(BOOL)faceExpected;
-(id)description;
@end


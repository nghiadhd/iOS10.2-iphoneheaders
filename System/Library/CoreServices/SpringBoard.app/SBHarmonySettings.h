/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUISettings.h>

@class NSString;

@interface SBHarmonySettings : SBUISettings {

	BOOL _whitePointAdaptationInteractiveUpdateEnabled;
	float _whitePointAdaptationStrengthStandard;
	float _whitePointAdaptationStrengthReading;
	float _whitePointAdaptationStrengthPhoto;
	float _whitePointAdaptationStrengthVideo;
	float _whitePointAdaptationStrengthGame;
	float _whitePointAdaptationUpdateDefaultDuration;
	NSString* _whitePointAdaptationInteractiveUpdateTimingFunctionName;

}

@property (assign,nonatomic) float whitePointAdaptationStrengthStandard;                                    //@synthesize whitePointAdaptationStrengthStandard=_whitePointAdaptationStrengthStandard - In the implementation block
@property (assign,nonatomic) float whitePointAdaptationStrengthReading;                                     //@synthesize whitePointAdaptationStrengthReading=_whitePointAdaptationStrengthReading - In the implementation block
@property (assign,nonatomic) float whitePointAdaptationStrengthPhoto;                                       //@synthesize whitePointAdaptationStrengthPhoto=_whitePointAdaptationStrengthPhoto - In the implementation block
@property (assign,nonatomic) float whitePointAdaptationStrengthVideo;                                       //@synthesize whitePointAdaptationStrengthVideo=_whitePointAdaptationStrengthVideo - In the implementation block
@property (assign,nonatomic) float whitePointAdaptationStrengthGame;                                        //@synthesize whitePointAdaptationStrengthGame=_whitePointAdaptationStrengthGame - In the implementation block
@property (assign,nonatomic) float whitePointAdaptationUpdateDefaultDuration;                               //@synthesize whitePointAdaptationUpdateDefaultDuration=_whitePointAdaptationUpdateDefaultDuration - In the implementation block
@property (assign,nonatomic) BOOL whitePointAdaptationInteractiveUpdateEnabled;                             //@synthesize whitePointAdaptationInteractiveUpdateEnabled=_whitePointAdaptationInteractiveUpdateEnabled - In the implementation block
@property (nonatomic,copy) NSString * whitePointAdaptationInteractiveUpdateTimingFunctionName;              //@synthesize whitePointAdaptationInteractiveUpdateTimingFunctionName=_whitePointAdaptationInteractiveUpdateTimingFunctionName - In the implementation block
+(id)settingsControllerModule;
-(void)setWhitePointAdaptationStrengthStandard:(float)arg1 ;
-(void)setWhitePointAdaptationStrengthReading:(float)arg1 ;
-(void)setWhitePointAdaptationStrengthPhoto:(float)arg1 ;
-(void)setWhitePointAdaptationStrengthVideo:(float)arg1 ;
-(void)setWhitePointAdaptationStrengthGame:(float)arg1 ;
-(void)setWhitePointAdaptationUpdateDefaultDuration:(float)arg1 ;
-(void)setWhitePointAdaptationInteractiveUpdateEnabled:(BOOL)arg1 ;
-(void)setWhitePointAdaptationInteractiveUpdateTimingFunctionName:(NSString *)arg1 ;
-(float)whitePointAdaptationStrengthStandard;
-(float)whitePointAdaptationStrengthReading;
-(float)whitePointAdaptationStrengthPhoto;
-(float)whitePointAdaptationStrengthVideo;
-(float)whitePointAdaptationStrengthGame;
-(float)whitePointAdaptationUpdateDefaultDuration;
-(BOOL)whitePointAdaptationInteractiveUpdateEnabled;
-(NSString *)whitePointAdaptationInteractiveUpdateTimingFunctionName;
-(void)setDefaultValues;
@end


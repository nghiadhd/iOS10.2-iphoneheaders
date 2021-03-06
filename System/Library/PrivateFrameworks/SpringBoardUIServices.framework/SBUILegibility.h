/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _UILegibilitySettings;


@protocol SBUILegibility <SBUIOptionalLegibility>
@property (assign,nonatomic) double strength; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@required
-(void)setLegibilitySettings:(id)arg1;
-(_UILegibilitySettings *)legibilitySettings;
-(double)strength;
-(void)setStrength:(double)arg1;

@end


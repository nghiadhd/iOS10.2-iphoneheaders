/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <MapsLockScreen/GuidanceSignView.h>

@class UIView, GuidanceSignDistanceLabel, GuidanceSignInstructionsLabel, GuidanceManeuverView, UIActivityIndicatorView, UIImageView, GuidanceSignBackgroundView, NSString, NSArray, UIImage;

@interface NavGuidanceSignView : GuidanceSignView {

	double _maximumWidth;
	UIView* _containerView;
	CGRect _pendingContainerFrame;
	BOOL _disallowMutation;
	GuidanceSignDistanceLabel* _distanceLabel;
	GuidanceSignInstructionsLabel* _instructionsLabel;
	GuidanceManeuverView* _maneuverView;
	BOOL _shouldShowSpinner;
	UIActivityIndicatorView* _activityView;
	UIImageView* _borderView;
	GuidanceSignBackgroundView* _backgroundView;
	UIView* _dividerView;
	UIImageView* _shieldView;
	CGPoint _shieldCenter;
	NSString* _shieldText;
	int _shieldType;
	NSArray* _instructionsTextAlternatives;
	BOOL _showsSubviewBounds;
	BOOL _delayLayout;

}

@property (assign,nonatomic) double maximumWidth;                                             //@synthesize maximumWidth=_maximumWidth - In the implementation block
@property (nonatomic,copy) NSString * distanceText; 
@property (nonatomic,copy) NSArray * instructionsTextAlternatives;                            //@synthesize instructionsTextAlternatives=_instructionsTextAlternatives - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfInstructionLines; 
@property (nonatomic,readonly) GuidanceManeuverView * maneuverView;                           //@synthesize maneuverView=_maneuverView - In the implementation block
@property (nonatomic,retain) UIImage * shieldImage; 
@property (assign,nonatomic) CGPoint shieldCenter;                                            //@synthesize shieldCenter=_shieldCenter - In the implementation block
@property (nonatomic,copy) NSString * shieldText;                                             //@synthesize shieldText=_shieldText - In the implementation block
@property (assign,nonatomic) int shieldType;                                                  //@synthesize shieldType=_shieldType - In the implementation block
@property (assign,nonatomic) BOOL shouldShowSpinner;                                          //@synthesize shouldShowSpinner=_shouldShowSpinner - In the implementation block
-(void)disallowMutation;
-(NSString *)distanceText;
-(void)setViewAlpha:(double)arg1 withoutManuever:(BOOL)arg2 withoutInstructions:(BOOL)arg3 ;
-(void)animateTextUpWithDuration:(double)arg1 ;
-(void)setContentFrameX:(double)arg1 ;
-(void)willAnimateStyleValuesFromTheme;
-(void)setMaximumNumberOfInstructionLines:(unsigned long long)arg1 ;
-(void)updateDividerHeightForRect:(CGRect)arg1 ;
-(void)setInstructionsText:(id)arg1 ;
-(BOOL)delayLayout;
-(void)transformSublayersByPercentComplete:(double)arg1 ;
-(BOOL)manueverNeedsPeekingAdjustment;
-(NSArray *)instructionsTextAlternatives;
-(BOOL)textIsCentered;
-(double)heightThatFitsWidth:(double)arg1 ;
-(void)didAnimateStyleValuesFromTheme;
-(void)setDistanceText:(NSString *)arg1 ;
-(void)finalizePosition;
-(void)updateStyleValuesFromTheme;
-(void)animateTextDownWithDuration:(double)arg1 ;
-(CGPoint)shieldCenter;
-(void)setDelayLayout:(BOOL)arg1 ;
-(unsigned long long)maximumNumberOfInstructionLines;
-(void)setShieldCenter:(CGPoint)arg1 ;
-(double)instructionStartingX;
-(id)_activityView;
-(UIImage *)shieldImage;
-(GuidanceManeuverView *)maneuverView;
-(void)setShieldImage:(UIImage *)arg1 ;
-(void)textLinesShouldAnimateFromHeight:(double)arg1 ;
-(void)setInstructionsTextAlternatives:(NSArray *)arg1 ;
-(void)updateManueverOriginXForScrollPosition:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setMaximumWidth:(double)arg1 ;
-(double)maximumWidth;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)shieldText;
-(void)setShieldText:(NSString *)arg1 ;
-(void)setShieldType:(int)arg1 ;
-(int)shieldType;
-(CGRect)contentFrame;
-(void)setVariant:(int)arg1 ;
-(id)instructionsLabel;
-(BOOL)shouldShowSpinner;
-(void)setShouldShowSpinner:(BOOL)arg1 ;
@end


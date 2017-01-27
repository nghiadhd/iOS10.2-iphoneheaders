/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@protocol UINamedLayerStack;
@class UIMotionEffectGroup, UIImage, NSObject, _UIStackedImageConfiguration;

@interface _UIStackedImageContainerView : UIView {

	UIMotionEffectGroup* _stackMotionEffects;
	BOOL _installsMotionEffectsWhenFocused;
	UIImage* _stackImage;
	NSObject*<UINamedLayerStack> _constructedStackImage;
	_UIStackedImageConfiguration* _config;

}

@property (nonatomic,retain) UIImage * stackImage;                                            //@synthesize stackImage=_stackImage - In the implementation block
@property (nonatomic,retain) NSObject*<UINamedLayerStack> constructedStackImage;              //@synthesize constructedStackImage=_constructedStackImage - In the implementation block
@property (nonatomic,copy) _UIStackedImageConfiguration * config;                             //@synthesize config=_config - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed; 
@property (assign,getter=isStackFocused,nonatomic) BOOL stackFocused; 
@property (assign,nonatomic) BOOL installsMotionEffectsWhenFocused;                           //@synthesize installsMotionEffectsWhenFocused=_installsMotionEffectsWhenFocused - In the implementation block
@property (assign,nonatomic) CGPoint focusDirection; 
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(void)setPressed:(BOOL)arg1 ;
-(_UIStackedImageConfiguration *)config;
-(void)setStackFocused:(BOOL)arg1 withFocusAnimationCoordinator:(id)arg2 ;
-(BOOL)isPressed;
-(void)setFocusDirection:(CGPoint)arg1 ;
-(CGPoint)focusDirection;
-(void)setConfig:(_UIStackedImageConfiguration *)arg1 ;
-(id)_imageContainerLayer;
-(void)_updateContainerLayerImages;
-(void)_setStackFocused:(BOOL)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 ;
-(void)_installMotionEffects;
-(void)_uninstallMotionEffects;
-(BOOL)installsMotionEffectsWhenFocused;
-(BOOL)isStackFocused;
-(void)setStackImage:(UIImage *)arg1 ;
-(void)setConstructedStackImage:(NSObject*<UINamedLayerStack>)arg1 ;
-(void)setStackFocused:(BOOL)arg1 ;
-(void)setInstallsMotionEffectsWhenFocused:(BOOL)arg1 ;
-(UIImage *)stackImage;
-(NSObject*<UINamedLayerStack>)constructedStackImage;
@end


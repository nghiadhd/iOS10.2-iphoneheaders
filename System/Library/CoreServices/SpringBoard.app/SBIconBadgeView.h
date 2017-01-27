/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBIconAccessoryView.h>

@class NSString, SBDarkeningImageView, SBIconAccessoryImage;

@interface SBIconBadgeView : UIView <SBIconAccessoryView> {

	NSString* _text;
	SBDarkeningImageView* _incomingTextView;
	BOOL _animating;
	/*^block*/id _queuedAnimation;
	BOOL _displayingAccessory;
	SBIconAccessoryImage* _backgroundImage;
	SBDarkeningImageView* _backgroundView;
	SBIconAccessoryImage* _textImage;
	SBDarkeningImageView* _textView;

}

@property (nonatomic,copy) id queuedAnimation;                      //@synthesize queuedAnimation=_queuedAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_checkoutBackgroundImage;
+(CGPoint)_textOffset;
+(id)_checkoutImageForText:(id)arg1 highlighted:(BOOL)arg2 ;
+(CGPoint)_overhang;
+(id)_createImageForText:(id)arg1 highlighted:(BOOL)arg2 ;
+(double)_maxTextWidth;
+(double)_textPadding;
+(id)checkoutAccessoryImagesForIcon:(id)arg1 location:(int)arg2 ;
+(id)_textFont;
-(void)_clearText;
-(void)_configureAnimatedForText:(id)arg1 highlighted:(BOOL)arg2 withPreparation:(/*^block*/id)arg3 animation:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_resizeForTextImage:(id)arg1 ;
-(void)setQueuedAnimation:(id)arg1 ;
-(id)queuedAnimation;
-(void)_crossfadeToTextImage:(id)arg1 withPreparation:(/*^block*/id)arg2 animation:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_zoomInWithTextImage:(id)arg1 preparation:(/*^block*/id)arg2 animation:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_zoomOutWithPreparation:(/*^block*/id)arg1 animation:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)configureAnimatedForIcon:(id)arg1 location:(int)arg2 highlighted:(BOOL)arg3 withPreparation:(/*^block*/id)arg4 animation:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)configureForIcon:(id)arg1 location:(int)arg2 highlighted:(BOOL)arg3 ;
-(CGPoint)accessoryOriginForIconBounds:(CGRect)arg1 ;
-(BOOL)displayingAccessory;
-(void)setAccessoryBrightness:(double)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)dealloc;
-(void)prepareForReuse;
@end


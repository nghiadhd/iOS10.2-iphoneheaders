/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/NUAnimationObserver.h>

@protocol NTKAstronomyViewObserver;
@class NUView, NUPortal, NUAnimation, NUScene, NSMutableSet;

@interface NTKAstronomyView : UIView <NUAnimationObserver> {

	NUView* _viewer;
	NUPortal* _button[2];
	unsigned long long _buttonContents[2];
	NUAnimation* _lunaTabAnim;
	NUAnimation* _earthTabAnim;
	NUAnimation* _orreryTabAnim0;
	NUAnimation* _orreryTabAnim1;
	NUScene* _buttonScenes[3];
	NSMutableSet* _activeContentsAnimations;
	id<NTKAstronomyViewObserver> _observer;
	unsigned long long _currentTab;
	unsigned _isSupplemental : 1;
	unsigned _isDrawRectEnabled : 1;

}

@property (assign,nonatomic,__weak) id<NTKAstronomyViewObserver> observer;               //@synthesize observer=_observer - In the implementation block
@property (assign,getter=isDrawRectEnabled,nonatomic) BOOL drawRectEnabled;              //@synthesize isDrawRectEnabled=_isDrawRectEnabled - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(unsigned long long)contents;
-(void)stopAnimation;
-(void)startAnimation;
-(void)setObserver:(id<NTKAstronomyViewObserver>)arg1 ;
-(id<NTKAstronomyViewObserver>)observer;
-(void)prepareToZoom;
-(void)cleanupAfterZoom;
-(void)setMinFrameInterval:(int)arg1 ;
-(void)updateSunLocationForDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 ;
-(void)universeAnimationFinished:(id)arg1 ;
-(id)rotatable:(unsigned long long)arg1 ;
-(void)setContents:(unsigned long long)arg1 supplemental:(BOOL)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)contentsForButton:(unsigned long long)arg1 ;
-(void)setButton:(unsigned long long)arg1 contents:(unsigned long long)arg2 ;
-(void)setButton:(unsigned long long)arg1 contentsFrame:(CGRect)arg2 ;
-(void)setButton:(unsigned long long)arg1 opacity:(float)arg2 animated:(BOOL)arg3 ;
-(void)setZoomFraction:(float)arg1 targetDiameter:(float)arg2 ;
-(BOOL)isDrawRectEnabled;
-(void)setDrawRectEnabled:(BOOL)arg1 ;
@end


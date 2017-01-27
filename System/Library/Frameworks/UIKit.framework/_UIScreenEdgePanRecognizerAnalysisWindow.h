/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIWindow.h>

@class NSMutableArray, UIDelayedAction, UIView, _UIScreenEdgePanRecognizer;

@interface _UIScreenEdgePanRecognizerAnalysisWindow : UIWindow {

	NSMutableArray* _failureMessageLabels;
	UIDelayedAction* _messageFadeAction;
	UIView* _backgroundView;
	_UIScreenEdgePanRecognizer* _recognizer;
	long long _maximumVisibleOverlayItems;

}

@property (assign,nonatomic) _UIScreenEdgePanRecognizer * recognizer;              //@synthesize recognizer=_recognizer - In the implementation block
@property (assign,nonatomic) long long maximumVisibleOverlayItems;                 //@synthesize maximumVisibleOverlayItems=_maximumVisibleOverlayItems - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_isWindowServerHostingManaged;
-(void)dismissMessages;
-(void)fadeOldestMessage;
-(void)pushMessage:(id)arg1 toVisualOverlay:(BOOL)arg2 ;
-(void)pushFailureMessage:(id)arg1 toVisualOverlay:(BOOL)arg2 ;
-(void)pushStatusMessage:(id)arg1 toVisualOverlay:(BOOL)arg2 ;
-(_UIScreenEdgePanRecognizer *)recognizer;
-(void)setRecognizer:(_UIScreenEdgePanRecognizer *)arg1 ;
-(long long)maximumVisibleOverlayItems;
-(void)setMaximumVisibleOverlayItems:(long long)arg1 ;
@end


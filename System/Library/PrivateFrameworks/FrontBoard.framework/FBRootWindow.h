/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <UIKit/_UIRootWindow.h>
#import <libobjc.A.dylib/FBSceneTransformTarget.h>

@class UIView, NSHashTable, NSString;

@interface FBRootWindow : _UIRootWindow <FBSceneTransformTarget> {

	UIView* _sceneContainerView;
	UIView* _systemGestureView;
	NSHashTable* _transforms;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isSecure;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)_shouldPrepareScreenForWindow;
-(BOOL)_usesWindowServerHitTesting;
-(BOOL)_appearsInLoupe;
-(id)initWithDisplay:(id)arg1 ;
-(void)transformDidInvalidate:(id)arg1 ;
-(void)transformDidUpdate:(id)arg1 ;
-(id)_systemGestureView;
-(void)attachSceneTransform:(id)arg1 ;
-(void)removeSceneTransform:(id)arg1 ;
-(id)sceneContainerView;
-(void)_updateTransforms;
@end


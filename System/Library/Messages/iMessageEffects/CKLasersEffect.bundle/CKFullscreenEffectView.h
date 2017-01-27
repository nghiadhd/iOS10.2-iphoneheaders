/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageEffects/CKLasersEffect.bundle/CKLasersEffect
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKFullscreenEffectView
@property (assign,nonatomic) long long zIndex; 
@property (assign,nonatomic) CGPoint focusPoint; 
@property (assign,nonatomic) CGRect messageRect; 
@property (assign,nonatomic) char messageOrientation; 
@required
-(char)messageOrientation;
-(CGRect)messageRect;
-(void)stopAnimation;
-(void)startAnimation;
-(void)setZIndex:(long long)arg1;
-(long long)zIndex;
-(CGPoint)focusPoint;
-(void)setFocusPoint:(CGPoint)arg1;
-(void)setMessageRect:(CGRect)arg1;
-(void)setMessageOrientation:(char)arg1;

@end


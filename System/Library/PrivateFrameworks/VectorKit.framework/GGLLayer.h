/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GGLLayer
@property (assign) id<GGLLayerDelegate> renderDelegate; 
@property (nonatomic,readonly) CGSize backingSize; 
@property (readonly) int backingFormat; 
@required
-(void)onTimerFired:(double)arg1;
-(void)setRenderDelegate:(id)arg1;
-(id<GGLLayerDelegate>)renderDelegate;
-(CGSize)backingSize;
-(int)backingFormat;
-(void)didEnterBackground;

@end


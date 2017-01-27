/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class CAContext, CALayer;

@interface CARenderer : NSObject {

	CARendererPriv* _priv;

}

@property (retain) CAContext * context; 
@property (__weak) id<CARendererDelegate> delegate; 
@property (retain) CALayer * layer; 
@property (assign) CGRect bounds; 
+(id)rendererWithEAGLContext:(id)arg1 options:(id)arg2 ;
-(id)_initWithOptions:(id)arg1 ;
-(id)_initWithEAGLContext:(id)arg1 options:(id)arg2 ;
-(BOOL)hasMissingContent;
-(CGRect)bounds;
-(CALayer *)layer;
-(void)setDelegate:(id<CARendererDelegate>)arg1 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(id<CARendererDelegate>)delegate;
-(void)setLayer:(CALayer *)arg1 ;
-(CAContext *)context;
-(void)endFrame;
-(void)setContext:(CAContext *)arg1 ;
-(CGRect)updateBounds;
-(void)beginFrameAtTime:(double)arg1 timeStamp:(SCD_Struct_CA26*)arg2 ;
-(void)render;
-(double)nextFrameTime;
-(void)addUpdateRect:(CGRect)arg1 ;
@end

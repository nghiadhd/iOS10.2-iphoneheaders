/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSMutableArray, CALayer;

@interface BubbleTextLayer : CALayer {

	CGSize _textSize;
	CGSize _leftImageLayerSize;
	CGSize _rightAccessoryLayerSize;
	CGSize _contentSize;
	CGSize _bubbleSize;
	CGRect _textFrame;
	CGRect _bubbleFrame;
	CGSize _boundsSizeConstraint;
	void* _font;
	CTFontRef _curCTFont;
	CTLineRef _theLine;
	double _descent;
	double _ascent;
	double _leading;
	CGRect _fontBounds;
	NSMutableArray* _annotationPoints;
	CGColorRef _generalShadowColor;
	CGColorRef _whiteShadowColor;
	CALayer* _leftImageLayer;
	CALayer* _rightAccessoryLayer;
	id _owningView;

}

@property (assign,nonatomic) id owningView; 
@property (nonatomic,retain) CGImageRef image; 
@property (nonatomic,retain) CALayer * rightAccessoryLayer; 
@property (nonatomic,retain) CGColorRef fillColor; 
@property (nonatomic,retain) CGColorRef fillColor2; 
@property (nonatomic,retain) CGColorRef frameColor; 
@property (nonatomic,retain) CGColorRef foregroundColor; 
@property (assign,nonatomic) double frameWidth; 
@property (assign,nonatomic) double fontSize; 
@property (nonatomic,retain) id string; 
@property (nonatomic,readonly) double textBaselineOffset; 
@property (nonatomic,readonly) CGRect textFrame; 
@property (assign,nonatomic) CGSize boundsSizeConstraint; 
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(void)setImage:(CGImageRef)arg1 ;
-(void)dealloc;
-(CGImageRef)image;
-(void)setFont:(id)arg1 ;
-(id)owningView;
-(void)setOwningView:(id)arg1 ;
-(void)layoutSublayers;
-(void)drawInContext:(CGContextRef)arg1 ;
-(double)textBaselineOffset;
-(CGRect)textFrame;
-(CGSize)preferredFrameSize;
-(CGSize)boundsSizeConstraint;
-(CGSize)getImagePreferredSize;
-(CGSize)getRightAccessoryLayerPreferredSize;
-(CGSize)textPreferredFrameSizeForLayerSize:(CGSize)arg1 ;
-(BOOL)isAnnotationBubble;
-(CGSize)calculatePreferredSubframeSizes;
-(id)initWithOwningView:(id)arg1 ;
-(void)addAnnotationPoint:(CGPoint)arg1 ;
-(CALayer *)rightAccessoryLayer;
-(void)setRightAccessoryLayer:(CALayer *)arg1 ;
-(void)setBoundsSizeConstraint:(CGSize)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MRLoadable.h>
#import <OpusOrigamiProducer/MRRenderable.h>

@class NSDictionary, MRSlideProvider, MRImage, NSString;

@interface MRFrame : NSObject <MRLoadable, MRRenderable> {

	NSDictionary* mDescription;
	MRSlideProvider* mSlideProvider;
	MRImage* mInputImage;
	MRImage* mOutputImage;
	NSString* mFrameID;
	NSDictionary* mAttributes;
	NSDictionary* mFlattenedAttributes;
	CGSize mPixelSize;

}

@property (nonatomic,retain) MRImage * inputImage; 
@property (readonly) NSString * frameID; 
@property (nonatomic,retain) NSDictionary * attributes; 
@property (assign,nonatomic) CGSize pixelSize; 
@property (nonatomic,readonly) BOOL isNative3D; 
@property (nonatomic,readonly) BOOL isOpaque; 
@property (nonatomic,readonly) BOOL isAlphaFriendly; 
@property (nonatomic,readonly) BOOL isInfinite; 
+(id)retainedFrameWithFrameID:(id)arg1 forSlideProvider:(id)arg2 ;
-(NSString *)frameID;
-(BOOL)isAlphaFriendly;
-(void)loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 now:(BOOL)arg4 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(BOOL)isNative3D;
-(void)releaseBySlideProvider:(id)arg1 ;
-(BOOL)isRetainedBySlideProvider;
-(id)initWithFrameID:(id)arg1 ;
-(void)retainBySlideProvider:(id)arg1 ;
-(void)dealloc;
-(BOOL)isOpaque;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)cleanup;
-(MRImage *)inputImage;
-(void)setPixelSize:(CGSize)arg1 ;
-(BOOL)isInfinite;
-(void)setInputImage:(MRImage *)arg1 ;
-(void)unload;
-(CGSize)pixelSize;
-(void)cancelLoading;
@end


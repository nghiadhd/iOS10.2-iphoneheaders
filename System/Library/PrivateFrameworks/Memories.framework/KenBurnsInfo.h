/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface KenBurnsInfo : NSObject <NSCoding, NSCopying> {

	BOOL _allowEffect;
	BOOL _effectDisabled;
	float _outputAspectRatio;
	CGSize _playbackImageSize;
	CGRect _startFrame;
	CGRect _endFrame;

}

@property (assign,nonatomic) BOOL allowEffect;                      //@synthesize allowEffect=_allowEffect - In the implementation block
@property (assign,nonatomic) BOOL effectDisabled;                   //@synthesize effectDisabled=_effectDisabled - In the implementation block
@property (assign,nonatomic) float outputAspectRatio;               //@synthesize outputAspectRatio=_outputAspectRatio - In the implementation block
@property (assign,nonatomic) CGRect startFrame;                     //@synthesize startFrame=_startFrame - In the implementation block
@property (assign,nonatomic) CGRect endFrame;                       //@synthesize endFrame=_endFrame - In the implementation block
@property (assign,nonatomic) CGSize playbackImageSize;              //@synthesize playbackImageSize=_playbackImageSize - In the implementation block
+(id)objectFromPlist:(id)arg1 ;
+(id)defaultKBInfo;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStartFrame:(CGRect)arg1 ;
-(void)setEndFrame:(CGRect)arg1 ;
-(CGRect)endFrame;
-(CGRect)startFrame;
-(void)setPlaybackImageSize:(CGSize)arg1 ;
-(float)outputAspectRatio;
-(CGSize)playbackImageSize;
-(void)setEffectDisabled:(BOOL)arg1 ;
-(void)setOutputAspectRatio:(float)arg1 ;
-(id)plistRepresentation;
-(CGRect)startFrameForRenderingIntent:(int)arg1 currentImageSize:(CGSize)arg2 ;
-(CGRect)endFrameForRenderingIntent:(int)arg1 currentImageSize:(CGSize)arg2 ;
-(BOOL)allowEffect;
-(BOOL)effectDisabled;
-(CGRect)adjustRect:(CGRect)arg1 forRenderingIntent:(int)arg2 currentImageSize:(CGSize)arg3 ;
-(CATransform3D)transformForRect:(CGRect)arg1 toViewSize:(CGSize)arg2 ;
-(void)setAllowEffect:(BOOL)arg1 ;
-(BOOL)updateKBInfoForNewPlaybackSize:(CGSize)arg1 ;
-(CATransform3D)startTransformToViewSize:(CGSize)arg1 ;
-(CATransform3D)endTransformToViewSize:(CGSize)arg1 ;
@end


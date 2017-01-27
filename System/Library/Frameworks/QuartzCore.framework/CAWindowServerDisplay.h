/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSString, NSSet;

@interface CAWindowServerDisplay : NSObject {

	CAWindowServerDisplayImpl* _impl;
	BOOL _mirroringEnabled;

}

@property (readonly) CGRect bounds; 
@property (assign) double scale; 
@property (readonly) NSString * name; 
@property (readonly) NSString * deviceName; 
@property (readonly) unsigned displayId; 
@property (readonly) NSString * uniqueId; 
@property (readonly) unsigned rendererFlags; 
@property (readonly) NSSet * clones; 
@property (readonly) CAWindowServerDisplay * cloneMaster; 
@property (getter=isBlanked) BOOL blanked; 
@property (copy) NSString * orientation; 
@property (assign) double overscanAmount; 
@property (assign) CGSize overscanAmounts; 
@property (assign) BOOL invertsColors; 
@property (getter=isGrayscale) BOOL grayscale; 
@property (assign) float contrast; 
@property (assign) float maximumBrightness; 
@property (assign) float minimumRefreshRate; 
@property (assign) float maximumRefreshRate; 
@property (assign) float idealRefreshRate; 
@property (assign) BOOL usesPreferredModeRefreshRate; 
@property (nonatomic,copy) NSString * colorMode; 
@property (assign) BOOL allowsVirtualModes; 
@property (getter=isMirroringEnabled) BOOL mirroringEnabled;              //@synthesize mirroringEnabled=_mirroringEnabled - In the implementation block
@property (readonly) BOOL supportsExtendedColors; 
@property (assign) long long tag; 
@property (assign) int processId; 
@property (copy) NSString * TVMode; 
@property (copy) NSString * TVSignalType; 
@property (getter=isSecure) BOOL secure; 
@property (assign) BOOL allowsDisplayCompositing; 
@property (assign) BOOL disablesUpdates; 
-(NSString *)colorMode;
-(void)setColorMode:(NSString *)arg1 ;
-(float)minimumRefreshRate;
-(float)maximumRefreshRate;
-(double)overscanAmount;
-(BOOL)supportsExtendedColors;
-(BOOL)allowsVirtualModes;
-(void)setAllowsVirtualModes:(BOOL)arg1 ;
-(BOOL)allowsDisplayCompositing;
-(void)setColorMatrix:(float*)arg1 scale:(float)arg2 rampDuration:(double)arg3 ;
-(unsigned)rendererFlags;
-(unsigned)clientPortOfContextId:(unsigned)arg1 ;
-(unsigned)taskPortOfContextId:(unsigned)arg1 ;
-(BOOL)isMirroringEnabled;
-(void)addClone:(id)arg1 options:(id)arg2 ;
-(id)_initWithCADisplayServer:(Server*)arg1 ;
-(unsigned)contextIdAtPosition:(CGPoint)arg1 ;
-(unsigned)clientPortAtPosition:(CGPoint)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toContextId:(unsigned)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromContextId:(unsigned)arg2 ;
-(NSSet *)clones;
-(void)addClone:(id)arg1 ;
-(void)removeClone:(id)arg1 ;
-(void)removeAllClones;
-(CAWindowServerDisplay *)cloneMaster;
-(void)setBlanked:(BOOL)arg1 ;
-(BOOL)isBlanked;
-(void)willUnblank;
-(void)setOverscanAmount:(double)arg1 ;
-(void)setOverscanAmounts:(CGSize)arg1 ;
-(void)setInvertsColors:(BOOL)arg1 ;
-(BOOL)invertsColors;
-(void)setAccessibilityColorMatrix:(float*)arg1 scale:(float)arg2 ;
-(BOOL)isGrayscale;
-(void)setMaximumBrightness:(float)arg1 ;
-(float)maximumBrightness;
-(void)setMinimumRefreshRate:(float)arg1 ;
-(void)setMaximumRefreshRate:(float)arg1 ;
-(void)setIdealRefreshRate:(float)arg1 ;
-(float)idealRefreshRate;
-(void)setUsesPreferredModeRefreshRate:(BOOL)arg1 ;
-(BOOL)usesPreferredModeRefreshRate;
-(void)setProcessId:(int)arg1 ;
-(void)setTVMode:(NSString *)arg1 ;
-(NSString *)TVMode;
-(void)setTVSignalType:(NSString *)arg1 ;
-(NSString *)TVSignalType;
-(void)setDisablesUpdates:(BOOL)arg1 ;
-(BOOL)disablesUpdates;
-(CGRect)bounds;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)invalidate;
-(void)setOrientation:(NSString *)arg1 ;
-(NSString *)orientation;
-(unsigned)displayId;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(void)setContrast:(float)arg1 ;
-(void)setSecure:(BOOL)arg1 ;
-(BOOL)isSecure;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(void)update;
-(CGSize)overscanAmounts;
-(NSString *)uniqueId;
-(float)contrast;
-(void)setGrayscale:(BOOL)arg1 ;
-(void)setMirroringEnabled:(BOOL)arg1 ;
-(void)freeze;
-(void)setAllowsDisplayCompositing:(BOOL)arg1 ;
-(NSString *)deviceName;
-(int)processId;
@end


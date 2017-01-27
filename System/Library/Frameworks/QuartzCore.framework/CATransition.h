/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAAnimation.h>

@class NSDictionary, NSString;

@interface CATransition : CAAnimation

@property (copy) NSDictionary * options; 
@property (assign) unsigned transitionFlags; 
@property (copy) NSString * type; 
@property (copy) NSString * subtype; 
@property (assign) float startProgress; 
@property (assign) float endProgress; 
@property (retain) id filter; 
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(float)startProgress;
-(unsigned)transitionFlags;
-(void)setStartProgress:(float)arg1 ;
-(void)setEndProgress:(float)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)subtype;
-(void)setSubtype:(NSString *)arg1 ;
-(void)setTransitionFlags:(unsigned)arg1 ;
-(void)setFilter:(id)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(float)endProgress;
-(id)filter;
@end


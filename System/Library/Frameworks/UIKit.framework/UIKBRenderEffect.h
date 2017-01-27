/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIKBGradient;


@protocol UIKBRenderEffect <NSObject,NSCopying>
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL renderUnder; 
@property (nonatomic,readonly) SEL renderSelector; 
@property (assign,nonatomic) double weight; 
@property (nonatomic,readonly) BOOL usesRGBColors; 
@property (nonatomic,readonly) UIKBGradient * gradient; 
@required
-(CGColorRef)CGColor;
-(BOOL)isValid;
-(UIKBGradient *)gradient;
-(double)weight;
-(BOOL)usesRGBColors;
-(BOOL)renderUnder;
-(SEL)renderSelector;
-(void)setWeight:(double)arg1;

@end


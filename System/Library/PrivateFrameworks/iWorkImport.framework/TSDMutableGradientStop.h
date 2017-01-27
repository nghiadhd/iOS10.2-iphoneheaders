/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSDGradientStop.h>

@class TSUColor;

@interface TSDMutableGradientStop : TSDGradientStop

@property (nonatomic,copy) TSUColor * color; 
@property (assign,nonatomic) double fraction; 
@property (assign,nonatomic) double inflection; 
-(void)setInflection:(double)arg1 ;
-(void)setColor:(TSUColor *)arg1 ;
-(void)setFraction:(double)arg1 ;
@end


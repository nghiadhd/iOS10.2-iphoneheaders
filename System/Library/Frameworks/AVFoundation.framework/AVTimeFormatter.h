/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <Foundation/NSFormatter.h>

@class AVTimeFormatterInternal;

@interface AVTimeFormatter : NSFormatter {

	AVTimeFormatterInternal* _internal;

}

@property (assign,nonatomic) long long style; 
@property (assign,nonatomic) double formatTemplate; 
@property (assign,getter=isFullWidth,nonatomic) BOOL fullWidth; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(long long)style;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(id)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(double)formatTemplate;
-(BOOL)isFullWidth;
-(id)cachedDateFormatterFormat;
-(id)cachedDateFormatterTemplate;
-(id)numberFormatterWithOneMinimumIntegerDigits;
-(id)numberFormatterWithTwoMinimumIntegerDigits;
-(void)setFullWidth:(BOOL)arg1 ;
-(void)setFormatTemplate:(double)arg1 ;
-(void)setCachedDateFormatterFormat:(id)arg1 ;
-(void)setCachedDateFormatterTemplate:(id)arg1 ;
-(void)setNumberFormatterWithOneMinimumIntegerDigits:(id)arg1 ;
-(void)setNumberFormatterWithTwoMinimumIntegerDigits:(id)arg1 ;
-(id)stringFromCMTime:(SCD_Struct_AV2)arg1 ;
-(id)stringFromSeconds:(double)arg1 ;
-(id)stringFromTimeInterval:(double)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(void)finalize;
-(void)setIsRightToLeft:(BOOL)arg1 ;
-(BOOL)isRightToLeft;
@end


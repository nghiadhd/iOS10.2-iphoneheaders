/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CIVector : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _count;
	SCD_Union_CI16* _u;

}

@property (readonly) double* _values; 
@property (readonly) unsigned long long count; 
@property (readonly) double X; 
@property (readonly) double Y; 
@property (readonly) double Z; 
@property (readonly) double W; 
@property (readonly) CGPoint CGPointValue; 
@property (readonly) CGRect CGRectValue; 
@property (readonly) CGAffineTransform CGAffineTransformValue; 
@property (readonly) NSString * stringRepresentation; 
+(id)vectorWithString:(id)arg1 ;
+(id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 ;
+(id)vectorWithX:(double)arg1 ;
+(id)vectorWithCGPoint:(CGPoint)arg1 ;
+(id)vectorWithCGAffineTransform:(CGAffineTransform)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)vectorWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4 ;
+(id)vectorWithCGRect:(CGRect)arg1 ;
+(id)vectorWithX:(double)arg1 Y:(double)arg2 ;
+(id)vectorWithValues:(const double*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithValues:(const double*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithX:(double)arg1 ;
-(id)initWithX:(double)arg1 Y:(double)arg2 ;
-(id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 ;
-(id)initWithX:(double)arg1 Y:(double)arg2 Z:(double)arg3 W:(double)arg4 ;
-(id)initWithCGPoint:(CGPoint)arg1 ;
-(id)initWithCGRect:(CGRect)arg1 ;
-(id)initWithCGAffineTransform:(CGAffineTransform)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CGAffineTransform)CGAffineTransformValue;
-(CGRect)CGRectValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)CGPointValue;
-(id)initWithString:(id)arg1 ;
-(NSString *)stringRepresentation;
-(double)X;
-(double)Y;
-(double)valueAtIndex:(unsigned long long)arg1 ;
-(double)Z;
-(double)W;
-(double*)_values;
-(void)finalize;
@end


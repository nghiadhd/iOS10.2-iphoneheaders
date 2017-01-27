/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSNumber.h>

@interface NSDecimalNumber : NSNumber {

	unsigned _exponent : 8;
	unsigned _length : 4;
	unsigned _isNegative : 1;
	unsigned _isCompact : 1;
	unsigned _reserved : 1;
	unsigned _hasExternalRefCount : 1;
	unsigned _refs : 16;
	unsigned short _mantissa[0];

}

@property (readonly) SCD_Struct_NS52 decimalValue; 
@property (readonly) const char* objCType; 
@property (readonly) double doubleValue; 
+(id)zero;
+(id)decimalNumberWithDecimal:(SCD_Struct_NS52)arg1 ;
+(id)notANumber;
+(id)defaultBehavior;
+(id)decimalNumberWithMantissa:(unsigned long long)arg1 exponent:(short)arg2 isNegative:(BOOL)arg3 ;
+(id)decimalNumberWithString:(id)arg1 ;
+(id)minimumDecimalNumber;
+(id)maximumDecimalNumber;
+(id)one;
+(void)setDefaultBehavior:(id)arg1 ;
+(id)numberWithDouble:(double)arg1 ;
+(id)numberWithInteger:(long long)arg1 ;
+(id)numberWithInt:(int)arg1 ;
+(id)numberWithBool:(BOOL)arg1 ;
+(id)numberWithLong:(long long)arg1 ;
+(id)numberWithUnsignedInteger:(unsigned long long)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)numberWithUnsignedInt:(unsigned)arg1 ;
+(id)numberWithFloat:(float)arg1 ;
+(id)numberWithChar:(char)arg1 ;
+(id)numberWithUnsignedLong:(unsigned long long)arg1 ;
+(id)numberWithUnsignedLongLong:(unsigned long long)arg1 ;
+(id)numberWithLongLong:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)numberWithUnsignedShort:(unsigned short)arg1 ;
+(id)numberWithUnsignedChar:(unsigned char)arg1 ;
+(id)numberWithShort:(short)arg1 ;
+(id)decimalNumberWithString:(id)arg1 locale:(id)arg2 ;
-(BOOL)_allowsDirectEncoding;
-(id)decimalNumberByDividingBy:(id)arg1 ;
-(BOOL)_getCString:(char*)arg1 length:(int)arg2 multiplier:(double)arg3 ;
-(id)initWithString:(id)arg1 locale:(id)arg2 ;
-(id)initWithDecimal:(SCD_Struct_NS52)arg1 ;
-(id)initWithMantissa:(unsigned long long)arg1 exponent:(short)arg2 isNegative:(BOOL)arg3 ;
-(id)decimalNumberByAdding:(id)arg1 withBehavior:(id)arg2 ;
-(id)decimalNumberBySubtracting:(id)arg1 withBehavior:(id)arg2 ;
-(id)decimalNumberByMultiplyingBy:(id)arg1 withBehavior:(id)arg2 ;
-(id)decimalNumberByDividingBy:(id)arg1 withBehavior:(id)arg2 ;
-(id)decimalNumberByRaisingToPower:(unsigned long long)arg1 withBehavior:(id)arg2 ;
-(id)decimalNumberByMultiplyingByPowerOf10:(short)arg1 withBehavior:(id)arg2 ;
-(id)decimalNumberByMultiplyingBy:(id)arg1 ;
-(id)decimalNumberByAdding:(id)arg1 ;
-(id)decimalNumberBySubstracting:(id)arg1 ;
-(id)decimalNumberBySubstracting:(id)arg1 withBehavior:(id)arg2 ;
-(id)decimalNumberBySubtracting:(id)arg1 ;
-(id)decimalNumberByRaisingToPower:(unsigned long long)arg1 ;
-(id)decimalNumberByMultiplyingByPowerOf10:(short)arg1 ;
-(id)decimalNumberByRoundingAccordingToBehavior:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copy;
-(double)doubleValue;
-(long long)compare:(id)arg1 ;
-(BOOL)boolValue;
-(int)intValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getValue:(void*)arg1 ;
-(Class)classForCoder;
-(float)floatValue;
-(id)initWithString:(id)arg1 ;
-(unsigned long long)unsignedLongValue;
-(unsigned)unsignedIntValue;
-(long long)longLongValue;
-(const char*)objCType;
-(unsigned long long)unsignedLongLongValue;
-(id)descriptionWithLocale:(id)arg1 ;
-(long long)longValue;
-(short)shortValue;
-(SCD_Struct_NS52)decimalValue;
-(char)charValue;
-(unsigned char)unsignedCharValue;
-(unsigned short)unsignedShortValue;
@end


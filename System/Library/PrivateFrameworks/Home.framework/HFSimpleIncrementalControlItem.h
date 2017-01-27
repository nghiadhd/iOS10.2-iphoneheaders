/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFControlItem.h>

@class NSString, NSNumber;

@interface HFSimpleIncrementalControlItem : HFControlItem {

	NSString* _incrementalCharacteristicType;

}

@property (nonatomic,copy,readonly) NSString * incrementalCharacteristicType;              //@synthesize incrementalCharacteristicType=_incrementalCharacteristicType - In the implementation block
@property (nonatomic,readonly) NSNumber * minValue; 
@property (nonatomic,readonly) NSNumber * maxValue; 
@property (nonatomic,readonly) NSNumber * stepValue; 
+(Class)valueClass;
-(NSNumber *)minValue;
-(NSNumber *)stepValue;
-(id)_metadata;
-(NSNumber *)maxValue;
-(id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 displayResults:(id)arg3 ;
-(id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3 ;
-(id)copyWithCharacteristicTypes:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(NSString *)incrementalCharacteristicType;
-(id)characteristicValuesForValue:(id)arg1 ;
-(id)writeValue:(id)arg1 ;
@end

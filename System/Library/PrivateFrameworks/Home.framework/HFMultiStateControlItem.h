/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFControlItem.h>

@class NSString, HFMultiStateValueSet;

@interface HFMultiStateControlItem : HFControlItem {

	NSString* _multiStateCharacteristicType;
	HFMultiStateValueSet* _possibleValueSet;

}

@property (nonatomic,copy,readonly) NSString * multiStateCharacteristicType;              //@synthesize multiStateCharacteristicType=_multiStateCharacteristicType - In the implementation block
@property (nonatomic,copy,readonly) HFMultiStateValueSet * possibleValueSet;              //@synthesize possibleValueSet=_possibleValueSet - In the implementation block
+(Class)valueClass;
-(id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 possibleValueSet:(id)arg3 displayResults:(id)arg4 ;
-(id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3 ;
-(id)copyWithCharacteristicTypes:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(NSString *)multiStateCharacteristicType;
-(HFMultiStateValueSet *)possibleValueSet;
-(id)characteristicValuesForValue:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMCharacteristicMetadata, NSMutableDictionary, NSSet, NSArray;

@interface HFMultiStateValueSet : NSObject <NSCopying> {

	HMCharacteristicMetadata* _characteristicMetadata;
	/*^block*/id _valueComparator;
	NSMutableDictionary* _displayResultsByValue;

}

@property (nonatomic,readonly) NSMutableDictionary * displayResultsByValue;                    //@synthesize displayResultsByValue=_displayResultsByValue - In the implementation block
@property (nonatomic,readonly) HMCharacteristicMetadata * characteristicMetadata;              //@synthesize characteristicMetadata=_characteristicMetadata - In the implementation block
@property (nonatomic,readonly) NSSet * allValues; 
@property (nonatomic,copy) id valueComparator;                                                 //@synthesize valueComparator=_valueComparator - In the implementation block
@property (nonatomic,readonly) NSArray * sortedValues; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)allValues;
-(id)initWithCharacteristicMetadata:(id)arg1 ;
-(HMCharacteristicMetadata *)characteristicMetadata;
-(BOOL)addValue:(id)arg1 displayResults:(id)arg2 ;
-(void)setValueComparator:(id)arg1 ;
-(NSMutableDictionary *)displayResultsByValue;
-(id)valueComparator;
-(void)removeValue:(id)arg1 ;
-(NSArray *)sortedValues;
-(id)displayResultsForValue:(id)arg1 ;
@end


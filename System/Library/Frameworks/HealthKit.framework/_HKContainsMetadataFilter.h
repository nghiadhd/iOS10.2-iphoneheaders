/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKMetadataFilter.h>

@class NSSet;

@interface _HKContainsMetadataFilter : _HKMetadataFilter {

	NSSet* _allowedValues;

}

@property (nonatomic,readonly) NSSet * allowedValues;              //@synthesize allowedValues=_allowedValues - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)_acceptsOperatorType:(unsigned long long)arg1 ;
+(id)filterWithKey:(id)arg1 operatorType:(unsigned long long)arg2 values:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithKey:(id)arg1 values:(id)arg2 operatorType:(unsigned long long)arg3 ;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(NSSet *)allowedValues;
@end


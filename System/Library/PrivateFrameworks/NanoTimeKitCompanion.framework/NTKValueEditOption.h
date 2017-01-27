/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKEditOption.h>

@interface NTKValueEditOption : NTKEditOption {

	unsigned long long _value;

}
+(BOOL)supportsSecureCoding;
+(id)_snapshotKeyForValue:(unsigned long long)arg1 ;
+(id)_localizedNameForValue:(unsigned long long)arg1 ;
+(id)_nameLocalizationKeyForValue:(unsigned long long)arg1 ;
+(BOOL)_valueIsValid:(unsigned long long)arg1 ;
+(id)_optionWithValue:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)_value;
-(id)localizedName;
-(id)dailySnapshotKey;
-(BOOL)isValidOption;
-(id)JSONObjectRepresentation;
-(id)initWithJSONObjectRepresentation:(id)arg1 ;
-(id)_valueToFaceBundleStringDict;
-(id)_faceBundleStringToValueDict;
@end

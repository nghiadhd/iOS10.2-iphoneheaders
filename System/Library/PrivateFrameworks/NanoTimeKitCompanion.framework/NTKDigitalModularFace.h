/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKFace.h>

@interface NTKDigitalModularFace : NTKFace
+(id)_customEditModes;
+(id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
+(id)_complicationSlotDescriptors;
+(id)_defaultSelectedComplicationSlot;
-(Class)_optionClassForCustomEditMode:(long long)arg1 ;
-(unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(id)_orderedComplicationSlots;
-(id)_localizedNameForComplicationSlot:(id)arg1 ;
-(BOOL)_option:(id)arg1 migratesToValidOption:(id*)arg2 forCustomEditMode:(long long)arg3 ;
-(long long)_editModeForOldEncodingIndex:(long long)arg1 ;
@end


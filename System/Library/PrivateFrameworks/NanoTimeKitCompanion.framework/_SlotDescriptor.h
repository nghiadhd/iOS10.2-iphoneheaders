/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NTKRestrictedApplicationsChangeObserver.h>

@class NSArray, NSString;

@interface _SlotDescriptor : NSObject <NTKRestrictedApplicationsChangeObserver> {

	unsigned long long _slotAllowedTypes;
	long long _family;
	NSArray* _typesRankedList;
	unsigned long long _allowedTypes;

}

@property (nonatomic,readonly) long long family;                             //@synthesize family=_family - In the implementation block
@property (nonatomic,readonly) NSArray * typesRankedList;                    //@synthesize typesRankedList=_typesRankedList - In the implementation block
@property (nonatomic,readonly) unsigned long long allowedTypes;              //@synthesize allowedTypes=_allowedTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorWithComplicationFamily:(long long)arg1 complicationTypesRankedList:(id)arg2 allowedComplicationTypes:(unsigned long long)arg3 ;
-(unsigned long long)allowedTypes;
-(NSArray *)typesRankedList;
-(BOOL)allowsType:(unsigned long long)arg1 ;
-(void)restrictedApplicationsDidChange;
-(long long)family;
@end


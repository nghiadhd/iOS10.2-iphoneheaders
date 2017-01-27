/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOBaseMapItem.h>

@class NSDictionary, GEOMapItemClientAttributes, GEOPlace, NSString, NSDate, GEOAddressObject;

@interface GEOMapItemCoreRoutineEvent : GEOBaseMapItem {

	NSDictionary* _addressDictionary;
	GEOMapItemClientAttributes* _clientAttributes;
	GEOPlace* _place;
	NSString* _eventName;
	NSString* _eventTitle;
	NSDate* _eventDate;
	BOOL _eventIsAllDay;
	SCD_Struct_GE26 _coordinate;
	GEOAddressObject* _addressObject;

}
-(id)initWithEKEvent:(id)arg1 locationOfInterest:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)name;
-(BOOL)isValid;
-(id)_place;
-(id)eventName;
-(id)eventDate;
-(BOOL)isEventAllDay;
-(id)addressObject;
-(id)weatherDisplayName;
-(id)geoAddress;
-(id)addressDictionary;
-(id)_clientAttributes;
-(BOOL)_hasResolvablePartialInformation;
-(id)initWithAddressDictionary:(id)arg1 eventName:(id)arg2 eventTitle:(id)arg3 eventDate:(id)arg4 eventIsAllDay:(BOOL)arg5 coordinate:(SCD_Struct_GE26)arg6 clientAttributes:(id)arg7 ;
-(SCD_Struct_GE26)coordinate;
@end


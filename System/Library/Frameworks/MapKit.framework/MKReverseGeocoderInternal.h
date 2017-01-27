/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKReverseGeocoderDelegate, MKMapServiceTicket;
#import <MapKit/MapKit-Structs.h>
@class MKMapItem;

@interface MKReverseGeocoderInternal : NSObject {

	CLLocationCoordinate2D coordinate;
	id<MKReverseGeocoderDelegate> delegate;
	MKMapItem* mapItem;
	id<MKMapServiceTicket> ticket;
	BOOL querying;

}
@end


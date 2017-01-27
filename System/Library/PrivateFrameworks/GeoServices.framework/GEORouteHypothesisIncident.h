/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEORouteHypothesisIncident : NSObject <NSSecureCoding> {

	int _routeIncidentType;
	int _routeIncidentSignificance;

}

@property (nonatomic,readonly) int routeIncidentType;                      //@synthesize routeIncidentType=_routeIncidentType - In the implementation block
@property (nonatomic,readonly) int routeIncidentSignificance;              //@synthesize routeIncidentSignificance=_routeIncidentSignificance - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(int)routeIncidentType;
-(int)routeIncidentSignificance;
-(id)initWithIncidentType:(int)arg1 incidentSignificance:(int)arg2 ;
@end


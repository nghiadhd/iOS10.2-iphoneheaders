/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkStatistics/NetworkStatistics-Structs.h>
#import <NetworkStatistics/NWStatisticsSource.h>

@class NSData;

@interface NWStatisticsRouteSource : NWStatisticsSource {

	nstat_route_descriptor _descriptor;
	NSData* _destination;
	NSData* _mask;
	NSData* _gateway;

}

@property (retain) NSData * destination;                        //@synthesize destination=_destination - In the implementation block
@property (retain) NSData * mask;                               //@synthesize mask=_mask - In the implementation block
@property (retain) NSData * gateway;                            //@synthesize gateway=_gateway - In the implementation block
@property (readonly) unsigned long long routeID; 
@property (readonly) unsigned long long parentID; 
@property (readonly) unsigned long long gatewayID; 
@property (readonly) long long interface; 
@property (readonly) unsigned long long flags; 
-(id)description;
-(NSData *)mask;
-(void)setMask:(NSData *)arg1 ;
-(NSData *)destination;
-(void)setDestination:(NSData *)arg1 ;
-(long long)interface;
-(unsigned long long)gatewayID;
-(id)initWithManager:(id)arg1 destination:(const sockaddr*)arg2 mask:(const sockaddr*)arg3 interface:(unsigned)arg4 ;
-(id)createCounts;
-(BOOL)handleDescriptor:(void*)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)routeID;
-(NSData *)gateway;
-(void)setGateway:(NSData *)arg1 ;
-(unsigned long long)flags;
-(unsigned long long)parentID;
@end


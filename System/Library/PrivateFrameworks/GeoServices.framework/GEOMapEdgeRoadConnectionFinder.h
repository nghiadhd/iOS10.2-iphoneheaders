/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapEdgeConnectionFinder.h>

@interface GEOMapEdgeRoadConnectionFinder : GEOMapEdgeConnectionFinder
-(void)_findConnectedEdges:(/*^block*/id)arg1 incoming:(BOOL)arg2 ;
-(void)_findConnections:(/*^block*/id)arg1 incoming:(BOOL)arg2 ;
-(BOOL)_isRoadEdgeEqual:(const SCD_Struct_GE80*)arg1 other:(const SCD_Struct_GE80*)arg2 ;
@end


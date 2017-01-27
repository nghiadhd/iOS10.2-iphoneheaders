/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapAccessRestrictions.h>

@class GEOMapAccess, NSString;

@interface GEORoadMatcher : NSObject <GEOMapAccessRestrictions> {

	GEOMapAccess* _map;
	BOOL _useRawLocations;

}

@property (assign,nonatomic) BOOL useRawLocations;                      //@synthesize useRawLocations=_useRawLocations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL allowsNetworkTileLoad; 
-(id)init;
-(void)dealloc;
-(BOOL)allowsNetworkTileLoad;
-(id)matchLocation:(id)arg1 forTransportType:(int)arg2 ;
-(id)_tilesAround:(SCD_Struct_GE26)arg1 radius:(double)arg2 ;
-(id)_bestSegmentForTile:(id)arg1 location:(id)arg2 transportType:(int)arg3 ;
-(BOOL)useRawLocations;
-(void)setUseRawLocations:(BOOL)arg1 ;
@end


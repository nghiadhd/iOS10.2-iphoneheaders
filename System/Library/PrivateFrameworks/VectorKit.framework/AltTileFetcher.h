/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class GEOTileLoader, NSString;

@interface AltTileFetcher : NSObject {

	GEOTileLoader* _geoTileLoader;
	map<_GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob>, GEOTileKeyComp, std::__1::allocator<std::__1::pair<const _GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob> > > >* _keyToJobMap;
	Mutex* _mutex;
	unsigned _numDownloads;
	NSString* _tileLoaderClientIdentifier;

}
-(id)init;
-(void)dealloc;
-(void)reportCorruptTile:(const GEOTileKey*)arg1 ;
-(shared_ptr<altitude::GeoServicesLoadJob>*)getJobForKey:(const GEOTileKey*)arg1 ;
-(void)fetchDataForJob:(shared_ptr<altitude::GeoServicesLoadJob>*)arg1 ;
-(void)cancelJob:(shared_ptr<altitude::GeoServicesLoadJob>*)arg1 ;
-(void)updateJobPriority:(shared_ptr<altitude::GeoServicesLoadJob>*)arg1 ;
-(void)cancelRequests;
-(void)purgeExpired:(double)arg1 ;
-(BOOL)isDownloading;
@end


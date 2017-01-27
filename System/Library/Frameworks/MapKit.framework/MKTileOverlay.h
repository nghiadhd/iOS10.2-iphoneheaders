/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKOverlay.h>

@class NSString, GEOTileCache;

@interface MKTileOverlay : NSObject <MKOverlay> {

	NSString* _URLTemplate;
	CGSize _tileSize;
	BOOL _geometryFlipped;
	long long _minimumZ;
	long long _maximumZ;
	BOOL _canReplaceMapContent;
	unsigned _providerID;
	GEOTileCache* _tileCache;

}

@property (assign) CGSize tileSize;                                            //@synthesize tileSize=_tileSize - In the implementation block
@property (getter=isGeometryFlipped) BOOL geometryFlipped;                     //@synthesize geometryFlipped=_geometryFlipped - In the implementation block
@property (assign) long long minimumZ;                                         //@synthesize minimumZ=_minimumZ - In the implementation block
@property (assign) long long maximumZ;                                         //@synthesize maximumZ=_maximumZ - In the implementation block
@property (readonly) NSString * URLTemplate;                                   //@synthesize URLTemplate=_URLTemplate - In the implementation block
@property (assign,nonatomic) BOOL canReplaceMapContent;                        //@synthesize canReplaceMapContent=_canReplaceMapContent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) SCD_Struct_MK1 boundingMapRect; 
-(id)init;
-(void)dealloc;
-(void)setTileSize:(CGSize)arg1 ;
-(CGSize)tileSize;
-(BOOL)isGeometryFlipped;
-(void)setGeometryFlipped:(BOOL)arg1 ;
-(BOOL)canReplaceMapContent;
-(SCD_Struct_MK1)boundingMapRect;
-(void)loadTileAtPath:(SCD_Struct_MK20)arg1 result:(/*^block*/id)arg2 ;
-(void)_assignProviderID;
-(id)initWithURLTemplate:(id)arg1 ;
-(id)URLForTilePath:(SCD_Struct_MK20)arg1 ;
-(GEOTileKey)_keyForPath:(SCD_Struct_MK20)arg1 ;
-(void)_loadTile:(id)arg1 result:(/*^block*/id)arg2 ;
-(int)_zoomLevelForScale:(double)arg1 ;
-(id)_tilesInMapRect:(SCD_Struct_MK1)arg1 zoomScale:(double)arg2 contentScale:(double)arg3 ;
-(void)_flushCaches;
-(NSString *)URLTemplate;
-(long long)minimumZ;
-(void)setMinimumZ:(long long)arg1 ;
-(long long)maximumZ;
-(void)setMaximumZ:(long long)arg1 ;
-(void)setCanReplaceMapContent:(BOOL)arg1 ;
-(CLLocationCoordinate2D)coordinate;
@end


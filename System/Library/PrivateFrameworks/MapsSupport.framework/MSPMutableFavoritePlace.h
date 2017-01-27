/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <MapsSupport/MSPMutableFavorite.h>
#import <libobjc.A.dylib/MSPFavoritePlace.h>

@class NSString, NSUUID;

@interface MSPMutableFavoritePlace : MSPMutableFavorite <MSPFavoritePlace>

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) id<GEOMapItem> geoMapItem; 
@property (assign,nonatomic) CLLocationCoordinate2D coordinateOfDroppedPin; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * storageIdentifier; 
+(Class)immutableObjectClass;
+(id)immutableObjectProtocol;
+(Class)mutableObjectClass;
+(id)mutableObjectProtocol;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id<GEOMapItem>)geoMapItem;
-(void)setGeoMapItem:(id<GEOMapItem>)arg1 ;
-(id)transferToImmutableIfValidWithError:(out id*)arg1 ;
-(id)initWithBookmarkStorage:(id)arg1 ;
-(void)setCoordinateOfDroppedPin:(CLLocationCoordinate2D)arg1 ;
-(CLLocationCoordinate2D)coordinateOfDroppedPin;
@end


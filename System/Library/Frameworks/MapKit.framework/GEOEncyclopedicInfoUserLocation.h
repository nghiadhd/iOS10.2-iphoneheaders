/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOEncyclopedicInfo.h>

@class NSString, NSArray, GEOMapItemAttribution, MKMapItem;

@interface GEOEncyclopedicInfoUserLocation : NSObject <GEOEncyclopedicInfo> {

	MKMapItem* _mapItem;

}

@property (nonatomic,retain) MKMapItem * mapItem;                                            //@synthesize mapItem=_mapItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasTextBlock; 
@property (nonatomic,readonly) NSString * textBlockTitle; 
@property (nonatomic,readonly) NSString * textBlockText; 
@property (nonatomic,readonly) BOOL hasPairOfFactoids; 
@property (nonatomic,readonly) NSArray * factoids; 
@property (nonatomic,readonly) GEOMapItemAttribution * encyclopedicAttribution; 
-(BOOL)hasTextBlock;
-(NSString *)textBlockTitle;
-(NSString *)textBlockText;
-(BOOL)hasPairOfFactoids;
-(NSArray *)factoids;
-(GEOMapItemAttribution *)encyclopedicAttribution;
-(id)initWithMapItem:(id)arg1 ;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
@end


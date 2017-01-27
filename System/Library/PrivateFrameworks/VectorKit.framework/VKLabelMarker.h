/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKFeatureMarker.h>
#import <libobjc.A.dylib/GEOTransitArtworkDataSource.h>
#import <libobjc.A.dylib/MKCalloutSource.h>

@class NSString, UIView, NSArray;

@interface VKLabelMarker : VKFeatureMarker <GEOTransitArtworkDataSource, MKCalloutSource> {

	shared_ptr<md::LabelMarker>* _labelMarker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long artworkSourceType; 
@property (nonatomic,readonly) long long artworkUseType; 
@property (nonatomic,readonly) id<GEOTransitShieldDataSource> shieldDataSource; 
@property (nonatomic,readonly) id<GEOTransitIconDataSource> iconDataSource; 
@property (nonatomic,readonly) id<GEOTransitShieldDataSource> iconFallbackShieldDataSource; 
@property (nonatomic,readonly) BOOL hasRoutingIncidentBadge; 
@property (nonatomic,readonly) NSString * accessibilityText; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,retain) UIView * leftCalloutAccessoryView; 
@property (nonatomic,retain) UIView * rightCalloutAccessoryView; 
@property (nonatomic,retain) UIView * detailCalloutAccessoryView; 
@property (nonatomic,readonly) NSArray * shields; 
@property (nonatomic,readonly) NSArray * transitSystems; 
@property (nonatomic,readonly) NSArray * dataIconImageKeys; 
@property (nonatomic,readonly) NSArray * iconImageKeys; 
@property (nonatomic,readonly) NSArray * imageKeys; 
@property (nonatomic,readonly) NSArray * relatedTexts; 
@property (nonatomic,readonly) NSArray * relatedSubTexts; 
+(id)markerWithLabelMarker:(const shared_ptr<md::LabelMarker>*)arg1 ;
-(long long)artworkSourceType;
-(long long)artworkUseType;
-(id<GEOTransitShieldDataSource>)shieldDataSource;
-(id<GEOTransitIconDataSource>)iconDataSource;
-(id<GEOTransitShieldDataSource>)iconFallbackShieldDataSource;
-(BOOL)hasRoutingIncidentBadge;
-(NSString *)accessibilityText;
-(id)_annotationTitle;
-(NSString *)title;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(UIView *)leftCalloutAccessoryView;
-(UIView *)rightCalloutAccessoryView;
-(UIView *)detailCalloutAccessoryView;
-(void)setLeftCalloutAccessoryView:(UIView *)arg1 ;
-(void)setDetailCalloutAccessoryView:(UIView *)arg1 ;
-(void)setRightCalloutAccessoryView:(UIView *)arg1 ;
-(id)text;
-(BOOL)isVisible;
-(Box<double, 2>)_bounds;
-(BOOL)isSelectable;
-(id)mapRegion;
-(id)featureHandles;
-(BOOL)hasBusinessID;
-(unsigned long long)businessID;
-(NSArray *)transitSystems;
-(int)featureType;
-(unsigned long long)animationID;
-(int)sortKey;
-(const shared_ptr<md::LabelMarker>*)actualLabelMarker;
-(id)initWithFeatureMarkerPtr:(const shared_ptr<md::FeatureMarker>*)arg1 ;
-(id)initWithLabelMarkerPtr:(const shared_ptr<md::LabelMarker>*)arg1 ;
-(id)subtext;
-(id)iconNameAsNSString;
-(NSArray *)iconImageKeys;
-(BOOL)isAlongSelectedTransitLine;
-(BOOL)isTextVisible;
-(BOOL)isOneWayArrow;
-(BOOL)isFlyoverTour;
-(const unsigned long long*)featureIDs;
-(id)featureTile;
-(CGRect)screenCollisionBounds;
-(BOOL)isLabelHitAtScreenPoint:(CGPoint)arg1 selectableLabelsOnly:(BOOL)arg2 ;
-(BOOL)shouldActivateFeatureSelectionMode;
-(BOOL)isLeafCluster;
-(id)clusterContentBounds;
-(id)clusterFeatureAnnotations;
-(BOOL)isClusterChild;
-(id)parentClusterLabelMarker;
-(void)setLabelPressed:(BOOL)arg1 ;
-(int)selectionType;
-(CGPoint)calloutAnchorPointWithCanvasSize:(CGSize)arg1 canvasScale:(double)arg2 snapToPixels:(BOOL)arg3 ;
-(CGPoint)screenPointToScrollRelativeToWithCanvasSize:(CGSize)arg1 canvasScale:(double)arg2 ;
-(id)debugAnchorPointString;
-(NSArray *)relatedTexts;
-(unsigned long long)countFeatureIDs;
-(NSArray *)imageKeys;
-(BOOL)isTransitLine;
-(NSArray *)relatedSubTexts;
-(CGRect)calloutAnchorRect;
-(id)featureAnnotation;
-(BOOL)isOnRoute;
-(BOOL)isTransit;
-(unsigned long long)clusterFeatureCount;
-(NSArray *)dataIconImageKeys;
-(id)incident;
-(BOOL)isTrafficIncident;
-(NSArray *)shields;
-(CGSize)coordinate;
-(unsigned long long)elementCount;
-(BOOL)isCluster;
@end


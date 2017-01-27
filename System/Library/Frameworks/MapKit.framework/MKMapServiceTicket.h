/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOMapServiceTraits, NSArray, GEOMapRegion, GEORelatedSearchSuggestion, NSString, NSError;


@protocol MKMapServiceTicket <NSObject>
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,readonly) NSArray * exactMapItems; 
@property (nonatomic,readonly) NSArray * refinedMapItems; 
@property (nonatomic,readonly) GEOMapRegion * boundingRegion; 
@property (getter=isChainResultSet,nonatomic,readonly) BOOL chainResultSet; 
@property (nonatomic,readonly) NSArray * relatedSearchSuggestions; 
@property (nonatomic,readonly) GEORelatedSearchSuggestion * defaultRelatedSuggestion; 
@property (nonatomic,readonly) int searchResultType; 
@property (nonatomic,readonly) NSString * resultDisplayHeader; 
@property (nonatomic,readonly) BOOL shouldEnableRedoSearch; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) double requestResponseTime; 
@property (nonatomic,readonly) NSString * sectionHeader; 
@required
-(void)cancel;
-(GEOMapServiceTraits *)traits;
-(NSString *)sectionHeader;
-(int)searchResultType;
-(BOOL)isChainResultSet;
-(NSArray *)relatedSearchSuggestions;
-(NSString *)resultDisplayHeader;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;
-(void)submitWithHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3;
-(void)applyToCorrectedSearch:(id)arg1;
-(void)applyToPlaceInfo:(id)arg1;
-(GEORelatedSearchSuggestion *)defaultRelatedSuggestion;
-(BOOL)shouldEnableRedoSearch;
-(double)requestResponseTime;
-(void)submitWithHandler:(/*^block*/id)arg1 queue:(id)arg2 networkActivity:(/*^block*/id)arg3;
-(NSArray *)exactMapItems;
-(NSArray *)refinedMapItems;
-(GEOMapRegion *)boundingRegion;
-(NSError *)error;

@end


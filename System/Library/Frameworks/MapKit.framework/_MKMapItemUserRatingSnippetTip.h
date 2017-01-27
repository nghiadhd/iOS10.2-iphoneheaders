/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKMapItemProviderRatingSnippet.h>

@class MKMapItem, GEOMapItemTip, NSString, NSDate, NSURL;

@interface _MKMapItemUserRatingSnippetTip : NSObject <MKMapItemProviderRatingSnippet> {

	MKMapItem* _mapItem;
	GEOMapItemTip* _tip;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_score,nonatomic,readonly) double score; 
@property (getter=_maxScore,nonatomic,readonly) double maxScore; 
@property (getter=_normalizedScore,nonatomic,readonly) double normalizedScore; 
@property (getter=_localizedSnippet,nonatomic,readonly) NSString * localizedSnippet; 
@property (getter=_date,nonatomic,readonly) NSDate * date; 
@property (getter=_reviewerName,nonatomic,readonly) NSString * reviewerName; 
@property (getter=_reviewerImageURL,nonatomic,readonly) NSURL * reviewerImageURL; 
@property (getter=_geoReview,nonatomic,readonly) id<GEOMapItemReview> geoReview; 
@property (getter=_geoMapItemTIp,nonatomic,readonly) GEOMapItemTip * geoMapItemTip; 
-(double)_maxScore;
-(double)_score;
-(id)_date;
-(double)_normalizedScore;
-(id)_localizedSnippet;
-(id)_reviewerName;
-(void)showWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_reviewerImageURL;
-(id)_geoReview;
-(id)_geoMapItemTIp;
-(id)initWithMapItem:(id)arg1 review:(id)arg2 ;
@end


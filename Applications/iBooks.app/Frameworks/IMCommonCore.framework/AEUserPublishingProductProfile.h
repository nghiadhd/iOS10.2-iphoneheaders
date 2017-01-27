/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:59:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCommonCore/IMCommonCore-Structs.h>
#import <IMCommonCore/BKSeriesDataItem.h>

@class NSString, NSNumber, NSArray, NSDictionary, NSURL;

@interface AEUserPublishingProductProfile : NSObject <BKSeriesDataItem> {

	NSDictionary* _profileDictionary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * series_adamId; 
@property (nonatomic,readonly) NSString * series_sortTitle; 
@property (nonatomic,readonly) NSString * series_title; 
@property (nonatomic,readonly) NSString * series_sortAuthor; 
@property (nonatomic,readonly) NSString * series_author; 
@property (nonatomic,readonly) NSNumber * series_isExplicit; 
@property (nonatomic,readonly) NSString * series_formattedPrice; 
@property (nonatomic,readonly) NSArray * series_genres; 
@property (nonatomic,readonly) NSString * series_genre; 
@property (nonatomic,readonly) NSString * seriesID; 
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) NSArray * childrenIDs; 
@property (nonatomic,readonly) BOOL isSeries; 
@property (nonatomic,readonly) BOOL isExplicit; 
@property (nonatomic,readonly) NSString * buyParameters; 
@property (nonatomic,readonly) NSString * priceString; 
@property (nonatomic,readonly) BOOL isPreorder; 
@property (nonatomic,readonly) NSDictionary * profileDictionary;              //@synthesize profileDictionary=_profileDictionary - In the implementation block
@property (nonatomic,readonly) NSString * adamId; 
@property (nonatomic,readonly) NSString * author; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * standardDescription; 
@property (nonatomic,readonly) NSString * standardNotes; 
@property (nonatomic,readonly) double averageRating; 
@property (nonatomic,readonly) unsigned long long ratingCount; 
@property (nonatomic,readonly) NSURL * productURL; 
@property (nonatomic,readonly) NSURL * bookSampleDownloadURL; 
@property (nonatomic,readonly) NSString * kind; 
-(NSArray *)series_genres;
-(id)series_seriesInfo;
-(unsigned long long)series_position;
-(NSString *)series_genre;
-(NSString *)series_adamId;
-(NSString *)series_sortTitle;
-(NSString *)series_sortAuthor;
-(NSString *)series_title;
-(NSString *)series_author;
-(NSNumber *)series_isExplicit;
-(id)series_seriesId;
-(id)series_seriesTitle;
-(id)series_displayLabel;
-(NSString *)series_formattedPrice;
-(NSDictionary *)profileDictionary;
-(id)urlForCoverImageOfSize:(CGSize)arg1 aspect:(double*)arg2 ;
-(BOOL)_isContentRatingExplicitForInfo:(id)arg1 ;
-(id)_offer;
-(id)artworkURLTemplateAspect:(double*)arg1 ;
-(id)urlForCoverImageOfSize:(CGSize)arg1 ;
-(id)actionTextWithType:(long long)arg1 ;
-(NSString *)standardDescription;
-(NSURL *)bookSampleDownloadURL;
-(NSArray *)childrenIDs;
-(NSString *)seriesID;
-(BOOL)isSeries;
-(NSString *)description;
-(id)objectForKey:(id)arg1 ;
-(NSString *)title;
-(NSString *)kind;
-(NSString *)author;
-(BOOL)isPreorder;
-(double)averageRating;
-(BOOL)isExplicit;
-(NSString *)buyParameters;
-(NSURL *)productURL;
-(NSArray *)children;
-(NSString *)standardNotes;
-(NSString *)priceString;
-(unsigned long long)ratingCount;
-(id)initWithProfileDictionary:(id)arg1 ;
-(NSString *)adamId;
@end


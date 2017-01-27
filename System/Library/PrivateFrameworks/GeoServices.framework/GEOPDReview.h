/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDRating, NSString, GEOPDUser, NSMutableArray;

@interface GEOPDReview : PBCodable <NSCopying> {

	double _reviewTime;
	GEOPDRating* _rating;
	NSString* _reviewId;
	GEOPDUser* _reviewer;
	NSMutableArray* _snippets;
	SCD_Struct_GE15 _has;

}

@property (nonatomic,retain) NSMutableArray * snippets;              //@synthesize snippets=_snippets - In the implementation block
@property (assign,nonatomic) BOOL hasReviewTime; 
@property (assign,nonatomic) double reviewTime;                      //@synthesize reviewTime=_reviewTime - In the implementation block
@property (nonatomic,readonly) BOOL hasReviewer; 
@property (nonatomic,retain) GEOPDUser * reviewer;                   //@synthesize reviewer=_reviewer - In the implementation block
@property (nonatomic,readonly) BOOL hasReviewId; 
@property (nonatomic,retain) NSString * reviewId;                    //@synthesize reviewId=_reviewId - In the implementation block
@property (nonatomic,readonly) BOOL hasRating; 
@property (nonatomic,retain) GEOPDRating * rating;                   //@synthesize rating=_rating - In the implementation block
+(id)reviewsForPlaceData:(id)arg1 ;
+(Class)snippetType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setReviewTime:(double)arg1 ;
-(void)setHasReviewTime:(BOOL)arg1 ;
-(BOOL)hasReviewTime;
-(BOOL)hasReviewer;
-(double)reviewTime;
-(GEOPDUser *)reviewer;
-(void)setReviewer:(GEOPDUser *)arg1 ;
-(id)_bestSnippet;
-(void)clearSnippets;
-(void)addSnippet:(id)arg1 ;
-(unsigned long long)snippetsCount;
-(id)snippetAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasReviewId;
-(BOOL)hasRating;
-(NSMutableArray *)snippets;
-(void)setSnippets:(NSMutableArray *)arg1 ;
-(NSString *)reviewId;
-(void)setReviewId:(NSString *)arg1 ;
-(GEOPDRating *)rating;
-(void)setRating:(GEOPDRating *)arg1 ;
@end


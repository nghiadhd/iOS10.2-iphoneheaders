/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUIDecoratedText, SASTTemplatePercentageRating, NSString;

@interface SASTMovieRatingReviewItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SAUIDecoratedText * reviews; 
@property (nonatomic,retain) SASTTemplatePercentageRating * templatePercentageRating; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)movieRatingReviewItem;
+(id)movieRatingReviewItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAUIDecoratedText *)reviews;
-(void)setReviews:(SAUIDecoratedText *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SASTTemplatePercentageRating *)templatePercentageRating;
-(void)setTemplatePercentageRating:(SASTTemplatePercentageRating *)arg1 ;
@end


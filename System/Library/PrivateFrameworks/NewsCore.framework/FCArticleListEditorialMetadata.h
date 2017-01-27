/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSDictionary;

@interface FCArticleListEditorialMetadata : NSObject {

	NSDate* _publishDate;
	NSDictionary* _articleMetadata;

}

@property (nonatomic,retain) NSDate * publishDate;                        //@synthesize publishDate=_publishDate - In the implementation block
@property (nonatomic,retain) NSDictionary * articleMetadata;              //@synthesize articleMetadata=_articleMetadata - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSDate *)publishDate;
-(void)setPublishDate:(NSDate *)arg1 ;
-(NSDictionary *)articleMetadata;
-(void)setArticleMetadata:(NSDictionary *)arg1 ;
@end


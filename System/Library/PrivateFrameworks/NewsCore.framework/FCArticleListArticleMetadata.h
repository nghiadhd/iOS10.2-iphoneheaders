/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSDictionary, NSString;

@interface FCArticleListArticleMetadata : NSObject {

	NSDate* _displayDate;
	NSDictionary* _dictionary;

}

@property (nonatomic,retain) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) NSDate * displayDate;                   //@synthesize displayDate=_displayDate - In the implementation block
@property (nonatomic,readonly) BOOL isTreatedAsNew; 
@property (nonatomic,readonly) NSString * storyType; 
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionary;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(NSDate *)displayDate;
-(NSString *)storyType;
-(void)setDisplayDate:(NSDate *)arg1 ;
-(BOOL)isTreatedAsNew;
@end


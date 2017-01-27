/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <SafariShared/WBSAutomaticReadingListItem.h>

@class NSString, NSURL;

@interface WBSAutomaticReadingListWebFeedItem : WBSAutomaticReadingListItem {

	NSString* _feedURLString;
	NSString* _originatorProfileImageURLString;
	NSString* _title;
	NSURL* _homepageURL;

}

@property (nonatomic,copy) NSString * originatorProfileImageURLString;              //@synthesize originatorProfileImageURLString=_originatorProfileImageURLString - In the implementation block
@property (nonatomic,copy) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * feedURLString;                                //@synthesize feedURLString=_feedURLString - In the implementation block
@property (nonatomic,copy) NSURL * homepageURL;                                     //@synthesize homepageURL=_homepageURL - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(id)displayString;
-(NSString *)title;
-(id)initWithDictionary:(id)arg1 socialSourceAccountIdentifier:(id)arg2 ;
-(id)socialSource;
-(id)originatorProfileImageURL;
-(id)biggerOriginatorProfileImageURL;
-(id)sourceRecordURL;
-(id)originatorProfileURL;
-(id)continuousBannerDisplayString;
-(id)continuousBannerTitle;
-(NSRange)emphasizedTextRange;
-(BOOL)isAcceptableOriginatorProfileImage:(id)arg1 ;
-(NSString *)originatorProfileImageURLString;
-(void)setOriginatorProfileImageURLString:(NSString *)arg1 ;
-(NSString *)feedURLString;
-(void)setFeedURLString:(NSString *)arg1 ;
-(NSURL *)homepageURL;
-(void)setHomepageURL:(NSURL *)arg1 ;
@end


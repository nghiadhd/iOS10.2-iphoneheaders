/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFCardSection.h>

@class SFMediaItem, NSArray, SFActionItem, NSString;

@interface SFMediaInfoCardSection : SFCardSection {

	BOOL _isMediaContainer;
	SFMediaItem* _mediaItem;
	NSArray* _details;
	SFActionItem* _playAction;
	NSArray* _offers;
	NSString* _watchListIdentifier;
	NSString* _watchListButtonLabel;
	NSString* _watchListContinuationText;
	NSString* _watchListConfirmationText;

}

@property (nonatomic,retain) SFMediaItem * mediaItem;                         //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,copy) NSArray * details;                                 //@synthesize details=_details - In the implementation block
@property (nonatomic,retain) SFActionItem * playAction;                       //@synthesize playAction=_playAction - In the implementation block
@property (nonatomic,copy) NSArray * offers;                                  //@synthesize offers=_offers - In the implementation block
@property (nonatomic,copy) NSString * watchListIdentifier;                    //@synthesize watchListIdentifier=_watchListIdentifier - In the implementation block
@property (nonatomic,copy) NSString * watchListButtonLabel;                   //@synthesize watchListButtonLabel=_watchListButtonLabel - In the implementation block
@property (nonatomic,copy) NSString * watchListContinuationText;              //@synthesize watchListContinuationText=_watchListContinuationText - In the implementation block
@property (nonatomic,copy) NSString * watchListConfirmationText;              //@synthesize watchListConfirmationText=_watchListConfirmationText - In the implementation block
@property (assign,nonatomic) BOOL isMediaContainer;                           //@synthesize isMediaContainer=_isMediaContainer - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)details;
-(void)setDetails:(NSArray *)arg1 ;
-(void)setOffers:(NSArray *)arg1 ;
-(NSArray *)offers;
-(SFMediaItem *)mediaItem;
-(void)setMediaItem:(SFMediaItem *)arg1 ;
-(SFActionItem *)playAction;
-(NSString *)watchListIdentifier;
-(NSString *)watchListButtonLabel;
-(NSString *)watchListContinuationText;
-(BOOL)isMediaContainer;
-(NSString *)watchListConfirmationText;
-(void)setPlayAction:(SFActionItem *)arg1 ;
-(void)setWatchListIdentifier:(NSString *)arg1 ;
-(void)setWatchListButtonLabel:(NSString *)arg1 ;
-(void)setWatchListConfirmationText:(NSString *)arg1 ;
-(void)setWatchListContinuationText:(NSString *)arg1 ;
-(void)setIsMediaContainer:(BOOL)arg1 ;
@end


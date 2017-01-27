/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFTitleCardSection.h>

@class NSString, SFImage, NSNumber, NSArray, SFActionItem;

@interface SFRichTitleCardSection : SFTitleCardSection {

	BOOL _isCentered;
	BOOL _reviewNewLine;
	BOOL _hideVerticalDivider;
	BOOL _titleNoWrap;
	BOOL _thumbnailCropCircle;
	NSString* _contentAdvisory;
	SFImage* _titleImage;
	NSString* _descriptionText;
	NSNumber* _rating;
	NSString* _ratingText;
	SFImage* _reviewGlyph;
	NSString* _reviewText;
	NSArray* _moreGlyphs;
	NSString* _auxiliaryTopText;
	NSString* _auxiliaryMiddleText;
	NSString* _auxiliaryBottomText;
	unsigned long long _auxiliaryBottomTextColor;
	NSNumber* _auxiliaryAlignment;
	unsigned long long _titleAlign;
	NSNumber* _titleWeight;
	SFImage* _imageOverlay;
	SFActionItem* _playAction;
	unsigned long long _playActionAlign;
	NSArray* _offers;

}

@property (nonatomic,copy) NSString * contentAdvisory;                                 //@synthesize contentAdvisory=_contentAdvisory - In the implementation block
@property (nonatomic,retain) SFImage * titleImage;                                     //@synthesize titleImage=_titleImage - In the implementation block
@property (assign,nonatomic) BOOL isCentered;                                          //@synthesize isCentered=_isCentered - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                                 //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) NSNumber * rating;                                          //@synthesize rating=_rating - In the implementation block
@property (nonatomic,copy) NSString * ratingText;                                      //@synthesize ratingText=_ratingText - In the implementation block
@property (nonatomic,retain) SFImage * reviewGlyph;                                    //@synthesize reviewGlyph=_reviewGlyph - In the implementation block
@property (nonatomic,copy) NSString * reviewText;                                      //@synthesize reviewText=_reviewText - In the implementation block
@property (assign,nonatomic) BOOL reviewNewLine;                                       //@synthesize reviewNewLine=_reviewNewLine - In the implementation block
@property (nonatomic,copy) NSArray * moreGlyphs;                                       //@synthesize moreGlyphs=_moreGlyphs - In the implementation block
@property (nonatomic,copy) NSString * auxiliaryTopText;                                //@synthesize auxiliaryTopText=_auxiliaryTopText - In the implementation block
@property (nonatomic,copy) NSString * auxiliaryMiddleText;                             //@synthesize auxiliaryMiddleText=_auxiliaryMiddleText - In the implementation block
@property (nonatomic,copy) NSString * auxiliaryBottomText;                             //@synthesize auxiliaryBottomText=_auxiliaryBottomText - In the implementation block
@property (assign,nonatomic) unsigned long long auxiliaryBottomTextColor;              //@synthesize auxiliaryBottomTextColor=_auxiliaryBottomTextColor - In the implementation block
@property (nonatomic,copy) NSNumber * auxiliaryAlignment;                              //@synthesize auxiliaryAlignment=_auxiliaryAlignment - In the implementation block
@property (assign,nonatomic) BOOL hideVerticalDivider;                                 //@synthesize hideVerticalDivider=_hideVerticalDivider - In the implementation block
@property (assign,nonatomic) unsigned long long titleAlign;                            //@synthesize titleAlign=_titleAlign - In the implementation block
@property (nonatomic,copy) NSNumber * titleWeight;                                     //@synthesize titleWeight=_titleWeight - In the implementation block
@property (assign,nonatomic) BOOL titleNoWrap;                                         //@synthesize titleNoWrap=_titleNoWrap - In the implementation block
@property (assign,nonatomic) BOOL thumbnailCropCircle;                                 //@synthesize thumbnailCropCircle=_thumbnailCropCircle - In the implementation block
@property (nonatomic,retain) SFImage * imageOverlay;                                   //@synthesize imageOverlay=_imageOverlay - In the implementation block
@property (nonatomic,retain) SFActionItem * playAction;                                //@synthesize playAction=_playAction - In the implementation block
@property (assign,nonatomic) unsigned long long playActionAlign;                       //@synthesize playActionAlign=_playActionAlign - In the implementation block
@property (nonatomic,copy) NSArray * offers;                                           //@synthesize offers=_offers - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)rating;
-(void)setRating:(NSNumber *)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)reviewText;
-(SFImage *)titleImage;
-(void)setTitleImage:(SFImage *)arg1 ;
-(void)setOffers:(NSArray *)arg1 ;
-(NSString *)contentAdvisory;
-(void)setContentAdvisory:(NSString *)arg1 ;
-(NSArray *)moreGlyphs;
-(void)setMoreGlyphs:(NSArray *)arg1 ;
-(void)setReviewText:(NSString *)arg1 ;
-(NSNumber *)titleWeight;
-(BOOL)isCentered;
-(NSArray *)offers;
-(NSString *)ratingText;
-(void)setRatingText:(NSString *)arg1 ;
-(SFImage *)reviewGlyph;
-(NSString *)auxiliaryTopText;
-(NSString *)auxiliaryBottomText;
-(NSString *)auxiliaryMiddleText;
-(unsigned long long)auxiliaryBottomTextColor;
-(SFActionItem *)playAction;
-(void)setAuxiliaryTopText:(NSString *)arg1 ;
-(BOOL)reviewNewLine;
-(NSNumber *)auxiliaryAlignment;
-(BOOL)hideVerticalDivider;
-(unsigned long long)titleAlign;
-(BOOL)titleNoWrap;
-(BOOL)thumbnailCropCircle;
-(SFImage *)imageOverlay;
-(unsigned long long)playActionAlign;
-(void)setIsCentered:(BOOL)arg1 ;
-(void)setReviewGlyph:(SFImage *)arg1 ;
-(void)setReviewNewLine:(BOOL)arg1 ;
-(void)setAuxiliaryMiddleText:(NSString *)arg1 ;
-(void)setAuxiliaryBottomText:(NSString *)arg1 ;
-(void)setAuxiliaryBottomTextColor:(unsigned long long)arg1 ;
-(void)setAuxiliaryAlignment:(NSNumber *)arg1 ;
-(void)setHideVerticalDivider:(BOOL)arg1 ;
-(void)setTitleAlign:(unsigned long long)arg1 ;
-(void)setTitleWeight:(NSNumber *)arg1 ;
-(void)setThumbnailCropCircle:(BOOL)arg1 ;
-(void)setImageOverlay:(SFImage *)arg1 ;
-(void)setPlayAction:(SFActionItem *)arg1 ;
-(void)setPlayActionAlign:(unsigned long long)arg1 ;
-(void)setTitleNoWrap:(BOOL)arg1 ;
@end


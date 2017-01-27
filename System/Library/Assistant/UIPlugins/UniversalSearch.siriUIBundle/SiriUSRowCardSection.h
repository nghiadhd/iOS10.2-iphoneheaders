/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/UniversalSearch.siriUIBundle/UniversalSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UniversalSearch/SiriUSCardSection.h>
#import <UniversalSearch/SearchUIRowCardSection.h>

@class UIImage, NSString, NSURL, NSArray;

@interface SiriUSRowCardSection : SiriUSCardSection <SearchUIRowCardSection> {

	BOOL _imageIsRightAligned;
	UIImage* _image;
	NSString* _leftText;
	NSString* _rightText;

}

@property (nonatomic,retain) UIImage * image;                                      //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * leftText;                                    //@synthesize leftText=_leftText - In the implementation block
@property (nonatomic,copy) NSString * rightText;                                   //@synthesize rightText=_rightText - In the implementation block
@property (assign,nonatomic) BOOL imageIsRightAligned;                             //@synthesize imageIsRightAligned=_imageIsRightAligned - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,readonly) BOOL hideDivider; 
@property (nonatomic,readonly) BOOL hasTopPadding; 
@property (nonatomic,readonly) BOOL hasBottomPadding; 
@property (nonatomic,readonly) NSString * punchoutPickerLabel; 
@property (nonatomic,readonly) NSString * punchoutPickerDismissLabel; 
@property (nonatomic,readonly) NSArray * punchoutOptions; 
@property (nonatomic,readonly) double imageCornerRadius; 
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)type;
-(UIImage *)image;
-(NSString *)leftText;
-(void)setLeftText:(NSString *)arg1 ;
-(NSString *)rightText;
-(void)setRightText:(NSString *)arg1 ;
-(BOOL)imageIsRightAligned;
-(void)setImageIsRightAligned:(BOOL)arg1 ;
@end


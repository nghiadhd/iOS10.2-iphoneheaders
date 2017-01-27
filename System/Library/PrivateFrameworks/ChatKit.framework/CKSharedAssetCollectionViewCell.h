/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIView, UILabel, NSString;

@interface CKSharedAssetCollectionViewCell : UICollectionViewCell {

	UIView* _previewView;
	UILabel* _previewTitleLabel;
	NSString* _name;
	NSString* _url;
	UIView* _previewTitleContainerView;

}

@property (nonatomic,retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) UIView * previewTitleContainerView;              //@synthesize previewTitleContainerView=_previewTitleContainerView - In the implementation block
@property (nonatomic,retain) UIView * previewView;                            //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,retain) UILabel * previewTitleLabel;                     //@synthesize previewTitleLabel=_previewTitleLabel - In the implementation block
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)cornerRadius;
-(void)layoutSubviews;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(UILabel *)previewTitleLabel;
-(id)formattedTitleFromPreviewTitle:(id)arg1 ;
-(UIView *)previewView;
-(UIView *)previewTitleContainerView;
-(void)setPreviewView:(UIView *)arg1 ;
-(void)setPreviewTitleLabel:(UILabel *)arg1 ;
-(void)setPreviewTitleContainerView:(UIView *)arg1 ;
@end


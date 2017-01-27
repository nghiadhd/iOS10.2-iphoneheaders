/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptLabelCell.h>

@class UIButton, NSAttributedString;

@interface CKTranscriptReportSpamCell : CKTranscriptLabelCell {

	UIButton* _reportSpamButton;

}

@property (nonatomic,copy) NSAttributedString * attributedButtonText; 
@property (nonatomic,retain) UIButton * reportSpamButton;                          //@synthesize reportSpamButton=_reportSpamButton - In the implementation block
+(id)reportSpamButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)clearFilters;
-(void)addFilter:(id)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)configureForChatItem:(id)arg1 ;
-(UIButton *)reportSpamButton;
-(void)setAttributedButtonText:(NSAttributedString *)arg1 ;
-(void)setReportSpamButton:(UIButton *)arg1 ;
-(NSAttributedString *)attributedButtonText;
@end


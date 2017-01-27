/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNLabeledCell.h>

@protocol CNPropertyCellDelegate;
@class UILabel;

@interface CNLinkedCardsCell : CNLabeledCell {

	id<CNPropertyCellDelegate> _delegate;
	UILabel* _sourceLabel;
	UILabel* _nameLabel;

}

@property (nonatomic,readonly) UILabel * sourceLabel;                                 //@synthesize sourceLabel=_sourceLabel - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                                   //@synthesize nameLabel=_nameLabel - In the implementation block
@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)wantsChevron;
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(id<CNPropertyCellDelegate>)delegate;
-(id)valueView;
-(UILabel *)nameLabel;
-(void)setCardGroupItem:(id)arg1 ;
-(void)performDefaultAction;
-(UILabel *)sourceLabel;
-(BOOL)shouldPerformDefaultAction;
-(id)labelView;
@end


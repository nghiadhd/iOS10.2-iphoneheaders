/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNLabeledCell.h>

@class UILabel, CNTransportButton, CNCardActionGroupItem, CNContactAction;

@interface CNContactActionCell : CNLabeledCell {

	UILabel* _label;
	CNTransportButton* _transportIcon;

}

@property (nonatomic,retain) UILabel * label;                                        //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) CNTransportButton * transportIcon;                      //@synthesize transportIcon=_transportIcon - In the implementation block
@property (nonatomic,readonly) CNCardActionGroupItem * actionGroupItem; 
@property (nonatomic,readonly) CNContactAction * action; 
-(CNContactAction *)action;
-(void)tintColorDidChange;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setLabelTextAttributes:(id)arg1 ;
-(void)setCardGroupItem:(id)arg1 ;
-(CNTransportButton *)transportIcon;
-(void)setTransportIcon:(CNTransportButton *)arg1 ;
-(CNCardActionGroupItem *)actionGroupItem;
-(id)variableConstraints;
-(double)minCellHeight;
-(BOOL)shouldPerformDefaultAction;
-(id)labelView;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNLabeledCell.h>

@class UILabel;

@interface CNPropertyPlaceholderCell : CNLabeledCell {

	UILabel* _label;

}

@property (nonatomic,readonly) UILabel * label;              //@synthesize label=_label - In the implementation block
-(UILabel *)label;
-(void)setCardGroupItem:(id)arg1 ;
-(double)minCellHeight;
-(BOOL)shouldPerformDefaultAction;
-(id)labelView;
@end


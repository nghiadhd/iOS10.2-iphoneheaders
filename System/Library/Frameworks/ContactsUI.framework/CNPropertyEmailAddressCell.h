/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertySimpleTransportCell.h>

@interface CNPropertyEmailAddressCell : CNPropertySimpleTransportCell {

	BOOL _VIP;

}

@property (assign,getter=isVIP,nonatomic) BOOL VIP;              //@synthesize VIP=_VIP - In the implementation block
-(void)setVIP:(BOOL)arg1 ;
-(void)updateTransportButtons;
-(BOOL)shouldShowStar;
-(BOOL)isVIP;
-(BOOL)shouldPerformDefaultAction;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/WiFiPicker.servicebundle/WiFiPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@protocol WFWiFiAlertItemDelegate;
@interface WFWiFiIsEnterpriseAlert : SBAlertItem {

	id<WFWiFiAlertItemDelegate> _delegate;

}

@property (assign,nonatomic) id<WFWiFiAlertItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<WFWiFiAlertItemDelegate>)arg1 ;
-(id<WFWiFiAlertItemDelegate>)delegate;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)dismiss:(int)arg1 ;
-(BOOL)supportsAlertController;
@end


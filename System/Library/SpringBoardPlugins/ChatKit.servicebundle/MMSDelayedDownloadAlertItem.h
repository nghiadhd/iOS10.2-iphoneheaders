/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/ChatKit.servicebundle/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface MMSDelayedDownloadAlertItem : SBAlertItem {

	NSString* _fromAddress;
	long long _messageCount;

}
-(void)setAddress:(id)arg1 ;
-(void)setMessageCount:(long long)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)_showNetworkPrefs;
@end


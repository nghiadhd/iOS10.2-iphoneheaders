/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel;

@interface CloudStorageDataAndMailBarButtonView : UIView {

	UILabel* _data;
	UILabel* _dataSizes;
	UILabel* _mail;
	UILabel* _mailSizes;

}
+(id)barButtonItemWithData:(id)arg1 andMail:(id)arg2 ;
-(id)initWithData:(id)arg1 andMail:(id)arg2 ;
-(void)layoutSubviews;
-(void)sizeToFit;
@end


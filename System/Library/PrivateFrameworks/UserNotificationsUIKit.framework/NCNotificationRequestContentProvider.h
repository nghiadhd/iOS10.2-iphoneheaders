/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NCNotificationStaticContentProviding.h>

@protocol NCNotificationStaticContentProvidingDelegate;
@class UIImage, NSString, NSDate, NSTimeZone, NSArray, NCNotificationRequest;

@interface NCNotificationRequestContentProvider : NSObject <NCNotificationStaticContentProviding> {

	id<NCNotificationStaticContentProvidingDelegate> _delegate;
	NCNotificationRequest* _notificationRequest;

}

@property (nonatomic,retain) NCNotificationRequest * notificationRequest;                                   //@synthesize notificationRequest=_notificationRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NCNotificationStaticContentProvidingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIImage * icon; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSDate * date; 
@property (getter=isDateAllDay,nonatomic,readonly) BOOL dateAllDay; 
@property (nonatomic,copy,readonly) NSTimeZone * timeZone; 
@property (nonatomic,copy,readonly) NSString * primaryText; 
@property (nonatomic,copy,readonly) NSString * primarySubtitleText; 
@property (nonatomic,copy,readonly) NSString * secondaryText; 
@property (nonatomic,copy,readonly) NSString * hintText; 
@property (nonatomic,readonly) UIImage * thumbnail; 
@property (nonatomic,copy,readonly) id cancelAction; 
@property (nonatomic,copy,readonly) id clearAction; 
@property (nonatomic,copy,readonly) id closeAction; 
@property (nonatomic,copy,readonly) id defaultAction; 
@property (nonatomic,readonly) NSArray * interfaceActions; 
@property (nonatomic,readonly) unsigned long long messageNumberOfLines; 
-(id)init;
-(void)setDelegate:(id<NCNotificationStaticContentProvidingDelegate>)arg1 ;
-(id<NCNotificationStaticContentProvidingDelegate>)delegate;
-(NSString *)title;
-(NSDate *)date;
-(id)cancelAction;
-(NSTimeZone *)timeZone;
-(UIImage *)icon;
-(UIImage *)thumbnail;
-(id)defaultAction;
-(NSString *)secondaryText;
-(NSArray *)interfaceActions;
-(NCNotificationRequest *)notificationRequest;
-(id)initWithNotificationRequest:(id)arg1 ;
-(BOOL)isDateAllDay;
-(NSString *)primarySubtitleText;
-(id)clearAction;
-(id)closeAction;
-(void)setNotificationRequest:(NCNotificationRequest *)arg1 ;
-(NSString *)hintText;
-(unsigned long long)messageNumberOfLines;
-(/*^block*/id)_actionForNotificationAction:(id)arg1 ;
-(id)_appBundleIdentifer;
-(NSString *)primaryText;
@end


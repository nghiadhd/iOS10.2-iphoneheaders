/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class ASPurchasedPage;


@protocol ASChildPurchasedViewController <NSObject>
@property (assign,nonatomic,__weak) id<ASChildPurchasedViewControllerDelegate> delegate; 
@property (nonatomic,retain) ASPurchasedPage * page; 
@required
-(void)setDelegate:(id)arg1;
-(id<ASChildPurchasedViewControllerDelegate>)delegate;
-(ASPurchasedPage *)page;
-(void)setPage:(id)arg1;

@end


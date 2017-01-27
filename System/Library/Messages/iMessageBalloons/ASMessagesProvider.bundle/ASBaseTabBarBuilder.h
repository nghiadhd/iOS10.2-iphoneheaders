/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKUIClientContext;

@interface ASBaseTabBarBuilder : NSObject {

	SKUIClientContext* _clientContext;
	long long _style;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic) long long style;                                //@synthesize style=_style - In the implementation block
-(id)initWithContext:(id)arg1 style:(long long)arg2 ;
-(BOOL)configureTabBarItem:(id)arg1 withLocalizationProvider:(/*^block*/id)arg2 ;
-(id)buildWithDefaultItems:(id)arg1 shouldLoadItemsFromStore:(BOOL)arg2 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
@end


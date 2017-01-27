/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class HFTransformItemProvider;

@interface HUCCPageItemManager : HFItemManager {

	BOOL _homeAppRemoved;
	HFTransformItemProvider* _actionSetPageItemProvider;
	HFTransformItemProvider* _servicePageItemProvider;

}

@property (nonatomic,retain) HFTransformItemProvider * actionSetPageItemProvider;              //@synthesize actionSetPageItemProvider=_actionSetPageItemProvider - In the implementation block
@property (nonatomic,retain) HFTransformItemProvider * servicePageItemProvider;                //@synthesize servicePageItemProvider=_servicePageItemProvider - In the implementation block
@property (assign,getter=isHomeAppRemoved,nonatomic) BOOL homeAppRemoved;                      //@synthesize homeAppRemoved=_homeAppRemoved - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowScenesPage; 
@property (nonatomic,readonly) BOOL shouldShowServicesPage; 
-(void)_createItemProvidersWithHome:(id)arg1 ;
-(id)_itemProviders;
-(void)setActionSetPageItemProvider:(HFTransformItemProvider *)arg1 ;
-(void)setServicePageItemProvider:(HFTransformItemProvider *)arg1 ;
-(HFTransformItemProvider *)actionSetPageItemProvider;
-(HFTransformItemProvider *)servicePageItemProvider;
-(BOOL)isHomeAppRemoved;
-(void)setHomeAppRemoved:(BOOL)arg1 ;
-(BOOL)shouldShowScenesPage;
-(BOOL)shouldShowServicesPage;
@end


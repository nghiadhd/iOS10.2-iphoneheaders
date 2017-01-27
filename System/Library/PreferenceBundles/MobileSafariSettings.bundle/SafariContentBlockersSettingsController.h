/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafariSettings/SafariSettingsListController.h>
#import <libobjc.A.dylib/SFContentBlockerManagerObserver.h>

@class _UIContentUnavailableView, NSString;

@interface SafariContentBlockersSettingsController : SafariSettingsListController <SFContentBlockerManagerObserver> {

	_UIContentUnavailableView* _contentUnavailableView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)contentBlockerManagerExtensionListDidChange:(id)arg1 ;
-(void)_setValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_valueOfSpecifier:(id)arg1 ;
-(void)_showContentUnavailableView;
-(void)_hideContentUnavailableView;
-(id)specifiers;
@end


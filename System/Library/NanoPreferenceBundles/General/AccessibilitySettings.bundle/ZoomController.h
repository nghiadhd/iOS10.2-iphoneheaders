/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/NanoPreferenceBundles/General/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NPSDomainAccessor;

@interface ZoomController : PSListController {

	NPSDomainAccessor* _axDomainAccessor;

}

@property (retain) NPSDomainAccessor * axDomainAccessor;              //@synthesize axDomainAccessor=_axDomainAccessor - In the implementation block
-(NPSDomainAccessor *)axDomainAccessor;
-(void)setZoomEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setAxDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(void)setGizmoAxPref:(id)arg1 forKey:(id)arg2 ;
-(id)zoomEnabled:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)reload;
-(void)viewDidLoad;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)specifiers;
@end


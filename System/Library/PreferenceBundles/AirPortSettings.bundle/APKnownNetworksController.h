/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortSettings/AirPortSettings-Structs.h>
#import <Preferences/PSEditableListController.h>

@class NSSet;

@interface APKnownNetworksController : PSEditableListController {

	CFLocaleRef _locale;
	CFDateFormatterRef _formatter;
	NSSet* _managedNetworkNames;

}
-(id)init;
-(void)dealloc;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(void)_createFormatter;
-(void)removeNetwork:(id)arg1 ;
-(id)specifiers;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WKWebProcessPlugIn.h>

@class NSMapTable, WKWebProcessPlugInController, NSNumber, NSArray, NSString;

@interface WBSWebProcessPlugIn : NSObject <WKWebProcessPlugIn> {

	NSMapTable* _browserContextControllersToWebProcessPlugInPageControllers;
	WKWebProcessPlugInController* _plugInController;

}

@property (nonatomic,readonly) WKWebProcessPlugInController * plugInController;              //@synthesize plugInController=_plugInController - In the implementation block
@property (nonatomic,readonly) NSNumber * doNotTrackEnabledPreference; 
@property (nonatomic,readonly) NSNumber * safeBrowsingEnabledPreference; 
@property (nonatomic,readonly) NSArray * searchEnginesForRedirectToSafeSearch; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)pageControllerWithBrowserContextController:(id)arg1 ;
-(void)didCreatePageController:(id)arg1 forBrowserContextController:(id)arg2 ;
-(void)willDestroyPageController:(id)arg1 forBrowserContextController:(id)arg2 ;
-(void)webProcessPlugIn:(id)arg1 initializeWithObject:(id)arg2 ;
-(void)webProcessPlugIn:(id)arg1 didCreateBrowserContextController:(id)arg2 ;
-(void)webProcessPlugIn:(id)arg1 willDestroyBrowserContextController:(id)arg2 ;
-(NSNumber *)doNotTrackEnabledPreference;
-(NSNumber *)safeBrowsingEnabledPreference;
-(NSArray *)searchEnginesForRedirectToSafeSearch;
-(id)parameterValueForKey:(id)arg1 ;
-(WKWebProcessPlugInController *)plugInController;
@end


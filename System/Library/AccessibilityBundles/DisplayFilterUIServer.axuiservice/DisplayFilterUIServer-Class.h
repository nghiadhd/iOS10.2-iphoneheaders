/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/DisplayFilterUIServer.axuiservice/DisplayFilterUIServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DisplayFilterUIServer/DisplayFilterUIServer-Structs.h>
#import <libobjc.A.dylib/AXUIContentViewControllerDelegate.h>
#import <libobjc.A.dylib/AXUIService.h>

@class AXDisplayFilterOverlayViewController, NSString;

@interface DisplayFilterUIServer : NSObject <AXUIContentViewControllerDelegate, AXUIService> {

	AXDisplayFilterOverlayViewController* __overlayController;

}

@property (nonatomic,retain) AXDisplayFilterOverlayViewController * _overlayController;              //@synthesize _overlayController=__overlayController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(AXDisplayFilterOverlayViewController *)_overlayController;
-(void)set_overlayController:(AXDisplayFilterOverlayViewController *)arg1 ;
-(id)_caFilterForMADisplayFilter:(MADisplayFilterRef)arg1 ;
-(double)desiredWindowLevelForContentViewController:(id)arg1 userInteractionEnabled:(BOOL)arg2 ;
-(id)processMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 error:(id*)arg4 ;
@end


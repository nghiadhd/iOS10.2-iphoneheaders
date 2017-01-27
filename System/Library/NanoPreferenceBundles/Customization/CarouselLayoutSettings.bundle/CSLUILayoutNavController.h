/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class CSLUILayoutViewController;

@interface CSLUILayoutNavController : UINavigationController {

	CSLUILayoutViewController* _layoutViewController;

}

@property (nonatomic,retain) CSLUILayoutViewController * layoutViewController;              //@synthesize layoutViewController=_layoutViewController - In the implementation block
-(void)setLayoutViewController:(CSLUILayoutViewController *)arg1 ;
-(CSLUILayoutViewController *)layoutViewController;
-(void)resetIconPositions;
-(id)init;
@end


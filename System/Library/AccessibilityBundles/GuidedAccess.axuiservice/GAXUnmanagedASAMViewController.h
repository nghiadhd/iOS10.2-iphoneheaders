/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSString;

@interface GAXUnmanagedASAMViewController : UIViewController {

	/*^block*/id _resultHandler;
	NSString* _appDisplayName;

}

@property (nonatomic,copy) id resultHandler;                       //@synthesize resultHandler=_resultHandler - In the implementation block
@property (nonatomic,copy) NSString * appDisplayName;              //@synthesize appDisplayName=_appDisplayName - In the implementation block
-(id)initWithApplicationDisplayName:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSString *)appDisplayName;
-(void)setAppDisplayName:(NSString *)arg1 ;
-(void)setResultHandler:(id)arg1 ;
-(id)resultHandler;
@end


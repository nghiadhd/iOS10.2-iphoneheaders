/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SKCloudServiceSetupRemoteViewControllerDelegate.h>

@protocol SKCloudServiceSetupViewControllerDelegate;
@class _UIResilientRemoteViewContainerViewController, SKCloudServiceSetupReloadContext, SKCloudServiceSetupConfiguration, NSString;

@interface SKCloudServiceSetupViewController : UIViewController <SKCloudServiceSetupRemoteViewControllerDelegate> {

	_UIResilientRemoteViewContainerViewController* _remoteViewContainerViewController;
	BOOL _isRemoteViewControllerReady;
	BOOL _hasInitializedServiceViewController;
	SKCloudServiceSetupReloadContext* _activeCloudServiceSetupReloadContext;
	/*^block*/id _loadCompletionHandler;
	id<SKCloudServiceSetupViewControllerDelegate> _delegate;
	SKCloudServiceSetupConfiguration* _configuration;

}

@property (nonatomic,copy,readonly) SKCloudServiceSetupConfiguration * configuration;                    //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<SKCloudServiceSetupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SKCloudServiceSetupViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SKCloudServiceSetupViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(SKCloudServiceSetupConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_requestRemoteViewController;
-(void)cloudServiceSetupRemoteViewController:(id)arg1 didFinishLoadingWithSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)cloudServiceSetupRemoteViewController:(id)arg1 requestsDismissalWithAnimation:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)reloadWithContext:(id)arg1 ;
-(void)_reloadWithActiveCloudServiceSetupReloadContext;
-(void)_didReceiveRemoteViewController:(id)arg1 ;
-(void)loadWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end


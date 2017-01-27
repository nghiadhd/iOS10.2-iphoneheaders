/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/VSViewServiceHostProtocol.h>

@protocol VSViewServiceRemoteViewControllerDelegate;
@class NSString;

@interface VSViewServiceRemoteViewController : _UIRemoteViewController <VSViewServiceHostProtocol> {

	id<VSViewServiceRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VSViewServiceRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)setDelegate:(id<VSViewServiceRemoteViewControllerDelegate>)arg1 ;
-(id<VSViewServiceRemoteViewControllerDelegate>)delegate;
-(void)_dismissViewController;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)_presentViewController;
-(void)_request:(id)arg1 didFinishWithResponse:(id)arg2 ;
-(void)_request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_didChooseAdditionalProvidersForRequest:(id)arg1 ;
-(void)_didCancelRequest:(id)arg1 ;
@end


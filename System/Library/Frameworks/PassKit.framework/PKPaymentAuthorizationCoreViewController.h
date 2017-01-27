/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationServiceProtocol.h>

@protocol PKPaymentAuthorizationHostProtocol;
@class PKPaymentAuthorizationLayout, PKPaymentAuthorizationStateMachine, PKPaymentAuthorizationDataModel, NSString;

@interface PKPaymentAuthorizationCoreViewController : UIViewController <PKPaymentAuthorizationServiceProtocol> {

	long long _paymentAuthorizationStyle;
	PKPaymentAuthorizationLayout* _paymentAuthorizationLayout;
	PKPaymentAuthorizationStateMachine* _stateMachine;
	PKPaymentAuthorizationDataModel* _dataModel;
	id<PKPaymentAuthorizationHostProtocol> _delegate;

}

@property (nonatomic,readonly) long long paymentAuthorizationStyle;                                    //@synthesize paymentAuthorizationStyle=_paymentAuthorizationStyle - In the implementation block
@property (nonatomic,readonly) PKPaymentAuthorizationLayout * paymentAuthorizationLayout;              //@synthesize paymentAuthorizationLayout=_paymentAuthorizationLayout - In the implementation block
@property (nonatomic,readonly) PKPaymentAuthorizationStateMachine * stateMachine;                      //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) PKPaymentAuthorizationDataModel * dataModel;                            //@synthesize dataModel=_dataModel - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationHostProtocol> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<PKPaymentAuthorizationHostProtocol>)arg1 ;
-(id<PKPaymentAuthorizationHostProtocol>)delegate;
-(long long)paymentAuthorizationStyle;
-(PKPaymentAuthorizationLayout *)paymentAuthorizationLayout;
-(PKPaymentAuthorizationDataModel *)dataModel;
-(PKPaymentAuthorizationStateMachine *)stateMachine;
@end


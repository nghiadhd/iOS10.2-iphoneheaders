/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UINavigationController, MusicJSManagedObject, SKUINavigationDocumentController;

@interface MusicModalNavigationStackItem : NSObject {

	UINavigationController* _navigationController;
	MusicJSManagedObject* _jsNavigationDocumentManagedObject;
	long long _lastNavigationControllerOperation;
	SKUINavigationDocumentController* _navigationDocumentController;

}

@property (setter=setJSNavigationDocumentManagedObject:,nonatomic,retain) MusicJSManagedObject * jsNavigationDocumentManagedObject;              //@synthesize jsNavigationDocumentManagedObject=_jsNavigationDocumentManagedObject - In the implementation block
@property (assign,nonatomic) long long lastNavigationControllerOperation;                                                                        //@synthesize lastNavigationControllerOperation=_lastNavigationControllerOperation - In the implementation block
@property (nonatomic,readonly) UINavigationController * navigationController; 
@property (nonatomic,retain) SKUINavigationDocumentController * navigationDocumentController;                                                    //@synthesize navigationDocumentController=_navigationDocumentController - In the implementation block
-(id)init;
-(UINavigationController *)navigationController;
-(id)initWithNavigationController:(id)arg1 ;
-(void)setNavigationDocumentController:(SKUINavigationDocumentController *)arg1 ;
-(SKUINavigationDocumentController *)navigationDocumentController;
-(MusicJSManagedObject *)jsNavigationDocumentManagedObject;
-(long long)lastNavigationControllerOperation;
-(void)setLastNavigationControllerOperation:(long long)arg1 ;
-(void)setJSNavigationDocumentManagedObject:(id)arg1 ;
@end


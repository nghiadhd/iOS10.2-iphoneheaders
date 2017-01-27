/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABContentControllerProtocol.h>

@class UIView;

@interface ABContentController : NSObject <ABContentControllerProtocol> {

	void* _addressBook;
	id _contentControllerDelegate;
	UIView* _contentLayer;

}

@property (assign,nonatomic) void* addressBook; 
-(id)init;
-(id)contentView;
-(void)dealloc;
-(void)reload;
-(void)displayScrollerIndicators;
-(id)initWithContentControllerDelegate:(id)arg1 addressBook:(void*)arg2 ;
-(void)back:(BOOL)arg1 save:(BOOL)arg2 ;
-(id)contentControllerDelegate;
-(void)setContentControllerDelegate:(id)arg1 ;
-(void)cleanUpContentLayer;
-(BOOL)contentViewIsVisible;
-(void)preloadController;
-(void)setAddressBook:(void*)arg1 ;
-(void*)addressBook;
@end


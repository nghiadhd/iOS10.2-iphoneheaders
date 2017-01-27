/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSTabBarItem.h>

@protocol IKJSTabBarItem <JSExport>
@end

#import <libobjc.A.dylib/_IKJSTabBarItemProxy.h>
#import <libobjc.A.dylib/_IKJSTabBarItem.h>

@protocol IKAppNavigationController;
@class NSString, IKJSNavigationDocument, JSManagedValue, IKJSTabBar;

@interface IKJSTabBarItem : IKJSObject <NSObject, IKJSTabBarItem, _IKJSTabBarItemProxy, _IKJSTabBarItem> {

	id<IKAppNavigationController> _navigationControllerDelegate;
	NSString* _identifier;
	IKJSNavigationDocument* _navigationDocument;
	JSManagedValue* _managedNavigationDocument;
	JSManagedValue* _managedSelf;
	IKJSTabBar* _owner;

}

@property (nonatomic,retain) JSManagedValue * managedNavigationDocument;                                       //@synthesize managedNavigationDocument=_managedNavigationDocument - In the implementation block
@property (nonatomic,retain) JSManagedValue * managedSelf;                                                     //@synthesize managedSelf=_managedSelf - In the implementation block
@property (assign,nonatomic,__weak) IKJSTabBar * owner;                                                        //@synthesize owner=_owner - In the implementation block
@property (nonatomic,__weak,readonly) id<IKAppNavigationController> navigationControllerDelegate;              //@synthesize navigationControllerDelegate=_navigationControllerDelegate - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) IKJSNavigationDocument * navigationDocument;                                    //@synthesize navigationDocument=_navigationDocument - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)identifier;
-(IKJSTabBar *)owner;
-(void)setOwner:(IKJSTabBar *)arg1 ;
-(JSManagedValue *)managedSelf;
-(JSManagedValue *)managedNavigationDocument;
-(id)asPrivateIKJSTabBarItem;
-(id)initWithAppContext:(id)arg1 identifier:(id)arg2 navigationController:(id)arg3 owner:(id)arg4 ;
-(void)setManagedNavigationDocument:(JSManagedValue *)arg1 ;
-(void)setManagedSelf:(JSManagedValue *)arg1 ;
-(id<IKAppNavigationController>)navigationControllerDelegate;
-(IKJSNavigationDocument *)navigationDocument;
@end

